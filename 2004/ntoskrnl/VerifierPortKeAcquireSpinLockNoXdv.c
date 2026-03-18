/*
 * XREFs of VerifierPortKeAcquireSpinLockNoXdv @ 0x1409D8BB0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfUtilCheckKernelAddress @ 0x1409C357C (VfUtilCheckKernelAddress.c)
 *     ViTargetIncrementCounter @ 0x1409D44FC (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1409D926C (ViKeRaiseIrqlSanityChecks.c)
 */

KIRQL __fastcall VerifierPortKeAcquireSpinLockNoXdv(PKSPIN_LOCK SpinLock, KIRQL *a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  KIRQL result; // al

  ++dword_140C2A5E8;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a3, 156LL);
  VfUtilCheckKernelAddress((ULONG_PTR)SpinLock, 8uLL);
  LOBYTE(v5) = 2;
  v6 = ViKeRaiseIrqlSanityChecks(v5, 0LL);
  result = KeAcquireSpinLockRaiseToDpc(SpinLock);
  *a2 = result;
  if ( v6 )
    *(_WORD *)(v6 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
