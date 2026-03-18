/*
 * XREFs of VfRemLockReportBadReleaseAndWaitTag @ 0x1409D3794
 * Callers:
 *     IoReleaseRemoveLockAndWaitEx @ 0x140398510 (IoReleaseRemoveLockAndWaitEx.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD44 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfRemLockReportBadReleaseAndWaitTag(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3)
{
  VerifierBugCheckIfAppropriate(0xC4u, 0xD6uLL, BugCheckParameter2, BugCheckParameter3, a3);
  return 1LL;
}
