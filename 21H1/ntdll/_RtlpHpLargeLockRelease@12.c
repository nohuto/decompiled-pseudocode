/*
 * XREFs of _RtlpHpLargeLockRelease@12 @ 0x4B307A6C
 * Callers:
 *     _RtlpHpLargeReAlloc@16 @ 0x4B37A510 (_RtlpHpLargeReAlloc@16.c)
 *     _RtlpHpSegPageRangeCoalesce@20 @ 0x4B37CA1F (_RtlpHpSegPageRangeCoalesce@20.c)
 *     _RtlpHpSegPageRangeShrink@16 @ 0x4B37D0E7 (_RtlpHpSegPageRangeShrink@16.c)
 * Callees:
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

signed __int32 __fastcall RtlpHpLargeLockRelease(int a1, char a2, int a3)
{
  signed __int32 result; // eax

  if ( (a2 & 1) == 0 )
    return RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a1 + 64));
  return result;
}
