/*
 * XREFs of SmKmFreeMdlForLock @ 0x140321428
 * Callers:
 *     SmFpFree @ 0x14023D59C (SmFpFree.c)
 *     SmFpCleanup @ 0x1402D1DB4 (SmFpCleanup.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x1402C3C54 (SmAcquireReleaseCharges.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmFreeMdlForLock(unsigned int *P)
{
  SmAcquireReleaseCharges(P[10], 3, 1);
  ExFreePoolWithTag(P, 0);
}
