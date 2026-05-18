/*
 * XREFs of sub_180047650 @ 0x180047650
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800475E4 @ 0x1800475E4 (sub_1800475E4.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_180047650(_QWORD *a1, char a2)
{
  sub_1800475E4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
