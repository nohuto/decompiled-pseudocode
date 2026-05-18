/*
 * XREFs of sub_1800E0690 @ 0x1800E0690
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800E05E0 @ 0x1800E05E0 (sub_1800E05E0.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_1800E0690(_QWORD *a1, char a2)
{
  sub_1800E05E0(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
