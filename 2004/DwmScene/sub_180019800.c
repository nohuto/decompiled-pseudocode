/*
 * XREFs of sub_180019800 @ 0x180019800
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800191B4 @ 0x1800191B4 (sub_1800191B4.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_180019800(__int64 a1, char a2)
{
  sub_1800191B4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
