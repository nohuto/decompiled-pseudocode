/*
 * XREFs of ?DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C025E370
 * Callers:
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C025D5A0 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z @ 0x1C016EF60 (-DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z.c)
 *     ?DxgkpCopyFile@@YAJPEBG0@Z @ 0x1C025DD08 (-DxgkpCopyFile@@YAJPEBG0@Z.c)
 *     ?DxgkpDeleteFile@@YAJPEBG@Z @ 0x1C025E190 (-DxgkpDeleteFile@@YAJPEBG@Z.c)
 *     ?DxgkpGetFileLastWriteTime@@YAJPEAGPEAT_LARGE_INTEGER@@@Z @ 0x1C025E200 (-DxgkpGetFileLastWriteTime@@YAJPEAGPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall DxgkpPopulateFile(const WCHAR *a1, _WORD *a2, int a3)
{
  bool v4; // si
  __int64 v5; // rdi
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  char v11; // r12
  unsigned int v12; // edi
  ULONG v13; // r13d
  _DWORD *v14; // r14
  _DWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  const wchar_t *v22; // rbx
  int FileVersion; // eax
  const WCHAR *v24; // rdi
  int v25; // eax
  NTSTATUS v26; // eax
  __int64 v27; // rax
  union _LARGE_INTEGER v29; // [rsp+38h] [rbp-59h] BYREF
  union _LARGE_INTEGER v30; // [rsp+40h] [rbp-51h] BYREF
  union _LARGE_INTEGER v31; // [rsp+48h] [rbp-49h] BYREF
  union _LARGE_INTEGER v32; // [rsp+50h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-29h] BYREF
  struct _UNICODE_STRING v35; // [rsp+78h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-9h] BYREF
  void *FileHandle; // [rsp+110h] [rbp+7Fh] BYREF

  v4 = 0;
  v5 = -1LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v35 = 0LL;
  FileHandle = (void *)-1LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, a1);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenFile(&FileHandle, 0x100100u, &ObjectAttributes, &IoStatusBlock, 7u, 0x204020u);
  v10 = v6;
  v11 = 1;
  if ( v6 == -1073741790 )
  {
    v11 = 0;
  }
  else if ( v6 < 0 )
  {
    v21 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v21 + 24) = v10;
    *(_QWORD *)(v21 + 32) = 826LL;
    WdLogEvent5_WdError(v21);
    return (unsigned int)v10;
  }
  do
    ++v5;
  while ( a2[v5] );
  v12 = 2 * v5;
  v13 = 0;
  v14 = 0LL;
  if ( v11 )
  {
    v13 = v12 + 24;
    v15 = operator new[](v12 + 24, 0x4B677844u, PagedPool);
    v14 = v15;
    if ( !v15 )
    {
      v20 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
      *(_QWORD *)(v20 + 24) = 839LL;
      WdLogEvent5_WdLowResource(v20);
      LODWORD(v10) = -1073741801;
      goto LABEL_41;
    }
    memset(v15, 0, v12 + 24);
    v14[4] = v12;
    memmove(v14 + 5, a2, v12);
    LODWORD(v10) = ZwSetInformationFile(FileHandle, &IoStatusBlock, v14, v13, FileLinkInformation);
  }
  if ( (int)v10 >= 0 )
    goto LABEL_40;
  if ( (_DWORD)v10 != -1073741771 && v11 )
    goto LABEL_38;
  if ( a3 != 1 )
  {
    v4 = 1;
    goto LABEL_29;
  }
  v30.QuadPart = 0LL;
  v32.QuadPart = 0LL;
  v29.QuadPart = 0LL;
  v31.QuadPart = 0LL;
  if ( (v12 & 0xFFFFFFFE) >= 8 )
  {
    v22 = &a2[(unsigned __int64)v12 >> 1];
    if ( (!_wcsnicmp(v22 - 4, L".dll", 4uLL) || !_wcsnicmp(v22 - 4, L".exe", 4uLL))
      && (int)DxgkpGetFileVersion(&DestinationString, &v30, 0LL) >= 0 )
    {
      RtlInitUnicodeString(&v35, a2);
      FileVersion = DxgkpGetFileVersion(&v35, &v29, 0LL);
      LODWORD(v10) = FileVersion;
      if ( FileVersion < 0 )
      {
        if ( FileVersion == -1073741772 )
        {
          v24 = a1;
LABEL_33:
          if ( v11 )
          {
            LODWORD(v10) = DxgkpDeleteFile(a2);
            if ( (int)v10 < 0 )
            {
LABEL_39:
              v27 = WdLogNewEntry5_WdWarning(v8, v7, v9);
              *(_QWORD *)(v27 + 24) = (int)v10;
              *(_QWORD *)(v27 + 32) = 944LL;
              WdLogEvent5_WdWarning(v27);
              goto LABEL_40;
            }
            v26 = ZwSetInformationFile(FileHandle, &IoStatusBlock, v14, v13, FileLinkInformation);
          }
          else
          {
            v26 = DxgkpCopyFile(v24, a2);
          }
          LODWORD(v10) = v26;
          goto LABEL_38;
        }
        goto LABEL_22;
      }
      v4 = v30.QuadPart > v29.QuadPart;
      if ( v30.QuadPart != v29.QuadPart )
      {
LABEL_29:
        v24 = a1;
        goto LABEL_30;
      }
    }
  }
LABEL_22:
  v24 = a1;
  LODWORD(v10) = DxgkpGetFileLastWriteTime(a1, &v32);
  if ( (int)v10 < 0 )
    goto LABEL_30;
  v25 = DxgkpGetFileLastWriteTime(a2, &v31);
  LODWORD(v10) = v25;
  if ( v25 < 0 )
  {
    if ( v25 != -1073741772 )
      goto LABEL_30;
  }
  else if ( v32.QuadPart <= v31.QuadPart )
  {
    goto LABEL_30;
  }
  v4 = 1;
LABEL_30:
  if ( v4 )
    goto LABEL_33;
LABEL_38:
  if ( (int)v10 < 0 )
    goto LABEL_39;
LABEL_40:
  operator delete[](v14);
LABEL_41:
  if ( FileHandle != (void *)-1LL )
    ZwClose(FileHandle);
  return (unsigned int)v10;
}
