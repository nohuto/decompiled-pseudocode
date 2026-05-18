/*
 * XREFs of sub_1800B8D90 @ 0x1800B8D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B88B8 @ 0x1800B88B8 (sub_1800B88B8.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_1800B8D90(_QWORD *a1, char a2)
{
  sub_1800B88B8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
