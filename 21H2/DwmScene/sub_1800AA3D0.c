/*
 * XREFs of sub_1800AA3D0 @ 0x1800AA3D0
 * Callers:
 *     sub_1800A4C58 @ 0x1800A4C58 (sub_1800A4C58.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 */

_QWORD *__fastcall sub_1800AA3D0(__int64 a1, _QWORD *a2)
{
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_180020B7C(a2, a1 + 24);
  return a2;
}
