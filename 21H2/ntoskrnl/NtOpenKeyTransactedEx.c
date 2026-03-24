/*
 * XREFs of NtOpenKeyTransactedEx @ 0x1406A2EF0
 * Callers:
 *     NtOpenKeyTransacted @ 0x140868560 (NtOpenKeyTransacted.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     CmOpenKey @ 0x140655330 (CmOpenKey.c)
 *     CmpTransDereferenceTransaction @ 0x1406A32E0 (CmpTransDereferenceTransaction.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtOpenKeyTransactedEx(HANDLE *a1, int a2, __int64 a3, int a4, HANDLE Handle)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v10; // al
  struct _KTHREAD *v11; // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v13; // eax
  __int64 v14; // rbx
  int v15; // edi
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
    return (unsigned int)-1073741431;
  }
  PreviousMode = v11->PreviousMode;
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(Handle, 4u, CmRegistryTransactionType, PreviousMode, &Object, 0LL);
  v14 = (__int64)Object;
  v15 = v13;
  if ( v13 == -1073741788 )
  {
    v19 = 0LL;
    v16 = ObReferenceObjectByHandle(
            Handle,
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
      v15 = CmOpenKey(a1, a2, a3, a4, v14);
  }
  if ( v14 )
    CmpTransDereferenceTransaction(v14);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v15;
}
