/*
 * XREFs of SmKmFreeMdlForLock @ 0x140357D50
 * Callers:
 *     SmFpFree @ 0x1402580A4 (SmFpFree.c)
 *     SmFpCleanup @ 0x14035A0D8 (SmFpCleanup.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x1403574D0 (SmAcquireReleaseCharges.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmFreeMdlForLock(unsigned int *P)
{
  SmAcquireReleaseCharges(P[10], 3, 1);
  ExFreePoolWithTag(P, 0);
}
