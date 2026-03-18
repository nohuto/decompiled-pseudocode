/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x1409DE190
 * Callers:
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1409DE150 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelNoReboot @ 0x1409DE200 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelNoReboot.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140226820 (KeAreInterruptsEnabled.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D3D64 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon(ULONG_PTR BugCheckParameter3)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 2) != 0 && CurrentIrql < 2u && KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, BugCheckParameter3, 0LL);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvKeReleaseInStackQueuedSpinLockFromDpcLevel)(BugCheckParameter3);
}
