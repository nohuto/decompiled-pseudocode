/*
 * XREFs of sub_18006B520 @ 0x18006B520
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006B074 @ 0x18006B074 (sub_18006B074.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_18006B520(__int64 a1, char a2)
{
  sub_18006B074(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
