/*
 * XREFs of RtlpHpSegPageRangeFree @ 0x14058F3C4
 * Callers:
 *     RtlpHpSegAlloc @ 0x1402AFD90 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x1402B27B0 (RtlpHpSegPageRangeShrink.c)
 */

__int64 __fastcall RtlpHpSegPageRangeFree(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlpHpSegPageRangeShrink(a1, a2, a3, (unsigned int)a3);
}
