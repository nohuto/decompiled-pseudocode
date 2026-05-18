/*
 * XREFs of sub_1800D25F4 @ 0x1800D25F4
 * Callers:
 *     sub_1800EB050 @ 0x1800EB050 (sub_1800EB050.c)
 *     sub_1800EC150 @ 0x1800EC150 (sub_1800EC150.c)
 *     sub_1800EC660 @ 0x1800EC660 (sub_1800EC660.c)
 *     sub_1800EF2E0 @ 0x1800EF2E0 (sub_1800EF2E0.c)
 *     sub_1800F0100 @ 0x1800F0100 (sub_1800F0100.c)
 *     sub_18010F9D0 @ 0x18010F9D0 (sub_18010F9D0.c)
 *     sub_18010FA20 @ 0x18010FA20 (sub_18010FA20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D25F4(int a1, int a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = 65537LL;
  if ( a2 != 4 )
    v3 = 1LL;
  return a3 | ((__int64)a1 << 32) | v3;
}
