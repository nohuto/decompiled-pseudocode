/*
 * XREFs of _RtlpHpSegPageRangeCountCommittedPages@12 @ 0x4B37CE8E
 * Callers:
 *     _RtlpHpSegPageRangeSplit@12 @ 0x4B37D204 (_RtlpHpSegPageRangeSplit@12.c)
 *     _RtlpHpSegReportSegment@12 @ 0x4B37D51F (_RtlpHpSegReportSegment@12.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpSegPageRangeCountCommittedPages(int a1, unsigned int a2, int a3)
{
  int result; // eax
  unsigned int v4; // esi

  result = 0;
  v4 = a2 + 16 * a3;
  while ( a2 < v4 )
  {
    result += *(unsigned __int8 *)(a2 + 12) >> 5;
    a2 += 16;
  }
  return result;
}
