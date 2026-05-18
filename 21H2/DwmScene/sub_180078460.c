/*
 * XREFs of sub_180078460 @ 0x180078460
 * Callers:
 *     <none>
 * Callees:
 *     sub_180077CDC @ 0x180077CDC (sub_180077CDC.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_180078460(__int64 a1, char a2)
{
  sub_180077CDC(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
