/*
 * XREFs of sub_18002C430 @ 0x18002C430
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002C37C @ 0x18002C37C (sub_18002C37C.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_18002C430(_QWORD *a1, char a2)
{
  sub_18002C37C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
