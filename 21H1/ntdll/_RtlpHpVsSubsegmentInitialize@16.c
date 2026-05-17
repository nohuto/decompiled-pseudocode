/*
 * XREFs of _RtlpHpVsSubsegmentInitialize@16 @ 0x4B37FED6
 * Callers:
 *     _RtlpHpVsSubsegmentCreate@12 @ 0x4B37FDB3 (_RtlpHpVsSubsegmentCreate@12.c)
 * Callees:
 *     __aullshr @ 0x4B2F6840 (__aullshr.c)
 */

int __fastcall RtlpHpVsSubsegmentInitialize(int a1, int a2, unsigned int a3, int a4)
{
  __int16 v4; // bx
  __int16 v5; // ax
  unsigned int v6; // ebx
  int result; // eax

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v4 = (unsigned int)(a2 - 24) >> 3;
  *(_WORD *)(a1 + 22) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)(a3 >> 12));
  *(_WORD *)(a1 + 20) = v4;
  v5 = (v4 ^ 0x2BED) & 0x7FFF;
  v6 = ((unsigned int)(a2 - 24) >> 3) & 0x7FFF;
  *(_WORD *)(a1 + 22) = v5 | ((a3 == a2) << 15);
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 24) = 2 * v6;
  result = (a1 + 24) ^ RtlpHpHeapGlobals ^ (2 * v6);
  *(_DWORD *)(a1 + 24) = result;
  return result;
}
