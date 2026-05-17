/*
 * XREFs of LdrpMapResourceFile @ 0x18004BA58
 * Callers:
 *     LdrMapAndVerifyResourceFile @ 0x18004B944 (LdrMapAndVerifyResourceFile.c)
 * Callees:
 *     RtlReleaseRelativeName @ 0x18001A320 (RtlReleaseRelativeName.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001A974 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlImageNtHeader @ 0x180035BD0 (RtlImageNtHeader.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009D5B0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009D5F0 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x18009D710 (NtOpenFile.c)
 *     NtCreateSection @ 0x18009D9F0 (NtCreateSection.c)
 */

__int64 __fastcall LdrpMapResourceFile(__int64 a1, __int128 *a2, char a3, HANDLE *a4, _QWORD *a5, _QWORD *a6)
{
  _QWORD *v9; // r15
  __int64 v10; // rax
  int v11; // esi
  int v12; // ebx
  __int64 v13; // rdi
  void *v14; // rax
  __int64 v15; // rax
  int v16; // ecx
  _QWORD *v17; // rcx
  __int128 v19; // xmm0
  HANDLE Handle; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-61h] BYREF
  __int64 v22; // [rsp+60h] [rbp-59h] BYREF
  __int64 v23; // [rsp+68h] [rbp-51h] BYREF
  __int128 v24; // [rsp+70h] [rbp-49h] BYREF
  __int128 v25; // [rsp+80h] [rbp-39h] BYREF
  void *v26; // [rsp+90h] [rbp-29h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+110h] [rbp+57h] BYREF

  FileHandle = 0LL;
  Handle = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v9 = a5;
      if ( a5 )
      {
        v10 = RtlImageNtHeader(a1 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v10 )
        {
          v12 = -1073741701;
          goto LABEL_25;
        }
        v11 = *(_WORD *)(v10 + 72) < 6u ? 8 : 2;
        if ( a3 )
        {
          v19 = *a2;
          v13 = 0LL;
          v26 = 0LL;
          ObjectAttributes.Length = 48;
          v24 = v19;
        }
        else
        {
          v12 = RtlpDosPathNameToRelativeNtPathName_U(2, *((_QWORD *)a2 + 1), (int)&v24, 0LL, (__int64)&v25);
          if ( v12 < 0 )
            goto LABEL_25;
          v13 = *((_QWORD *)&v24 + 1);
          if ( (_WORD)v25 )
          {
            v14 = v26;
            v24 = v25;
          }
          else
          {
            v14 = 0LL;
            v26 = 0LL;
          }
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = v14;
          if ( v13 )
          {
LABEL_10:
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v24;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v12 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
            if ( v13 )
            {
              RtlReleaseRelativeName((__int64)&v25);
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
            }
            if ( v12 >= 0 )
            {
              v12 = NtCreateSection(&Handle, 983045LL, 0LL, 0LL, v11, 0x8000000, FileHandle);
              if ( v12 >= 0 )
              {
                v22 = 0LL;
                v12 = ZwMapViewOfSection(Handle, -1LL, &v21, 0LL, 0LL, &v22, &v23, 1, 0, v11);
                if ( Handle )
                {
                  NtClose(Handle);
                  Handle = 0LL;
                }
                if ( v12 >= 0 )
                {
                  v15 = RtlImageNtHeader(v21);
                  v16 = v12;
                  if ( !v15 )
                    v16 = -1073741701;
                  v12 = v16;
                  if ( v16 >= 0 )
                  {
                    v17 = a6;
                    *v9 = v21;
                    if ( v17 )
                      *v17 = v23;
                    if ( a4 )
                    {
                      *a4 = FileHandle;
                    }
                    else if ( FileHandle )
                    {
                      NtClose(FileHandle);
                    }
                    return (unsigned int)v12;
                  }
                }
              }
            }
LABEL_25:
            if ( FileHandle )
            {
              NtClose(FileHandle);
              FileHandle = 0LL;
            }
            if ( v21 )
              NtUnmapViewOfSection(-1LL, v21);
            return (unsigned int)v12;
          }
        }
        ObjectAttributes.RootDirectory = 0LL;
        goto LABEL_10;
      }
    }
  }
  return 3221225485LL;
}
