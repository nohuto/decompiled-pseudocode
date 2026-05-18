/*
 * XREFs of sub_1800CB604 @ 0x1800CB604
 * Callers:
 *     sub_1800CAC58 @ 0x1800CAC58 (sub_1800CAC58.c)
 * Callees:
 *     sub_180017634 @ 0x180017634 (sub_180017634.c)
 *     sub_18006294C @ 0x18006294C (sub_18006294C.c)
 *     sub_18009B760 @ 0x18009B760 (sub_18009B760.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD **__fastcall sub_1800CB604(_QWORD **a1, _QWORD *a2, _DWORD *a3)
{
  *(_OWORD *)a1 = 0LL;
  sub_180017634(a2, a1, 1u);
  sub_18006294C((__int64)*a1, 1, 0);
  sub_18006294C((__int64)*a1, 2, 0);
  sub_18006294C((__int64)*a1, 4, 0);
  sub_18009B760(*a1, a3, 0LL);
  return a1;
}
