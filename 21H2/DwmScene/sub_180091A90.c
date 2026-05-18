/*
 * XREFs of sub_180091A90 @ 0x180091A90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180091630 @ 0x180091630 (sub_180091630.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_180091A90(_QWORD *a1, char a2)
{
  sub_180091630(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
