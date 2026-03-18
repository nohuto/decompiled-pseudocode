/*
 * XREFs of ?DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z @ 0x1C0176060
 * Callers:
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C0124B38 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C0175FB4 (-GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     DpiFdoValidateKmdAndPnpVersionMatch @ 0x1C0181054 (DpiFdoValidateKmdAndPnpVersionMatch.c)
 *     ?DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C0261690 (-DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 */

__int64 __fastcall DxgkpGetFileVersion(struct _UNICODE_STRING *a1, union _LARGE_INTEGER *a2, int *a3)
{
  PVOID v5; // r14
  char v6; // r15
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  int Resource; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // eax
  unsigned __int64 v27; // [rsp+58h] [rbp-E0h] BYREF
  PVOID MappedBase; // [rsp+60h] [rbp-D8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+78h] [rbp-C0h] BYREF
  void *SectionHandle; // [rsp+80h] [rbp-B8h] BYREF
  void *FileHandle; // [rsp+88h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D0h] [rbp-68h] BYREF

  FileHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  IoStatusBlock = 0LL;
  v5 = 0LL;
  SectionHandle = 0LL;
  v27 = 0LL;
  v30 = 0LL;
  MappedBase = 0LL;
  v6 = 1;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( a3 )
    *a3 = 0;
  v31 = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  v10 = v7;
  if ( a3 )
    *a3 = v7;
  if ( v7 < 0 )
  {
    if ( a3 )
      goto LABEL_14;
    goto LABEL_27;
  }
  ObjectAttributes.ObjectName = 0LL;
  v11 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x1000000u, FileHandle);
  v10 = v11;
  if ( v11 < 0 )
    goto LABEL_27;
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(SectionHandle, 4u, 0LL, 0, &Object, 0LL);
  v10 = v12;
  v5 = Object;
  if ( v12 < 0 )
    goto LABEL_27;
  v13 = MmMapViewInSystemSpaceEx(Object, &MappedBase, &v27, &v30, 1LL);
  v17 = v13;
  if ( v13 < 0 )
  {
    v25 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v25 + 24) = v17;
    WdLogEvent5_WdWarning(v25);
    MappedBase = 0LL;
    v27 = 0LL;
    v30 = 0LL;
    v6 = 0;
    KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
    v26 = MmMapViewOfSection(v5, PsInitialSystemProcess, &MappedBase, 0LL, 0LL, &v30, &v27, 2, 0, 2, 0);
    v10 = v26;
    if ( v26 < 0 )
    {
LABEL_27:
      v24 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v24 + 24) = v10;
      WdLogEvent5_WdError(v24);
      goto LABEL_14;
    }
  }
  a2->QuadPart = 0LL;
  Resource = LdrResFindResource(MappedBase, 16LL, 1LL, 0LL, &v31, &v27, 0LL, 0LL, 16);
  v10 = Resource;
  if ( Resource < 0 )
  {
    v22 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v22 + 24) = v10;
    WdLogEvent5_WdError(v22);
    LODWORD(v10) = 0;
  }
  else if ( v27 >= 0x5C && !wcsncmp((const wchar_t *)(v31 + 6), L"VS_VERSION_INFO", 0x20uLL) )
  {
    v21 = v31;
    a2->HighPart = *(_DWORD *)(v31 + 48);
    a2->LowPart = *(_DWORD *)(v21 + 52);
  }
LABEL_14:
  if ( MappedBase )
  {
    if ( v6 )
      MmUnmapViewInSystemSpace(MappedBase);
    else
      MmUnmapViewOfSection(PsInitialSystemProcess);
  }
  if ( !v6 )
    KeUnstackDetachProcess(&ApcState);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v10;
}
