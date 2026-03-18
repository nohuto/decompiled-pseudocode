/*
 * XREFs of ?DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C0302ED8
 * Callers:
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C0301F98 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z @ 0x1C0215344 (-DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z.c)
 *     ?DxgkpCopyFile@@YAJPEBG0@Z @ 0x1C03027D4 (-DxgkpCopyFile@@YAJPEBG0@Z.c)
 *     ?DxgkpDeleteFile@@YAJPEBG@Z @ 0x1C0302D10 (-DxgkpDeleteFile@@YAJPEBG@Z.c)
 *     ?DxgkpGetFileLastWriteTime@@YAJPEAGPEAT_LARGE_INTEGER@@@Z @ 0x1C0302D80 (-DxgkpGetFileLastWriteTime@@YAJPEAGPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall DxgkpPopulateFile(const WCHAR *a1, _WORD *a2, int a3)
{
  bool v4; // si
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r9
  char v8; // r12
  unsigned int v9; // ebx
  ULONG v10; // r13d
  void *v11; // r14
  __int64 v12; // rax
  const wchar_t *v13; // rbx
  int FileVersion; // eax
  const WCHAR *v15; // rbx
  int v16; // eax
  NTSTATUS v17; // eax
  union _LARGE_INTEGER v19; // [rsp+58h] [rbp-59h] BYREF
  union _LARGE_INTEGER v20; // [rsp+60h] [rbp-51h] BYREF
  union _LARGE_INTEGER v21; // [rsp+68h] [rbp-49h] BYREF
  union _LARGE_INTEGER v22; // [rsp+70h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-29h] BYREF
  struct _UNICODE_STRING v25; // [rsp+98h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-9h] BYREF
  void *FileHandle; // [rsp+130h] [rbp+7Fh] BYREF

  v4 = 0;
  v5 = -1LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v25 = 0LL;
  FileHandle = (void *)-1LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, a1);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenFile(&FileHandle, 0x100100u, &ObjectAttributes, &IoStatusBlock, 7u, 0x204020u);
  v8 = 1;
  if ( (_DWORD)v6 == -1073741790 )
  {
    v8 = 0;
  }
  else if ( (int)v6 < 0 )
  {
    WdLogSingleEntry2(2LL, v6, 831LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to open file in DxgkpPopulateFile: 0x%I64x",
      v6,
      831LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v6;
  }
  do
    ++v5;
  while ( a2[v5] );
  v9 = 2 * v5;
  v10 = 0;
  v11 = 0LL;
  if ( v8 )
  {
    v10 = v9 + 24;
    v12 = operator new[](v9 + 24, 0x4B677844u, 256LL, v7);
    v11 = (void *)v12;
    if ( !v12 )
    {
      WdLogSingleEntry1(6LL, 844LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed allocate memory for LinkInfo in DxgkpPopulateFile",
        844LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v6) = -1073741801;
      goto LABEL_40;
    }
    *(_DWORD *)(v12 + 16) = v9;
    memmove((void *)(v12 + 20), a2, v9);
    LODWORD(v6) = ZwSetInformationFile(FileHandle, &IoStatusBlock, v11, v10, FileLinkInformation);
  }
  if ( (int)v6 >= 0 )
    goto LABEL_39;
  if ( (_DWORD)v6 != -1073741771 && v8 )
    goto LABEL_38;
  if ( a3 != 1 )
    goto LABEL_31;
  v20.QuadPart = 0LL;
  v22.QuadPart = 0LL;
  v19.QuadPart = 0LL;
  v21.QuadPart = 0LL;
  if ( (v9 & 0xFFFFFFFE) < 8 )
    goto LABEL_24;
  v13 = &a2[(unsigned __int64)v9 >> 1];
  if ( _wcsnicmp(v13 - 4, L".dll", 4uLL) )
  {
    if ( _wcsnicmp(v13 - 4, L".exe", 4uLL) )
      goto LABEL_24;
  }
  if ( (int)DxgkpGetFileVersion(&DestinationString, &v20, 0LL) < 0 )
    goto LABEL_24;
  RtlInitUnicodeString(&v25, a2);
  FileVersion = DxgkpGetFileVersion(&v25, &v19, 0LL);
  LODWORD(v6) = FileVersion;
  if ( FileVersion < 0 )
  {
    if ( FileVersion != -1073741772 )
      goto LABEL_24;
LABEL_31:
    v15 = a1;
LABEL_32:
    if ( v8 )
    {
      LODWORD(v6) = DxgkpDeleteFile(a2);
      if ( (int)v6 < 0 )
      {
LABEL_38:
        WdLogSingleEntry2(3LL, (int)v6, 948LL);
        goto LABEL_39;
      }
      v17 = ZwSetInformationFile(FileHandle, &IoStatusBlock, v11, v10, FileLinkInformation);
    }
    else
    {
      v17 = DxgkpCopyFile(v15, a2);
    }
    LODWORD(v6) = v17;
    goto LABEL_37;
  }
  v4 = v20.QuadPart > v19.QuadPart;
  if ( v20.QuadPart != v19.QuadPart )
  {
    v15 = a1;
    goto LABEL_21;
  }
LABEL_24:
  v15 = a1;
  LODWORD(v6) = DxgkpGetFileLastWriteTime(a1, &v22);
  if ( (int)v6 >= 0 )
  {
    v16 = DxgkpGetFileLastWriteTime(a2, &v21);
    LODWORD(v6) = v16;
    if ( v16 < 0 )
    {
      if ( v16 == -1073741772 )
        v4 = 1;
    }
    else if ( v22.QuadPart > v21.QuadPart )
    {
      v4 = 1;
    }
  }
LABEL_21:
  if ( v4 )
    goto LABEL_32;
LABEL_37:
  if ( (int)v6 < 0 )
    goto LABEL_38;
LABEL_39:
  operator delete[](v11);
LABEL_40:
  if ( FileHandle != (void *)-1LL )
    ZwClose(FileHandle);
  return (unsigned int)v6;
}
