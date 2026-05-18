/*
 * XREFs of sub_18006AAA4 @ 0x18006AAA4
 * Callers:
 *     sub_180079CB0 @ 0x180079CB0 (sub_180079CB0.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 */

_QWORD *__fastcall sub_18006AAA4(__int64 a1, _QWORD *a2)
{
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18001269C(a2, a1 + 80);
  return a2;
}
