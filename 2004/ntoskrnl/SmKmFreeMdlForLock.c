/*
 * XREFs of SmKmFreeMdlForLock @ 0x140304C04
 * Callers:
 *     SmFpFree @ 0x1402D03CC (SmFpFree.c)
 *     SmFpCleanup @ 0x140302824 (SmFpCleanup.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x140305F04 (SmAcquireReleaseCharges.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmFreeMdlForLock(unsigned int *P)
{
  SmAcquireReleaseCharges(P[10], 3LL, 1LL);
  ExFreePoolWithTag(P, 0);
}
