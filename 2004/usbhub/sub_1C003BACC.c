/*
 * XREFs of sub_1C003BACC @ 0x1C003BACC
 * Callers:
 *     sub_1C000D970 @ 0x1C000D970 (sub_1C000D970.c)
 *     sub_1C000F880 @ 0x1C000F880 (sub_1C000F880.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C001B180 @ 0x1C001B180 (sub_1C001B180.c)
 *     sub_1C002D554 @ 0x1C002D554 (sub_1C002D554.c)
 */

void __fastcall sub_1C003BACC(__int64 a1)
{
  _DWORD *v2; // rbx

  v2 = sub_1C000F050(a1);
  sub_1C001B180(a1);
  if ( (v2[640] & 0x80000) != 0 && (int)sub_1C002D554(a1, 0) >= 0 )
    v2[640] &= ~0x80000u;
}
