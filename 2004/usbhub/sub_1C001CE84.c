/*
 * XREFs of sub_1C001CE84 @ 0x1C001CE84
 * Callers:
 *     sub_1C000CA20 @ 0x1C000CA20 (sub_1C000CA20.c)
 *     sub_1C00109A0 @ 0x1C00109A0 (sub_1C00109A0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

__int64 __fastcall sub_1C001CE84(__int64 a1)
{
  sub_1C000F050(*(_QWORD *)(a1 + 8));
  return (unsigned int)sub_1C000F050(*(_QWORD *)(a1 + 8))[1043];
}
