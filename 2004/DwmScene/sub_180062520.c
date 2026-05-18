/*
 * XREFs of sub_180062520 @ 0x180062520
 * Callers:
 *     <none>
 * Callees:
 *     sub_180022184 @ 0x180022184 (sub_180022184.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_180062520(__int64 a1, char a2)
{
  sub_180022184(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
