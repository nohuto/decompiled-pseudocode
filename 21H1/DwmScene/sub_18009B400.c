/*
 * XREFs of sub_18009B400 @ 0x18009B400
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009B18C @ 0x18009B18C (sub_18009B18C.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_18009B400(_QWORD *a1, char a2)
{
  sub_18009B18C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
