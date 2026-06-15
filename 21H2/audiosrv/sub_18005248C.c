/*
 * XREFs of sub_18005248C @ 0x18005248C
 * Callers:
 *     sub_180006430 @ 0x180006430 (sub_180006430.c)
 *     sub_1800CFC78 @ 0x1800CFC78 (sub_1800CFC78.c)
 *     sub_180106720 @ 0x180106720 (sub_180106720.c)
 *     sub_1801067C4 @ 0x1801067C4 (sub_1801067C4.c)
 *     sub_18010826C @ 0x18010826C (sub_18010826C.c)
 *     sub_180108310 @ 0x180108310 (sub_180108310.c)
 *     sub_18011B7C0 @ 0x18011B7C0 (sub_18011B7C0.c)
 *     sub_18011EA28 @ 0x18011EA28 (sub_18011EA28.c)
 *     sub_1801395A4 @ 0x1801395A4 (sub_1801395A4.c)
 *     sub_180139610 @ 0x180139610 (sub_180139610.c)
 *     sub_18013A0F0 @ 0x18013A0F0 (sub_18013A0F0.c)
 *     sub_18013A194 @ 0x18013A194 (sub_18013A194.c)
 *     sub_180141244 @ 0x180141244 (sub_180141244.c)
 *     sub_1801427B4 @ 0x1801427B4 (sub_1801427B4.c)
 * Callees:
 *     sub_1800524BC @ 0x1800524BC (sub_1800524BC.c)
 */

__int64 __fastcall sub_18005248C(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 64) = 0LL;
  if ( *(_QWORD *)(a1 + 56) )
  {
    result = sub_1800524BC();
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
