/*
 * XREFs of sub_1800AFA58 @ 0x1800AFA58
 * Callers:
 *     sub_1800ADE00 @ 0x1800ADE00 (sub_1800ADE00.c)
 *     sub_1800B26D8 @ 0x1800B26D8 (sub_1800B26D8.c)
 * Callees:
 *     sub_1800B2770 @ 0x1800B2770 (sub_1800B2770.c)
 *     sub_1800B2FD8 @ 0x1800B2FD8 (sub_1800B2FD8.c)
 */

__int64 __fastcall sub_1800AFA58(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // xmm1_8

  if ( (unsigned __int8)sub_1800B2FD8() )
    sub_1800B2770(a1);
  result = a2;
  v5 = *(_QWORD *)(a1 + 1588);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 1572);
  *(_QWORD *)(a2 + 16) = v5;
  return result;
}
