/*
 * XREFs of sub_1800E24A0 @ 0x1800E24A0
 * Callers:
 *     sub_180030500 @ 0x180030500 (sub_180030500.c)
 *     sub_1800E58D0 @ 0x1800E58D0 (sub_1800E58D0.c)
 *     sub_1800E5AC0 @ 0x1800E5AC0 (sub_1800E5AC0.c)
 * Callees:
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 */

__int64 *__fastcall sub_1800E24A0(__int64 *a1, __int64 a2)
{
  *a1 = (a2 + 8) & -(__int64)(a2 != 0);
  sub_180047458(a1);
  return a1;
}
