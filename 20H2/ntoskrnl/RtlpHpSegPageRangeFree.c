/*
 * XREFs of RtlpHpSegPageRangeFree @ 0x140593554
 * Callers:
 *     RtlpHpSegAlloc @ 0x1402CC910 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x1402CDD70 (RtlpHpSegPageRangeShrink.c)
 */

__int64 __fastcall RtlpHpSegPageRangeFree(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlpHpSegPageRangeShrink(a1, a2, a3, (unsigned int)a3);
}
