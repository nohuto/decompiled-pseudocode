/*
 * XREFs of sub_1800D22AC @ 0x1800D22AC
 * Callers:
 *     sub_1800EC150 @ 0x1800EC150 (sub_1800EC150.c)
 *     sub_1800EF2E0 @ 0x1800EF2E0 (sub_1800EF2E0.c)
 *     sub_1800F0100 @ 0x1800F0100 (sub_1800F0100.c)
 *     sub_18010FA20 @ 0x18010FA20 (sub_18010FA20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D22AC(int a1, int a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = 262160LL;
  if ( a2 != 4 )
    v3 = 16LL;
  return a3 | ((__int64)a1 << 38) | v3;
}
