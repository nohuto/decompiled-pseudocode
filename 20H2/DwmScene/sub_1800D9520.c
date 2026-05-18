/*
 * XREFs of sub_1800D9520 @ 0x1800D9520
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D9434 @ 0x1800D9434 (sub_1800D9434.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_1800D9520(_QWORD *a1, char a2)
{
  sub_1800D9434(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
