/*
 * XREFs of sub_180062ED0 @ 0x180062ED0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180062D14 @ 0x180062D14 (sub_180062D14.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_180062ED0(_QWORD *a1, char a2)
{
  sub_180062D14(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
