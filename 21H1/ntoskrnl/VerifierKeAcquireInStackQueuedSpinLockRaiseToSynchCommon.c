/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x1409D77F8
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1409D77B0 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchNoReboot @ 0x1409D7890 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchNoReboot.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1405105E0 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VfUtilCheckKernelAddress @ 0x1409C356C (VfUtilCheckKernelAddress.c)
 *     ViTargetIncrementCounter @ 0x1409D449C (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1409D920C (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon(
        volatile __int64 *a1,
        __int64 a2,
        ULONG_PTR a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 result; // rax

  ++dword_140C2A808;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 156LL);
  VfUtilCheckKernelAddress((ULONG_PTR)a1, 8uLL);
  VfUtilCheckKernelAddress(a3, 0x18uLL);
  LOBYTE(v5) = 12;
  v6 = ViKeRaiseIrqlSanityChecks(v5, 0LL);
  result = KeAcquireInStackQueuedSpinLockRaiseToSynch(a1, a3);
  if ( v6 )
    *(_WORD *)(v6 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
