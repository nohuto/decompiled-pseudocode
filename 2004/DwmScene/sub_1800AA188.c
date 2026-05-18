/*
 * XREFs of sub_1800AA188 @ 0x1800AA188
 * Callers:
 *     sub_1800A8530 @ 0x1800A8530 (sub_1800A8530.c)
 *     sub_1800ACE08 @ 0x1800ACE08 (sub_1800ACE08.c)
 * Callees:
 *     sub_1800ACEA0 @ 0x1800ACEA0 (sub_1800ACEA0.c)
 *     sub_1800AD708 @ 0x1800AD708 (sub_1800AD708.c)
 */

__int64 __fastcall sub_1800AA188(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // xmm1_8

  if ( (unsigned __int8)sub_1800AD708() )
    sub_1800ACEA0(a1);
  result = a2;
  v5 = *(_QWORD *)(a1 + 1588);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 1572);
  *(_QWORD *)(a2 + 16) = v5;
  return result;
}
