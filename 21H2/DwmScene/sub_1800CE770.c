/*
 * XREFs of sub_1800CE770 @ 0x1800CE770
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CE3AC @ 0x1800CE3AC (sub_1800CE3AC.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_1800CE770(_QWORD *a1, char a2)
{
  sub_1800CE3AC(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
