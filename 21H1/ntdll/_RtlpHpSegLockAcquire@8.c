/*
 * XREFs of _RtlpHpSegLockAcquire@8 @ 0x4B307A34
 * Callers:
 *     _RtlpHpLargeReAlloc@16 @ 0x4B37A510 (_RtlpHpLargeReAlloc@16.c)
 *     _RtlpHpSegPageRangeCoalesce@20 @ 0x4B37CA1F (_RtlpHpSegPageRangeCoalesce@20.c)
 *     _RtlpHpSegPageRangeShrink@16 @ 0x4B37D0E7 (_RtlpHpSegPageRangeShrink@16.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 */

char __fastcall RtlpHpSegLockAcquire(_RTL_SRWLOCK *a1, char a2)
{
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 16);
  return -1;
}
