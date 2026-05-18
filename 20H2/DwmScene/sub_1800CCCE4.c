/*
 * XREFs of sub_1800CCCE4 @ 0x1800CCCE4
 * Callers:
 *     sub_1800E9A10 @ 0x1800E9A10 (sub_1800E9A10.c)
 *     sub_18010A100 @ 0x18010A100 (sub_18010A100.c)
 *     sub_18010A150 @ 0x18010A150 (sub_18010A150.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800CCCE4(int a1, __int64 a2, __int64 a3)
{
  return a3 | ((__int64)a1 << 56) | 0x400;
}
