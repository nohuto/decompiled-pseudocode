/*
 * XREFs of MiOpenHotPatchFile @ 0x1408CCC68
 * Callers:
 *     MiLoadHotPatch @ 0x1408CAD30 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x1408CB090 (MiLoadHotPatchForUserSid.c)
 *     MiPerformImageHotPatch @ 0x1408CD024 (MiPerformImageHotPatch.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     RtlImageNtHeaderEx @ 0x1403276D0 (RtlImageNtHeaderEx.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     MiCreateSystemSection @ 0x140371C2C (MiCreateSystemSection.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x1403FABE0 (ZwOpenFile.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     MiUnmapImageInSystemSpace @ 0x1406C3BF4 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x1406C3D80 (MiMapImageInSystemSpace.c)
 *     RtlFindHotPatchBase @ 0x14091B080 (RtlFindHotPatchBase.c)
 *     RtlFindHotPatchInformation @ 0x14091B0B0 (RtlFindHotPatchInformation.c)
 */

__int64 __fastcall MiOpenHotPatchFile(
        UNICODE_STRING *a1,
        int a2,
        char a3,
        HANDLE *a4,
        PADAPTER_OBJECT *a5,
        _OWORD *a6,
        _DWORD *a7,
        unsigned int *a8)
{
  __int64 v10; // rdx
  int SystemSection; // ebx
  __int64 v12; // r9
  int v13; // ebx
  int v14; // r14d
  int v15; // r15d
  int SessionId; // eax
  __int64 *v17; // rax
  ULONG64 v18; // r14
  PIMAGE_NT_HEADERS v19; // rbx
  unsigned int *p_TimeDateStamp; // r15
  __int64 HotPatchInformation; // rax
  __int64 HotPatchBase; // rax
  int v24; // [rsp+40h] [rbp-128h]
  int v25; // [rsp+48h] [rbp-120h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp-F0h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp-E8h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+88h] [rbp-E0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-D8h] BYREF
  HANDLE *v31; // [rsp+C0h] [rbp-A8h]
  PADAPTER_OBJECT *v32; // [rsp+C8h] [rbp-A0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-98h] BYREF
  PVOID BaseOfImage[10]; // [rsp+E0h] [rbp-88h] BYREF

  v31 = a4;
  v32 = a5;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  IoStatusBlock = 0LL;
  memset(BaseOfImage, 0, sizeof(BaseOfImage));
  OutHeaders = 0LL;
  DmaAdapter = 0LL;
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
    if ( a2 )
    {
      v13 = 2;
      v14 = 285212672;
      v15 = 0;
      SessionId = -1;
    }
    else
    {
      v13 = 16;
      v14 = 0x1000000;
      v15 = 1;
      SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    }
    SystemSection = MiCreateSystemSection(
                      (__int64 *)&DmaAdapter,
                      v10,
                      (int)&ObjectAttributes,
                      v12,
                      v13,
                      v14,
                      0,
                      (__int64)FileHandle,
                      v24,
                      v25,
                      SessionId,
                      v15,
                      a3);
    if ( SystemSection >= 0 )
    {
      v17 = (__int64 *)MiSectionControlArea((__int64)DmaAdapter);
      SystemSection = MiMapImageInSystemSpace(v17, 1, (__int64)BaseOfImage);
      if ( SystemSection >= 0 )
      {
        v18 = (unsigned __int64)LODWORD(BaseOfImage[2]) << 12;
        SystemSection = RtlImageNtHeaderEx(0, BaseOfImage[0], v18, &OutHeaders);
        if ( SystemSection >= 0 )
        {
          v19 = OutHeaders;
          p_TimeDateStamp = &OutHeaders->FileHeader.TimeDateStamp;
          if ( &OutHeaders->FileHeader.TimeDateStamp < (unsigned int *)OutHeaders
            || p_TimeDateStamp > (unsigned int *)((char *)BaseOfImage[0] + v18) )
          {
            SystemSection = -1073741701;
          }
          else
          {
            if ( OutHeaders->FileHeader.Machine != 0x8664 )
            {
              SystemSection = -1073741701;
              goto LABEL_24;
            }
            HotPatchInformation = RtlFindHotPatchInformation(BaseOfImage[0]);
            if ( !HotPatchInformation )
            {
              SystemSection = -1073741701;
              goto LABEL_24;
            }
            if ( a7 )
            {
              HotPatchBase = RtlFindHotPatchBase(HotPatchInformation);
              if ( !HotPatchBase )
              {
                SystemSection = -1073741701;
                goto LABEL_24;
              }
              *a7 = *(_DWORD *)(HotPatchBase + 12);
              a7[1] = *(_DWORD *)(HotPatchBase + 8);
            }
            if ( a8 )
            {
              *a8 = v19->OptionalHeader.CheckSum;
              a8[1] = *p_TimeDateStamp;
            }
            *v31 = FileHandle;
            FileHandle = 0LL;
            *v32 = DmaAdapter;
            DmaAdapter = 0LL;
            if ( a6 )
            {
              *a6 = *(_OWORD *)BaseOfImage;
              a6[1] = *(_OWORD *)&BaseOfImage[2];
              a6[2] = *(_OWORD *)&BaseOfImage[4];
              a6[3] = *(_OWORD *)&BaseOfImage[6];
              a6[4] = *(_OWORD *)&BaseOfImage[8];
              BaseOfImage[0] = 0LL;
            }
            SystemSection = 0;
          }
        }
      }
    }
  }
LABEL_24:
  if ( BaseOfImage[0] )
    MiUnmapImageInSystemSpace((unsigned __int64 *)BaseOfImage);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( FileHandle )
    ObCloseHandle(FileHandle, 0);
  return (unsigned int)SystemSection;
}
