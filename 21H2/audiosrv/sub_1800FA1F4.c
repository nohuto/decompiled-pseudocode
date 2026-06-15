/*
 * XREFs of sub_1800FA1F4 @ 0x1800FA1F4
 * Callers:
 *     sub_1800FB1A4 @ 0x1800FB1A4 (sub_1800FB1A4.c)
 *     sub_1800FC614 @ 0x1800FC614 (sub_1800FC614.c)
 * Callees:
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800C3630 @ 0x1800C3630 (sub_1800C3630.c)
 */

unsigned __int64 __fastcall sub_1800FA1F4(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rdi

  v2 = a1[1];
  if ( v2 >= a1[2] && !sub_1800C3630((__int64)a1, v2 + 1) )
    sub_1800B8610(-2147024882);
  sub_180048790((_QWORD *)(*a1 + 8 * v2), a2);
  ++a1[1];
  return v2;
}
