/*
 * XREFs of sub_18003D830 @ 0x18003D830
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003D724 @ 0x18003D724 (sub_18003D724.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_18003D830(_QWORD *a1, char a2)
{
  sub_18003D724(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
