/*
 * XREFs of RtlpHpSegLfhAllocate @ 0x180029AC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegAlloc @ 0x180029B70 (RtlpHpSegAlloc.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x18010F5EC (RtlpHpSegPageRangeComputeLargePageCost.c)
 */

__int64 __fastcall RtlpHpSegLfhAllocate(__int64 a1, unsigned int a2, char a3, _DWORD *a4, _DWORD *a5)
{
  __int64 v8; // rax
  __int64 v9; // rsi

  v8 = RtlpHpSegAlloc(a1, a3 & 1 | (a2 < 0x10000 ? 0x8000000 : 134217732));
  *a4 = 0;
  v9 = v8;
  *a5 = 0;
  if ( v8
    && ((RtlpHpLfhPerfFlags & 0x80u) != 0 && BYTE1(*(_OWORD *)(a1 + 40)) >= 2u
     || (RtlpHpLfhPerfFlags & 0x100) != 0
     && (*(_BYTE *)(a1 + 13) & 7) != 0
     && (int)RtlpHpSegPageRangeComputeLargePageCost(a1, v8, a2) <= 1) )
  {
    *a4 |= 1u;
  }
  return v9;
}
