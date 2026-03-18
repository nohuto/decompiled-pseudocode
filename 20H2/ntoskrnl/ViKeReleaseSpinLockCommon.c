/*
 * XREFs of ViKeReleaseSpinLockCommon @ 0x1409DF370
 * Callers:
 *     VerifierKeReleaseSpinLock @ 0x1409DE3E0 (VerifierKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLock @ 0x1409DE560 (VerifierPortKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLockNoXdv @ 0x1409DEC60 (VerifierPortKeReleaseSpinLockNoXdv.c)
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x1409C959C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D3D64 (VerifierBugCheckIfAppropriate.c)
 *     ViKeLowerIrqlSanityChecks @ 0x1409DF148 (ViKeLowerIrqlSanityChecks.c)
 */

char *__fastcall ViKeReleaseSpinLockCommon(ULONG_PTR BugCheckParameter3, unsigned __int8 a2)
{
  unsigned __int8 CurrentIrql; // bl

  VfUtilCheckKernelAddress(BugCheckParameter3, 8uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 2) != 0 && CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, BugCheckParameter3, 0LL);
  return ViKeLowerIrqlSanityChecks(CurrentIrql, a2);
}
