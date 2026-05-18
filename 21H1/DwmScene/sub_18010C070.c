/*
 * XREFs of sub_18010C070 @ 0x18010C070
 * Callers:
 *     <none>
 * Callees:
 *     sub_18010BB4C @ 0x18010BB4C (sub_18010BB4C.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_18010C070(_QWORD *a1, char a2)
{
  sub_18010BB4C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
