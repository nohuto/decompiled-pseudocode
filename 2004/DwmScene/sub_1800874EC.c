/*
 * XREFs of sub_1800874EC @ 0x1800874EC
 * Callers:
 *     sub_180087914 @ 0x180087914 (sub_180087914.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 */

_QWORD *__fastcall sub_1800874EC(__int64 a1, _QWORD *a2)
{
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18001269C(a2, a1);
  return a2;
}
