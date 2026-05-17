/*
 * XREFs of RtlpHpSegReportSegment @ 0x180002BF8
 * Callers:
 *     RtlpHpSegWalk @ 0x1800026A8 (RtlpHpSegWalk.c)
 * Callees:
 *     RtlpHpSegPageRangeCountCommittedPages @ 0x180002CC0 (RtlpHpSegPageRangeCountCommittedPages.c)
 */

__int64 __fastcall RtlpHpSegReportSegment(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // r10d
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // r11
  __int64 v14; // rdx
  __int64 result; // rax

  v5 = a3 + 32LL * *(unsigned __int8 *)(a1 + 10);
  v6 = -*(_DWORD *)a1;
  v7 = RtlpHpSegPageRangeCountCommittedPages(a1, v5, 256 - (unsigned int)*(unsigned __int8 *)(a1 + 10));
  v9 = v6;
  v10 = (v8 + v7) << 12;
  v11 = v6 - v10;
  *(_DWORD *)(a2 + 24) = v10;
  v12 = v5;
  *(_QWORD *)(a2 + 8) = v9;
  *(_DWORD *)(a2 + 28) = v11;
  *(_QWORD *)a2 = v13;
  *(_WORD *)(a2 + 18) = 2;
  *(_BYTE *)(a2 + 17) = 0;
  v14 = v5 & *(_QWORD *)a1;
  v5 += 8160LL;
  *(_QWORD *)(a2 + 32) = v14 + ((v12 - v14) >> 5 << *(_BYTE *)(a1 + 8));
  result = v5 & *(_QWORD *)a1;
  *(_QWORD *)(a2 + 40) = result + ((v5 - result) >> 5 << *(_BYTE *)(a1 + 8));
  return result;
}
