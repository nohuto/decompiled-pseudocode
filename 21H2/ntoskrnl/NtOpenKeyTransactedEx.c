/*
 * XREFs of NtOpenKeyTransactedEx @ 0x1405DEBF0
 * Callers:
 *     NtOpenKeyTransacted @ 0x1408686C0 (NtOpenKeyTransacted.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     CmpTransDereferenceTransaction @ 0x1405DEFE0 (CmpTransDereferenceTransaction.c)
 *     CmOpenKey @ 0x14064A150 (CmOpenKey.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtOpenKeyTransactedEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions,
        HANDLE TransactionHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebp
  int v9; // r15d
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
  v7 = (int)ObjectAttributes;
  v9 = (int)KeyHandle;
  --CurrentThread->KernelApcDisable;
  v10 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
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
      v18 = CmOpenKey(v9, DesiredAccess, v7, OpenOptions, v17);
  }
  if ( v17 )
    CmpTransDereferenceTransaction(v17);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v20, v21, v22);
  return v18;
}
