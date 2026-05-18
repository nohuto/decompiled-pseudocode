/*
 * XREFs of sub_1800CEF60 @ 0x1800CEF60
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_1800CEF60(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
