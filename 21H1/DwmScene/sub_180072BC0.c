/*
 * XREFs of sub_180072BC0 @ 0x180072BC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180072828 @ 0x180072828 (sub_180072828.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_180072BC0(__int64 a1, char a2)
{
  sub_180072828(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
