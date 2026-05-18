/*
 * XREFs of sub_180031D00 @ 0x180031D00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031C4C @ 0x180031C4C (sub_180031C4C.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_180031D00(_QWORD *a1, char a2)
{
  sub_180031C4C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
