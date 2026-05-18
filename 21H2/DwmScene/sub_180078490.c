/*
 * XREFs of sub_180078490 @ 0x180078490
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800780F8 @ 0x1800780F8 (sub_1800780F8.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_180078490(__int64 a1, char a2)
{
  sub_1800780F8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
