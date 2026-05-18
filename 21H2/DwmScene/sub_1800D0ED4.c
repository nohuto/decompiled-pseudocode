/*
 * XREFs of sub_1800D0ED4 @ 0x1800D0ED4
 * Callers:
 *     sub_1800D0528 @ 0x1800D0528 (sub_1800D0528.c)
 * Callees:
 *     sub_180017874 @ 0x180017874 (sub_180017874.c)
 *     sub_18006821C @ 0x18006821C (sub_18006821C.c)
 *     sub_1800A1030 @ 0x1800A1030 (sub_1800A1030.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD **__fastcall sub_1800D0ED4(_QWORD **a1, _QWORD *a2, _DWORD *a3)
{
  *(_OWORD *)a1 = 0LL;
  sub_180017874(a2, a1, 1u);
  sub_18006821C((__int64)*a1, 1, 0);
  sub_18006821C((__int64)*a1, 2, 0);
  sub_18006821C((__int64)*a1, 4, 0);
  sub_1800A1030(*a1, a3, 0LL);
  return a1;
}
