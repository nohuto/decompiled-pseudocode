/*
 * XREFs of sub_1801343FC @ 0x1801343FC
 * Callers:
 *     sub_18007BB05 @ 0x18007BB05 (sub_18007BB05.c)
 *     sub_18007BB37 @ 0x18007BB37 (sub_18007BB37.c)
 * Callees:
 *     sub_180060310 @ 0x180060310 (sub_180060310.c)
 *     sub_1800F06D0 @ 0x1800F06D0 (sub_1800F06D0.c)
 */

__int64 __fastcall sub_1801343FC(__int64 a1)
{
  __int64 v2; // rcx

  sub_1800F06D0((__int64 *)(a1 + 24));
  sub_180060310(v2, *(_QWORD *)(a1 + 8));
  return sub_1800472E0(*(_QWORD *)(a1 + 8), 0x38uLL);
}
