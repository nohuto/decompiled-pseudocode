/*
 * XREFs of sub_1800E0470 @ 0x1800E0470
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800E03E8 @ 0x1800E03E8 (sub_1800E03E8.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_1800E0470(_QWORD *a1, char a2)
{
  sub_1800E03E8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
