/*
 * XREFs of sub_180117B80 @ 0x180117B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180117A0C @ 0x180117A0C (sub_180117A0C.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_180117B80(_QWORD *a1, char a2)
{
  sub_180117A0C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
