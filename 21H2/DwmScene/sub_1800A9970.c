/*
 * XREFs of sub_1800A9970 @ 0x1800A9970
 * Callers:
 *     sub_1800EB050 @ 0x1800EB050 (sub_1800EB050.c)
 * Callees:
 *     sub_1800A99A4 @ 0x1800A99A4 (sub_1800A99A4.c)
 */

__int64 __fastcall sub_1800A9970(int a1, __int64 a2, char a3)
{
  sub_1800A99A4(a1, a2, 1LL << a3, 0, 1);
  return a2;
}
