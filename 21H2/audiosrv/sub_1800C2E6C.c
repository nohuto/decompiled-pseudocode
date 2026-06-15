/*
 * XREFs of sub_1800C2E6C @ 0x1800C2E6C
 * Callers:
 *     sub_1800C2ED0 @ 0x1800C2ED0 (sub_1800C2ED0.c)
 *     sub_1800C31A0 @ 0x1800C31A0 (sub_1800C31A0.c)
 * Callees:
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800C3630 @ 0x1800C3630 (sub_1800C3630.c)
 */

unsigned __int64 __fastcall sub_1800C2E6C(_QWORD *a1, __int64 *a2)
{
  unsigned __int64 v2; // rdi

  v2 = a1[1];
  if ( v2 >= a1[2] && !(unsigned __int8)sub_1800C3630(a1, v2 + 1) )
    sub_1800B8610(-2147024882);
  sub_180048790((_QWORD *)(*a1 + 8 * v2), *a2);
  ++a1[1];
  return v2;
}
