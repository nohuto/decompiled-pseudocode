/*
 * XREFs of sub_1800F9D20 @ 0x1800F9D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F9A9C @ 0x1800F9A9C (sub_1800F9A9C.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_1800F9D20(_QWORD *a1, char a2)
{
  sub_1800F9A9C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
