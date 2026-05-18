/*
 * XREFs of sub_1800A40A0 @ 0x1800A40A0
 * Callers:
 *     sub_1800E5780 @ 0x1800E5780 (sub_1800E5780.c)
 * Callees:
 *     sub_1800A40D4 @ 0x1800A40D4 (sub_1800A40D4.c)
 */

__int64 __fastcall sub_1800A40A0(int a1, __int64 a2, char a3)
{
  sub_1800A40D4(a1, a2, 1LL << a3, 0, 1);
  return a2;
}
