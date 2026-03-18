/*
 * XREFs of sub_1C003B9C4 @ 0x1C003B9C4
 * Callers:
 *     sub_1C0043F70 @ 0x1C0043F70 (sub_1C0043F70.c)
 *     sub_1C0043FF0 @ 0x1C0043FF0 (sub_1C0043FF0.c)
 *     sub_1C00446D4 @ 0x1C00446D4 (sub_1C00446D4.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

__int64 __fastcall sub_1C003B9C4(__int64 a1)
{
  sub_1C000F050(*(_QWORD *)(a1 + 8));
  return (unsigned int)sub_1C000F050(*(_QWORD *)(a1 + 8))[340];
}
