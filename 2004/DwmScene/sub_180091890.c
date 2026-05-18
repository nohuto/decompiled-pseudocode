/*
 * XREFs of sub_180091890 @ 0x180091890
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CD134 @ 0x1800CD134 (sub_1800CD134.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_180091890(__int64 a1, char a2)
{
  sub_1800CD134();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
