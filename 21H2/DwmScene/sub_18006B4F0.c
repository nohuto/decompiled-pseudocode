/*
 * XREFs of sub_18006B4F0 @ 0x18006B4F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006AFE4 @ 0x18006AFE4 (sub_18006AFE4.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_18006B4F0(__int64 a1, char a2)
{
  sub_18006AFE4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
