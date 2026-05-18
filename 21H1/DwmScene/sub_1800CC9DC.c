/*
 * XREFs of sub_1800CC9DC @ 0x1800CC9DC
 * Callers:
 *     sub_1800E6880 @ 0x1800E6880 (sub_1800E6880.c)
 *     sub_1800E9A10 @ 0x1800E9A10 (sub_1800E9A10.c)
 *     sub_1800EA830 @ 0x1800EA830 (sub_1800EA830.c)
 *     sub_18010A150 @ 0x18010A150 (sub_18010A150.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800CC9DC(int a1, int a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = 262160LL;
  if ( a2 != 4 )
    v3 = 16LL;
  return a3 | ((__int64)a1 << 38) | v3;
}
