/*
 * XREFs of sub_1800FB8EC @ 0x1800FB8EC
 * Callers:
 *     sub_1800FBA20 @ 0x1800FBA20 (sub_1800FBA20.c)
 * Callees:
 *     sub_180017764 @ 0x180017764 (sub_180017764.c)
 *     sub_180098878 @ 0x180098878 (sub_180098878.c)
 *     sub_180098888 @ 0x180098888 (sub_180098888.c)
 *     sub_180098DA0 @ 0x180098DA0 (sub_180098DA0.c)
 *     sub_180098EDC @ 0x180098EDC (sub_180098EDC.c)
 *     sub_1800991D4 @ 0x1800991D4 (sub_1800991D4.c)
 *     sub_18009924C @ 0x18009924C (sub_18009924C.c)
 *     sub_1800994A4 @ 0x1800994A4 (sub_1800994A4.c)
 *     sub_1800FB430 @ 0x1800FB430 (sub_1800FB430.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800FB8EC(
        __int64 *a1,
        _QWORD *a2,
        int a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        char a8,
        char a9,
        char a10)
{
  __int64 v13; // r9

  *(_OWORD *)a1 = 0LL;
  sub_180017764(a2, a1, 1u);
  if ( a8 )
  {
    sub_180098878(*a1, (a5[1] - *a5) >> 1);
    sub_180098888(*a1, *a5);
  }
  else
  {
    sub_1800FB430((unsigned __int64)a5, a4, a6, a7, a10);
  }
  sub_1800991D4(*a1, a3);
  sub_1800994A4(*a1, (a4[1] - *a4) / 12);
  sub_180098EDC(*a1, *a4);
  if ( a10 )
    sub_180098DA0(*a1, *a6, 0, v13);
  if ( a9 )
    sub_18009924C(*a1, *a7);
  return a1;
}
