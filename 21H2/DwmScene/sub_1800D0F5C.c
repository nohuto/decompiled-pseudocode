/*
 * XREFs of sub_1800D0F5C @ 0x1800D0F5C
 * Callers:
 *     sub_1800D0528 @ 0x1800D0528 (sub_1800D0528.c)
 *     sub_1800D0A74 @ 0x1800D0A74 (sub_1800D0A74.c)
 * Callees:
 *     sub_180017984 @ 0x180017984 (sub_180017984.c)
 *     sub_18006821C @ 0x18006821C (sub_18006821C.c)
 *     sub_18009FAA4 @ 0x18009FAA4 (sub_18009FAA4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800D0F5C(__int64 *a1, _QWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  size_t v11; // [rsp+40h] [rbp-28h]

  *(_OWORD *)a1 = 0LL;
  sub_180017984(a2, a1, 1u);
  sub_18006821C(*a1, 1, 0);
  sub_18006821C(*a1, 2, 0);
  sub_18006821C(*a1, 4, 0);
  LODWORD(v11) = 0;
  sub_18009FAA4(*a1, a3, a4, 0, a5, a6, a7, 0LL, v11, 0LL);
  return a1;
}
