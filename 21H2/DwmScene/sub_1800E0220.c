/*
 * XREFs of sub_1800E0220 @ 0x1800E0220
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800E012C @ 0x1800E012C (sub_1800E012C.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_1800E0220(_QWORD *a1, char a2)
{
  sub_1800E012C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
