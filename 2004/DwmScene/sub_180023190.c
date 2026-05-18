/*
 * XREFs of sub_180023190 @ 0x180023190
 * Callers:
 *     <none>
 * Callees:
 *     sub_180040B9C @ 0x180040B9C (sub_180040B9C.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_180023190(__int64 a1, char a2)
{
  sub_180040B9C();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
