/*
 * XREFs of sub_1800D1F00 @ 0x1800D1F00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D1D94 @ 0x1800D1D94 (sub_1800D1D94.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_1800D1F00(_QWORD *a1, char a2)
{
  sub_1800D1D94(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
