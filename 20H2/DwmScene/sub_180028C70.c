/*
 * XREFs of sub_180028C70 @ 0x180028C70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180028A8C @ 0x180028A8C (sub_180028A8C.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_180028C70(_QWORD *a1, char a2)
{
  sub_180028A8C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
