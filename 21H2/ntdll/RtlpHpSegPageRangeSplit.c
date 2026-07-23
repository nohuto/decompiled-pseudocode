/*
 * XREFs of RtlpHpSegPageRangeSplit @ 0x18010F4E8
 * Callers:
 *     RtlpHpSegLargeRangeAllocate @ 0x18010EDF8 (RtlpHpSegLargeRangeAllocate.c)
 * Callees:
 *     RtlpHpSegPageRangeCountCommittedPages @ 0x180002CC0 (RtlpHpSegPageRangeCountCommittedPages.c)
 */

__int64 __fastcall RtlpHpSegPageRangeSplit(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ecx
  __int64 v5; // r11
  __int64 v6; // r10
  int v7; // ecx
  unsigned int v8; // r8d
  __int64 v9; // rcx
  unsigned __int64 v10; // r10
  __int16 v11; // ax
  int v12; // r11d

  v3 = *(unsigned __int8 *)(a2 + 31);
  v5 = a3;
  if ( v3 == a3 )
    return 0LL;
  v7 = v3 - a3;
  v8 = (unsigned __int8)v7;
  v9 = 32LL * (unsigned int)(v7 - 1);
  v10 = a2 + 32 * v5;
  *(_BYTE *)(v10 + 24) |= 2u;
  *(_BYTE *)(v9 + v10 + 31) = v8 - 1;
  *(_BYTE *)(v10 + 31) = v8;
  v11 = RtlpHpSegPageRangeCountCommittedPages(v9, v10, v8);
  *(_DWORD *)v6 = -857879331;
  *(_WORD *)(v6 + 28) = ~v11;
  *(_BYTE *)(32LL * (unsigned int)(v12 - 1) + a2 + 31) = v12 - 1;
  *(_BYTE *)(a2 + 31) = v12;
  *(_WORD *)(a2 + 28) = ~(*(_WORD *)(v6 + 28) - *(_WORD *)(a2 + 28));
  return v6;
}
