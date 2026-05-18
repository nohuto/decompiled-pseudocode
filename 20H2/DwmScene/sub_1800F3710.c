/*
 * XREFs of sub_1800F3710 @ 0x1800F3710
 * Callers:
 *     sub_1800E5780 @ 0x1800E5780 (sub_1800E5780.c)
 *     sub_1800E6880 @ 0x1800E6880 (sub_1800E6880.c)
 *     sub_1800E6D90 @ 0x1800E6D90 (sub_1800E6D90.c)
 *     sub_1800E8000 @ 0x1800E8000 (sub_1800E8000.c)
 *     sub_1800E8B04 @ 0x1800E8B04 (sub_1800E8B04.c)
 *     sub_1800EA830 @ 0x1800EA830 (sub_1800EA830.c)
 *     sub_180107BB0 @ 0x180107BB0 (sub_180107BB0.c)
 *     sub_1801092C4 @ 0x1801092C4 (sub_1801092C4.c)
 * Callees:
 *     sub_1800CC530 @ 0x1800CC530 (sub_1800CC530.c)
 */

__int64 __fastcall sub_1800F3710(__int64 a1, __int64 a2)
{
  sub_1800CC530(a1 + 128, a2);
  return sub_1800CCED4((__int64 **)(a2 + 16));
}
