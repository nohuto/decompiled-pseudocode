/*
 * XREFs of sub_18003D2E0 @ 0x18003D2E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003D26C @ 0x18003D26C (sub_18003D26C.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_18003D2E0(_QWORD *a1, char a2)
{
  sub_18003D26C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
