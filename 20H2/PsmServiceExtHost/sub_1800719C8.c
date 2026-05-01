/*
 * XREFs of sub_1800719C8 @ 0x1800719C8
 * Callers:
 *     sub_180015E80 @ 0x180015E80 (sub_180015E80.c)
 * Callees:
 *     sub_180002400 @ 0x180002400 (sub_180002400.c)
 */

__int64 __fastcall sub_1800719C8(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax

  a4[1] = 0LL;
  a4[2] = 0LL;
  a4[3] = 0LL;
  a4[4] = 0LL;
  *a4 = a3;
  sub_180002400(a2);
  a4[1] = a2;
  result = a1 + 144;
  a4[3] = a1 + 144;
  a4[2] = a1;
  return result;
}
