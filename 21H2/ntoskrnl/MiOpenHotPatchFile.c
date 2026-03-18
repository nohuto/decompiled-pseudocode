/*
 * XREFs of MiOpenHotPatchFile @ 0x14097638C
 * Callers:
 *     MiLoadHotPatch @ 0x140974020 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x1409743A4 (MiLoadHotPatchForUserSid.c)
 * Callees:
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     MiCreateSystemSection @ 0x1402D9E3C (MiCreateSystemSection.c)
 *     RtlImageNtHeaderEx @ 0x1402FD9C0 (RtlImageNtHeaderEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiMapImageInSystemSpace @ 0x1406F3884 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1406F39F8 (MiUnmapImageInSystemSpace.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     RtlFindHotPatchBase @ 0x1409C0550 (RtlFindHotPatchBase.c)
 *     RtlFindHotPatchInformation @ 0x1409C0580 (RtlFindHotPatchInformation.c)
 */

__int64 __fastcall MiOpenHotPatchFile(
        UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        HANDLE *a4,
        PVOID *a5,
        __int64 a6,
        _DWORD *a7)
{
  __int64 v9; // rdx
  int SystemSection; // ebx
  __int64 v11; // r9
  __int64 *v12; // rax
  unsigned __int64 v13; // rsi
  __int16 v14; // ax
  __int64 HotPatchInformation; // rax
  __int64 HotPatchBase; // rax
  int v18; // [rsp+40h] [rbp-118h]
  int v19; // [rsp+48h] [rbp-110h]
  PVOID Object; // [rsp+78h] [rbp-E0h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp-D8h] BYREF
  unsigned __int64 v22; // [rsp+88h] [rbp-D0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-C8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-98h] BYREF
  ULONG_PTR v25[10]; // [rsp+D0h] [rbp-88h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  IoStatusBlock = 0LL;
  memset(v25, 0, sizeof(v25));
  v22 = 0LL;
  Object = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  SystemSection = ZwOpenFile(&FileHandle, 0x20u, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  if ( SystemSection >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SystemSection = MiCreateSystemSection(
                      (__int64 *)&Object,
                      v9,
                      (int)&ObjectAttributes,
                      v11,
                      2,
                      285212672,
                      0,
                      (__int64)FileHandle,
                      v18,
                      v19,
                      -1,
                      0,
                      0);
    if ( SystemSection >= 0 )
    {
      v12 = (__int64 *)MiSectionControlArea((__int64)Object);
      SystemSection = MiMapImageInSystemSpace(v12, 1, (__int64)v25);
      if ( SystemSection >= 0 )
      {
        v13 = (unsigned __int64)LODWORD(v25[2]) << 12;
        SystemSection = RtlImageNtHeaderEx(0, v25[0], v13, &v22);
        if ( SystemSection >= 0 )
        {
          if ( v22 + 24 < v22 || v22 + 24 > v13 + v25[0] )
          {
            SystemSection = -1073741701;
          }
          else
          {
            if ( v13 >= 0xFFFFFFFF )
            {
              SystemSection = -1073739516;
              goto LABEL_21;
            }
            v14 = *(_WORD *)(v22 + 4);
            if ( v14 != -31132 && v14 != 332 && v14 != -21916 )
            {
              SystemSection = -1073741701;
              goto LABEL_21;
            }
            HotPatchInformation = RtlFindHotPatchInformation(v25[0]);
            if ( !HotPatchInformation )
            {
              SystemSection = -1073741701;
              goto LABEL_21;
            }
            if ( a7 )
            {
              HotPatchBase = RtlFindHotPatchBase(HotPatchInformation);
              if ( !HotPatchBase )
              {
                SystemSection = -1073741701;
                goto LABEL_21;
              }
              *a7 = *(_DWORD *)(HotPatchBase + 12);
              a7[1] = *(_DWORD *)(HotPatchBase + 8);
            }
            *a4 = FileHandle;
            FileHandle = 0LL;
            *a5 = Object;
            Object = 0LL;
            SystemSection = 0;
          }
        }
      }
    }
  }
LABEL_21:
  if ( v25[0] )
    MiUnmapImageInSystemSpace(v25);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( FileHandle )
    ObCloseHandle(FileHandle, 0);
  return (unsigned int)SystemSection;
}
