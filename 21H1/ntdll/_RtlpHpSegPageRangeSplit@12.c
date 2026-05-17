/*
 * XREFs of _RtlpHpSegPageRangeSplit@12 @ 0x4B37D204
 * Callers:
 *     _RtlpHpSegLargeRangeAllocate@16 @ 0x4B37BBBC (_RtlpHpSegLargeRangeAllocate@16.c)
 *     _RtlpHpSegPageRangeAllocate@12 @ 0x4B37C863 (_RtlpHpSegPageRangeAllocate@12.c)
 * Callees:
 *     _RtlpHpSegPageRangeCountCommittedPages@12 @ 0x4B37CE8E (_RtlpHpSegPageRangeCountCommittedPages@12.c)
 */

unsigned int __fastcall RtlpHpSegPageRangeSplit(int a1, int a2, int a3)
{
  int v4; // edx
  unsigned int v5; // esi
  int v6; // edx
  int v7; // eax

  v4 = *(unsigned __int8 *)(a2 + 15);
  if ( v4 == a3 )
    return 0;
  v6 = v4 - a3;
  v5 = a2 + 16 * a3;
  *(_BYTE *)(v5 + 12) |= 2u;
  *(_BYTE *)(v5 + 16 * v6 - 1) = v6 - 1;
  *(_BYTE *)(v5 + 15) = v6;
  v7 = RtlpHpSegPageRangeCountCommittedPages(v6 - 1, v5, (unsigned __int8)v6);
  *(_DWORD *)v5 = -857879331;
  *(_DWORD *)(v5 + 12) ^= (*(_DWORD *)(v5 + 12) ^ (~v7 << 8)) & 0xFFFF00;
  *(_BYTE *)(v5 - 1) = a3 - 1;
  *(_BYTE *)(a2 + 15) = a3;
  *(_DWORD *)(a2 + 12) ^= (*(_DWORD *)(a2 + 12) ^ (~(~(*(_DWORD *)(a2 + 12) >> 8)
                                                   - (unsigned __int16)~(*(_DWORD *)(v5 + 12) >> 8)) << 8)) & 0xFFFF00;
  return v5;
}
