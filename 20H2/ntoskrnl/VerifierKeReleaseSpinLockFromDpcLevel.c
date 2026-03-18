/*
 * XREFs of VerifierKeReleaseSpinLockFromDpcLevel @ 0x1409DE450
 * Callers:
 *     <none>
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140226820 (KeAreInterruptsEnabled.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     VfUtilCheckKernelAddress @ 0x1409C959C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D3D64 (VerifierBugCheckIfAppropriate.c)
 *     VfDeadlockReleaseResource @ 0x1409E1348 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseSpinLockFromDpcLevel(ULONG_PTR BugCheckParameter3)
{
  unsigned __int8 CurrentIrql; // di

  VfUtilCheckKernelAddress(BugCheckParameter3, 8uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 0x800) != 0 && CurrentIrql < 2u && KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0x41uLL, CurrentIrql, BugCheckParameter3, 0LL);
  VfDeadlockReleaseResource(BugCheckParameter3);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvKeReleaseSpinLockFromDpcLevel)(BugCheckParameter3);
}
