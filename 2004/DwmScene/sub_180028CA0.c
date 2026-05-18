/*
 * XREFs of sub_180028CA0 @ 0x180028CA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180028BC8 @ 0x180028BC8 (sub_180028BC8.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_180028CA0(_QWORD *a1, char a2)
{
  sub_180028BC8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
