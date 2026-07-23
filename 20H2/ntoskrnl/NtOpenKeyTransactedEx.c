/*
 * XREFs of NtOpenKeyTransactedEx @ 0x1406A12F0
 * Callers:
 *     NtOpenKeyTransacted @ 0x14086A940 (NtOpenKeyTransacted.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     CmOpenKey @ 0x14060C320 (CmOpenKey.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     CmpTransDereferenceTransaction @ 0x1406A16E0 (CmpTransDereferenceTransaction.c)
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
  struct _KTHREAD *v11; // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v13; // eax
  __int64 v14; // rbx
  NTSTATUS v15; // edi
  NTSTATUS v16; // eax
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  PVOID v19; // [rsp+38h] [rbp-20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v11 = KeGetCurrentThread();
  if ( !v10 )
  {
    KeLeaveCriticalRegionThread((__int64)v11);
    return -1073741431;
  }
  PreviousMode = v11->PreviousMode;
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(TransactionHandle, 4u, CmRegistryTransactionType, PreviousMode, &Object, 0LL);
  v14 = (__int64)Object;
  v15 = v13;
  if ( v13 == -1073741788 )
  {
    v19 = 0LL;
    v16 = ObReferenceObjectByHandle(
            TransactionHandle,
            4u,
            (POBJECT_TYPE)TmTransactionObjectType,
            KeGetCurrentThread()->PreviousMode,
            &v19,
            0LL);
    v14 = (__int64)v19;
    v15 = v16;
    goto LABEL_4;
  }
  if ( v13 >= 0 )
  {
    v14 = (unsigned __int64)Object | 1;
LABEL_4:
    if ( v15 >= 0 )
      v15 = CmOpenKey(KeyHandle, DesiredAccess, (__int64)ObjectAttributes, OpenOptions, v14);
  }
  if ( v14 )
    CmpTransDereferenceTransaction(v14);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v15;
}
