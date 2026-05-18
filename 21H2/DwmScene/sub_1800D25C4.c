/*
 * XREFs of sub_1800D25C4 @ 0x1800D25C4
 * Callers:
 *     sub_1800EF2E0 @ 0x1800EF2E0 (sub_1800EF2E0.c)
 *     sub_18010F9D0 @ 0x18010F9D0 (sub_18010F9D0.c)
 *     sub_18010FA20 @ 0x18010FA20 (sub_18010FA20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D25C4(int a1, __int64 a2, __int64 a3)
{
  return a3 | ((__int64)a1 << 53) | 0x200;
}
