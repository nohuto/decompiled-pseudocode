/*
 * XREFs of VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x1409D84C0
 * Callers:
 *     <none>
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14029B0A0 (KeAreInterruptsEnabled.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409C357C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD44 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierKeReleaseSpinLockFromDpcLevelNoReboot(ULONG_PTR BugCheckParameter3)
{
  unsigned __int8 CurrentIrql; // di

  VfUtilCheckKernelAddress(BugCheckParameter3, 8uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 2) != 0 && CurrentIrql < 2u && KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0x41uLL, CurrentIrql, BugCheckParameter3, 0LL);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvKeReleaseSpinLockFromDpcLevel)(BugCheckParameter3);
}
