/*
 * XREFs of _RtlpHpSegReportUncommittedRange@12 @ 0x4B37D5B2
 * Callers:
 *     _RtlpHpSegWalk@12 @ 0x4B37DAD6 (_RtlpHpSegWalk@12.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpSegReportUncommittedRange(int a1, int a2, int a3)
{
  int result; // eax

  *(_DWORD *)a2 = (a3 & *(_DWORD *)a1) + ((a3 - (a3 & *(_DWORD *)a1)) >> 4 << *(_BYTE *)(a1 + 4));
  *(_WORD *)(a2 + 10) = 4096;
  result = *(unsigned __int8 *)(a3 + 15) << *(_BYTE *)(a1 + 4);
  *(_DWORD *)(a2 + 4) = result;
  *(_WORD *)(a2 + 8) = 0;
  return result;
}
