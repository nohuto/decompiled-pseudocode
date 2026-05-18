/*
 * XREFs of sub_1800FBD20 @ 0x1800FBD20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800FBCB4 @ 0x1800FBCB4 (sub_1800FBCB4.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_1800FBD20(_QWORD *a1, char a2)
{
  sub_1800FBCB4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
