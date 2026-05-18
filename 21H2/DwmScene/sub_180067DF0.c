/*
 * XREFs of sub_180067DF0 @ 0x180067DF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180027A54 @ 0x180027A54 (sub_180027A54.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_180067DF0(__int64 a1, char a2)
{
  sub_180027A54(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
