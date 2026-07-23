/*
 * XREFs of NtOpenKeyTransactedEx @ 0x140656800
 * Callers:
 *     NtOpenKeyTransacted @ 0x140863C00 (NtOpenKeyTransacted.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     CmOpenKey @ 0x1405EA950 (CmOpenKey.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     CmpTransDereferenceTransaction @ 0x140656BF0 (CmpTransDereferenceTransaction.c)
 */

NTSTATUS __cdecl NtOpenKeyTransactedEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions,
        HANDLE TransactionHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v10; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD *v14; // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v16; // eax
  __int64 v17; // rbx
  NTSTATUS v18; // edi
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  PVOID v25; // [rsp+38h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v14 = KeGetCurrentThread();
  if ( !v10 )
  {
    KeLeaveCriticalRegionThread((__int64)v14, v11, v12, v13);
    return -1073741431;
  }
  PreviousMode = v14->PreviousMode;
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(TransactionHandle, 4u, CmRegistryTransactionType, PreviousMode, &Object, 0LL);
  v17 = (__int64)Object;
  v18 = v16;
  if ( v16 == -1073741788 )
  {
    v25 = 0LL;
    v19 = ObReferenceObjectByHandle(
            TransactionHandle,
            4u,
            (POBJECT_TYPE)TmTransactionObjectType,
            KeGetCurrentThread()->PreviousMode,
            &v25,
            0LL);
    v17 = (__int64)v25;
    v18 = v19;
    goto LABEL_4;
  }
  if ( v16 >= 0 )
  {
    v17 = (unsigned __int64)Object | 1;
LABEL_4:
    if ( v18 >= 0 )
      v18 = CmOpenKey(KeyHandle, DesiredAccess, (__int64)ObjectAttributes, OpenOptions, v17);
  }
  if ( v17 )
    CmpTransDereferenceTransaction(v17);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v20, v21, v22);
  return v18;
}
