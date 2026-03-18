/*
 * XREFs of VerifierFreeTrackedPool @ 0x14059C7D0
 * Callers:
 *     ExFreeHeapPool @ 0x140289030 (ExFreeHeapPool.c)
 *     ExpFreeHeapSpecialPool @ 0x1405B4B50 (ExpFreeHeapSpecialPool.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD44 (VerifierBugCheckIfAppropriate.c)
 *     ViFreeTrackedPool @ 0x1409D2278 (ViFreeTrackedPool.c)
 */

__int64 __fastcall VerifierFreeTrackedPool(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  if ( !VerifierIsTrackingPool )
    VerifierBugCheckIfAppropriate(0xC2u, 0x99uLL, BugCheckParameter2, 0LL, 0LL);
  return ViFreeTrackedPool(BugCheckParameter2, BugCheckParameter3);
}
