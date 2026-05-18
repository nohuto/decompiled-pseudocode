/*
 * XREFs of sub_1800624F0 @ 0x1800624F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180062318 @ 0x180062318 (sub_180062318.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_1800624F0(__int64 a1, char a2)
{
  sub_180062318(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
