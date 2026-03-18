/*
 * XREFs of VfRemLockReportBadReleaseTag @ 0x1409D97E4
 * Callers:
 *     IoReleaseRemoveLockEx @ 0x14030C8D0 (IoReleaseRemoveLockEx.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1409D3D64 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfRemLockReportBadReleaseTag(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  VerifierBugCheckIfAppropriate(0xC4u, 0xD5uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  return 1LL;
}
