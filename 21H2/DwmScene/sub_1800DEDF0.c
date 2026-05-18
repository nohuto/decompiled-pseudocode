/*
 * XREFs of sub_1800DEDF0 @ 0x1800DEDF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DED04 @ 0x1800DED04 (sub_1800DED04.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_1800DEDF0(_QWORD *a1, char a2)
{
  sub_1800DED04(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
