/*
 * XREFs of RtlpHpSegPageRangeCountCommittedPages @ 0x180002CC0
 * Callers:
 *     RtlpHpSegReportSegment @ 0x180002BF8 (RtlpHpSegReportSegment.c)
 *     RtlpHpSegPageRangeSplit @ 0x18010F4E8 (RtlpHpSegPageRangeSplit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegPageRangeCountCommittedPages(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // r9

  result = 0LL;
  v4 = a2 + 32LL * a3;
  while ( a2 < v4 )
  {
    result = *(unsigned __int8 *)(a2 + 25) + (unsigned int)result;
    a2 += 32LL;
  }
  return result;
}
