/*
 * XREFs of sub_180041D80 @ 0x180041D80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180041D14 @ 0x180041D14 (sub_180041D14.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_180041D80(_QWORD *a1, char a2)
{
  sub_180041D14(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
