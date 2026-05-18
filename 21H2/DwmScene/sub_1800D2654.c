/*
 * XREFs of sub_1800D2654 @ 0x1800D2654
 * Callers:
 *     sub_1800EF2E0 @ 0x1800EF2E0 (sub_1800EF2E0.c)
 *     sub_18010FA20 @ 0x18010FA20 (sub_18010FA20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D2654(int a1, int a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = 1048640LL;
  if ( a2 != 4 )
    v3 = 64LL;
  return a3 | ((__int64)a1 << 50) | v3;
}
