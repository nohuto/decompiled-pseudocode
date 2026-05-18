/*
 * XREFs of sub_1800AA14C @ 0x1800AA14C
 * Callers:
 *     sub_1800A8530 @ 0x1800A8530 (sub_1800A8530.c)
 *     sub_180106600 @ 0x180106600 (sub_180106600.c)
 * Callees:
 *     sub_1800AA10C @ 0x1800AA10C (sub_1800AA10C.c)
 */

_OWORD *__fastcall sub_1800AA14C(__int64 a1, _OWORD *a2)
{
  _OWORD *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _OWORD *result; // rax

  v3 = (_OWORD *)sub_1800AA10C(a1, 0, 2);
  v4 = v3[1];
  *a2 = *v3;
  v5 = v3[2];
  a2[1] = v4;
  v6 = v3[3];
  result = a2;
  a2[2] = v5;
  a2[3] = v6;
  return result;
}
