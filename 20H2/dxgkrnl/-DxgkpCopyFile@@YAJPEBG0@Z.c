/*
 * XREFs of ?DxgkpCopyFile@@YAJPEBG0@Z @ 0x1C0261028
 * Callers:
 *     ?DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C0261690 (-DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkpCopyAttributes@@YAJPEAX0@Z @ 0x1C0260F38 (-DxgkpCopyAttributes@@YAJPEAX0@Z.c)
 *     ?DxgkpDeleteFile@@YAJPEBG@Z @ 0x1C02614B0 (-DxgkpDeleteFile@@YAJPEBG@Z.c)
 */

__int64 __fastcall DxgkpCopyFile(PCWSTR SourceString, PCWSTR a2)
{
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-39h] BYREF
  struct _UNICODE_STRING v27; // [rsp+80h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES v29; // [rsp+C0h] [rbp+17h] BYREF
  void *FileHandle; // [rsp+120h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+128h] [rbp+7Fh] BYREF

  DestinationString = 0LL;
  v27 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&v27, a2);
  FileHandle = (void *)-1LL;
  Handle = (HANDLE)-1LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_QWORD *)&v29.Length = 48LL;
  *(_QWORD *)&v29.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v29.RootDirectory = 0LL;
  v29.ObjectName = &v27;
  *(_OWORD *)&v29.SecurityDescriptor = 0LL;
  IoStatusBlock = 0LL;
  v3 = ZwCreateFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x4010u, 0LL, 0);
  LODWORD(v6) = v3;
  if ( v3 < 0 )
  {
    if ( v3 == -1073741772 )
      LODWORD(v6) = 0;
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = (int)v6;
    *(_QWORD *)(v7 + 32) = 459LL;
    WdLogEvent5_WdError(v7);
    return (unsigned int)v6;
  }
  v10 = operator new[](0x10000uLL, 0x4B677844u, PagedPool);
  if ( !v10 )
  {
    v13 = WdLogNewEntry5_WdLowResource(v9, v8, v11, v12);
    *(_QWORD *)(v13 + 24) = 467LL;
    WdLogEvent5_WdLowResource(v13);
    LODWORD(v6) = -1073741801;
    goto LABEL_18;
  }
  v14 = ZwCreateFile(&Handle, 0x1F019Fu, &v29, &IoStatusBlock, 0LL, 0x80u, 7u, 5u, 0x4010u, 0LL, 0);
  v6 = v14;
  if ( v14 >= 0 )
  {
    LODWORD(v6) = DxgkpCopyAttributes(FileHandle, Handle);
    if ( (int)v6 < 0 )
      goto LABEL_18;
    while ( 1 )
    {
      v21 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v10, 0x10000u, 0LL, 0LL);
      LODWORD(v6) = v21;
      if ( v21 < 0 )
        break;
      v18 = ZwWriteFile(Handle, 0LL, 0LL, 0LL, &IoStatusBlock, v10, IoStatusBlock.Information, 0LL, 0LL);
      v6 = v18;
      if ( v18 < 0 )
      {
        v17 = WdLogNewEntry5_WdError(v20, v19);
        *(_QWORD *)(v17 + 24) = v6;
        *(_QWORD *)(v17 + 32) = 540LL;
        goto LABEL_17;
      }
    }
    if ( v21 == -1073741807 )
    {
      LODWORD(v6) = 0;
      goto LABEL_18;
    }
    v17 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v17 + 24) = (int)v6;
    *(_QWORD *)(v17 + 32) = 520LL;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v17 + 24) = v6;
    *(_QWORD *)(v17 + 32) = 486LL;
  }
LABEL_17:
  WdLogEvent5_WdError(v17);
LABEL_18:
  if ( Handle != (HANDLE)-1LL )
  {
    ZwClose(Handle);
    if ( (int)v6 < 0 )
      DxgkpDeleteFile(a2);
  }
  operator delete[](v10);
  if ( FileHandle != (void *)-1LL )
    ZwClose(FileHandle);
  return (unsigned int)v6;
}
