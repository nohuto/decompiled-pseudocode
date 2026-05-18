/*
 * XREFs of sub_180046110 @ 0x180046110
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800460C8 @ 0x1800460C8 (sub_1800460C8.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_180046110(_QWORD *a1, char a2)
{
  sub_1800460C8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
