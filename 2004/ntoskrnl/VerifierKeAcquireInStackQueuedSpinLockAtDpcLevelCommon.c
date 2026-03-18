/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1409D7588
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1409D7540 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelNoReboot @ 0x1409D7650 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelNoReboot.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14029B0A0 (KeAreInterruptsEnabled.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409C357C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD44 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetIncrementCounter @ 0x1409D44FC (ViTargetIncrementCounter.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon(ULONG_PTR a1, __int64 a2, ULONG_PTR a3)
{
  unsigned __int8 CurrentIrql; // di

  ++dword_140C2A5E8;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(a2, 156LL);
  VfUtilCheckKernelAddress(a1, 8uLL);
  VfUtilCheckKernelAddress(a3, 0x18uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 2) != 0 && CurrentIrql < 2u && KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0x40uLL, CurrentIrql, a3, 0LL);
  return ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR))pXdvKeAcquireInStackQueuedSpinLockAtDpcLevel)(a1, a3);
}
