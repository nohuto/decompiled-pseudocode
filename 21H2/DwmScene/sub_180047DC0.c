/*
 * XREFs of sub_180047DC0 @ 0x180047DC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180047D4C @ 0x180047D4C (sub_180047D4C.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_180047DC0(_QWORD *a1, char a2)
{
  sub_180047D4C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
