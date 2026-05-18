/*
 * XREFs of sub_1800999E0 @ 0x1800999E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800997A4 @ 0x1800997A4 (sub_1800997A4.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_1800999E0(_QWORD *a1, char a2)
{
  sub_1800997A4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
