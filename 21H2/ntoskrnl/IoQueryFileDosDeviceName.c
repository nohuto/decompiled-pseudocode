/*
 * XREFs of IoQueryFileDosDeviceName @ 0x140620460
 * Callers:
 *     CcMmLogLostDelayedWriteError @ 0x1404EA5C8 (CcMmLogLostDelayedWriteError.c)
 *     NtQueryInformationProcess @ 0x1406212A0 (NtQueryInformationProcess.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B6D68 (PiDrvDbQuerySystemPathWin32.c)
 * Callees:
 *     IopQueryNameInternal @ 0x140620504 (IopQueryNameInternal.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoQueryFileDosDeviceName(PFILE_OBJECT FileObject, POBJECT_NAME_INFORMATION *ObjectNameInformation)
{
  SIZE_T v2; // rdi
  __int64 v5; // rdx
  struct _OBJECT_NAME_INFORMATION *PoolWithTag; // rbx
  __int64 v7; // r8
  NTSTATUS v8; // edi
  int v10; // [rsp+30h] [rbp-18h]
  unsigned int i; // [rsp+60h] [rbp+18h] BYREF

  v2 = 208LL;
  for ( i = 208; ; v2 = i )
  {
    PoolWithTag = (struct _OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, v2, 0x6E446F49u);
    if ( !PoolWithTag )
      break;
    LOBYTE(v10) = 0;
    LOBYTE(v7) = 1;
    v8 = IopQueryNameInternal(FileObject, v5, v7, PoolWithTag, v2, &i, v10);
    if ( !v8 )
    {
      *ObjectNameInformation = PoolWithTag;
      return v8;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( v8 != -2147483643 )
      return v8;
  }
  return -1073741670;
}
