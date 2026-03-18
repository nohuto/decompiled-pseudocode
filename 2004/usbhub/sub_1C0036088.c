/*
 * XREFs of sub_1C0036088 @ 0x1C0036088
 * Callers:
 *     sub_1C0002648 @ 0x1C0002648 (sub_1C0002648.c)
 *     sub_1C0004220 @ 0x1C0004220 (sub_1C0004220.c)
 *     sub_1C0004C90 @ 0x1C0004C90 (sub_1C0004C90.c)
 *     sub_1C0007A40 @ 0x1C0007A40 (sub_1C0007A40.c)
 *     sub_1C000F4B0 @ 0x1C000F4B0 (sub_1C000F4B0.c)
 *     sub_1C0034CDC @ 0x1C0034CDC (sub_1C0034CDC.c)
 * Callees:
 *     sub_1C0033D58 @ 0x1C0033D58 (sub_1C0033D58.c)
 *     sub_1C0034DE4 @ 0x1C0034DE4 (sub_1C0034DE4.c)
 */

void __fastcall sub_1C0036088(__int64 a1, __int64 a2)
{
  if ( (unsigned int)sub_1C0033D58(a1, a2) )
    sub_1C0034DE4(a1, a2, 0LL, 30);
}
