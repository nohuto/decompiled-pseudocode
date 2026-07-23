/*
 * XREFs of RtlpHpSegSubAllocate @ 0x180078588
 * Callers:
 *     RtlpHpSegVsAllocate @ 0x180078570 (RtlpHpSegVsAllocate.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x180029B70 (RtlpHpSegAlloc.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x18010F44C (RtlpHpSegPageRangeComputeLargePageCost.c)
 */

void *__fastcall RtlpHpSegSubAllocate(__int64 a1, unsigned int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  int v6; // eax
  void *v9; // rax
  void *v10; // rsi

  v6 = a3 | 4;
  if ( a2 < 0x10000 )
    v6 = a3;
  v9 = RtlpHpSegAlloc(a1, a2, a2, 0LL, v6);
  *a4 = 0;
  v10 = v9;
  *a5 = 0;
  if ( v9
    && ((RtlpHpLfhPerfFlags & 0x80u) != 0 && BYTE1(*(_OWORD *)(a1 + 40)) >= 2u
     || (RtlpHpLfhPerfFlags & 0x100) != 0
     && (*(_BYTE *)(a1 + 13) & 7) != 0
     && (int)RtlpHpSegPageRangeComputeLargePageCost(a1, v9, a2) <= 1) )
  {
    *a4 |= 1u;
  }
  return v10;
}
