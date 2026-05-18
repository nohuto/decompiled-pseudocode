/*
 * XREFs of sub_1800AFA1C @ 0x1800AFA1C
 * Callers:
 *     sub_1800ADE00 @ 0x1800ADE00 (sub_1800ADE00.c)
 *     sub_18010BED0 @ 0x18010BED0 (sub_18010BED0.c)
 * Callees:
 *     sub_1800AF9DC @ 0x1800AF9DC (sub_1800AF9DC.c)
 */

_OWORD *__fastcall sub_1800AFA1C(__int64 a1, _OWORD *a2)
{
  _OWORD *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _OWORD *result; // rax

  v3 = (_OWORD *)sub_1800AF9DC(a1, 0, 2);
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
