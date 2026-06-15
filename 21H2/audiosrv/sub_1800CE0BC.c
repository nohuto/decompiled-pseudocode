/*
 * XREFs of sub_1800CE0BC @ 0x1800CE0BC
 * Callers:
 *     sub_18009218B @ 0x18009218B (sub_18009218B.c)
 *     sub_1800CDBA8 @ 0x1800CDBA8 (sub_1800CDBA8.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800C3630 @ 0x1800C3630 (sub_1800C3630.c)
 */

unsigned __int64 __fastcall sub_1800CE0BC(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 result; // rax

  v2 = a1[1];
  if ( v2 >= a1[2] && !sub_1800C3630((__int64)a1, v2 + 1) )
    sub_1800B8610(-2147024882);
  result = v2;
  *(_QWORD *)(*a1 + 8 * v2) = *a2;
  ++a1[1];
  return result;
}
