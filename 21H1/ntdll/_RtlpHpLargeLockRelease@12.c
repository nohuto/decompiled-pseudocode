/*
 * XREFs of _RtlpHpLargeLockRelease@12 @ 0x4B307A6C
 * Callers:
 *     _RtlpHpLargeReAlloc@16 @ 0x4B37A510 (_RtlpHpLargeReAlloc@16.c)
 *     _RtlpHpSegPageRangeCoalesce@20 @ 0x4B37CA1F (_RtlpHpSegPageRangeCoalesce@20.c)
 *     _RtlpHpSegPageRangeShrink@16 @ 0x4B37D0E7 (_RtlpHpSegPageRangeShrink@16.c)
 * Callees:
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

void __fastcall RtlpHpLargeLockRelease(_RTL_SRWLOCK *a1, char a2, int a3)
{
  if ( (a2 & 1) == 0 )
    RtlReleaseSRWLockExclusive(a1 + 16);
}
