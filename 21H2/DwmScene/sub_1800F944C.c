/*
 * XREFs of sub_1800F944C @ 0x1800F944C
 * Callers:
 *     sub_1800B6794 @ 0x1800B6794 (sub_1800B6794.c)
 * Callees:
 *     sub_180067A50 @ 0x180067A50 (sub_180067A50.c)
 */

_QWORD *__fastcall sub_1800F944C(_QWORD *a1)
{
  sub_180067A50((__int64)a1);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::RenderStateGeneric::`vftable';
  return a1;
}
