/*
 * XREFs of sub_1800143A0 @ 0x1800143A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009A16C @ 0x18009A16C (sub_18009A16C.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_1800143A0(__int64 a1, char a2)
{
  sub_18009A16C();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
