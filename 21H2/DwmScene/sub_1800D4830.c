/*
 * XREFs of sub_1800D4830 @ 0x1800D4830
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_1800D4830(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
