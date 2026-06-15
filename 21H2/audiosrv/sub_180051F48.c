/*
 * XREFs of sub_180051F48 @ 0x180051F48
 * Callers:
 *     sub_180051E30 @ 0x180051E30 (sub_180051E30.c)
 *     sub_18006E0A0 @ 0x18006E0A0 (sub_18006E0A0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180051F48(__int64 a1, _WORD *a2)
{
  if ( *a2 > 0x1Fu )
    return *a2 >= 0x40u && (*a2 <= 0x41u || *a2 == 70 || *a2 == 8196);
  return *a2 >= 0x1Eu || !*a2 || *a2 > 1u && (*a2 <= 8u || *a2 > 9u && (*a2 <= 0xBu || *a2 > 0xFu && *a2 <= 0x17u));
}
