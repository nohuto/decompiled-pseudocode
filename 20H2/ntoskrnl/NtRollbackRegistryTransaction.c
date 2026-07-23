/*
 * XREFs of NtRollbackRegistryTransaction @ 0x14072F4E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpRollbackLightWeightTransaction @ 0x1406E2860 (CmpRollbackLightWeightTransaction.c)
 */

NTSTATUS __cdecl NtRollbackRegistryTransaction(HANDLE RegistryTransactionHandle, ULONG Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // eax
  volatile signed __int32 *v6; // rdi
  NTSTATUS v7; // ebx
  PVOID Object; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v10[3]; // [rsp+38h] [rbp-40h] BYREF

  memset(v10, 0, sizeof(v10));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    if ( Flags )
    {
      v7 = -1073741811;
    }
    else
    {
      Object = 0LL;
      v5 = ObReferenceObjectByHandle(
             RegistryTransactionHandle,
             0x10u,
             CmRegistryTransactionType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
      v6 = (volatile signed __int32 *)Object;
      v7 = v5;
      if ( v5 >= 0 )
      {
        CmpAttachToRegistryProcess((__int64)v10);
        v7 = CmpRollbackLightWeightTransaction(v6);
        KiUnstackDetachProcess((__int64)v10, 0);
        if ( v7 >= 0 )
          v7 = 0;
      }
      if ( v6 )
        HalPutDmaAdapter((PADAPTER_OBJECT)v6);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return -1073741431;
  }
  return v7;
}
