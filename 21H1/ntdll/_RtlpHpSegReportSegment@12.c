/*
 * XREFs of _RtlpHpSegReportSegment@12 @ 0x4B37D51F
 * Callers:
 *     _RtlpHpSegWalk@12 @ 0x4B37DAD6 (_RtlpHpSegWalk@12.c)
 * Callees:
 *     _RtlpHpSegPageRangeCountCommittedPages@12 @ 0x4B37CE8E (_RtlpHpSegPageRangeCountCommittedPages@12.c)
 */

int __fastcall RtlpHpSegReportSegment(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // eax
  int result; // eax
  unsigned int v7; // [esp+Ch] [ebp-Ch]

  v3 = *(unsigned __int8 *)(a1 + 6);
  v4 = -*(_DWORD *)a1;
  v7 = a3 + 16 * v3;
  v5 = (v3 + RtlpHpSegPageRangeCountCommittedPages(a1, v7, 256 - v3)) << 12;
  *(_DWORD *)a2 = a3;
  *(_DWORD *)(a2 + 4) = v4;
  *(_DWORD *)(a2 + 16) = v4 - v5;
  *(_DWORD *)(a2 + 12) = v5;
  *(_WORD *)(a2 + 10) = 2;
  *(_BYTE *)(a2 + 9) = 0;
  *(_DWORD *)(a2 + 20) = (v7 & *(_DWORD *)a1) + ((int)(v7 - (v7 & *(_DWORD *)a1)) >> 4 << *(_BYTE *)(a1 + 4));
  result = (v7 + 4080) & *(_DWORD *)a1;
  *(_DWORD *)(a2 + 24) = result + ((int)(v7 + 4080 - result) >> 4 << *(_BYTE *)(a1 + 4));
  return result;
}
