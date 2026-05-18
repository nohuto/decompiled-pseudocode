/*
 * XREFs of sub_180067DC0 @ 0x180067DC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180067BE8 @ 0x180067BE8 (sub_180067BE8.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_180067DC0(__int64 a1, char a2)
{
  sub_180067BE8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
