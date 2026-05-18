/*
 * XREFs of sub_18006FC60 @ 0x18006FC60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006F860 @ 0x18006F860 (sub_18006F860.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_18006FC60(__int64 a1, char a2)
{
  sub_18006F860(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
