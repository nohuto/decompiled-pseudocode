/*
 * XREFs of sub_180047A20 @ 0x180047A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800479B4 @ 0x1800479B4 (sub_1800479B4.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_180047A20(_QWORD *a1, char a2)
{
  sub_1800479B4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
