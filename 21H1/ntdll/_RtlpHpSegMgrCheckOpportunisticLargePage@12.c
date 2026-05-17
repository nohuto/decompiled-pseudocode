/*
 * XREFs of _RtlpHpSegMgrCheckOpportunisticLargePage@12 @ 0x4B37BF0E
 * Callers:
 *     _RtlpHpSegAlloc@20 @ 0x4B37B40B (_RtlpHpSegAlloc@20.c)
 * Callees:
 *     _RtlpHpSegPageRangeComputeLargePageCost@12 @ 0x4B37CE0A (_RtlpHpSegPageRangeComputeLargePageCost@12.c)
 */

BOOL __thiscall RtlpHpSegMgrCheckOpportunisticLargePage(_BYTE *this, int a2)
{
  return (this[9] & 7) != 0 && RtlpHpSegPageRangeComputeLargePageCost(a2) <= 2;
}
