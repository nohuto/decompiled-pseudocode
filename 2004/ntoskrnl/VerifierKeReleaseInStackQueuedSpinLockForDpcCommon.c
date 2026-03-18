/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x1409D80A0
 * Callers:
 *     VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x1409D8060 (VerifierKeReleaseInStackQueuedSpinLockForDpc.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcNoReboot @ 0x1409D8110 (VerifierKeReleaseInStackQueuedSpinLockForDpcNoReboot.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14029B0A0 (KeAreInterruptsEnabled.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD44 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLockForDpcCommon(ULONG_PTR BugCheckParameter3)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 2) != 0 && CurrentIrql < 2u && KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, BugCheckParameter3, 0LL);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvKeReleaseInStackQueuedSpinLockForDpc)(BugCheckParameter3);
}
