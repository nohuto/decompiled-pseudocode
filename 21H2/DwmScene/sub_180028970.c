/*
 * XREFs of sub_180028970 @ 0x180028970
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002771C @ 0x18002771C (sub_18002771C.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_180028970(_QWORD *a1, char a2)
{
  sub_18002771C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
