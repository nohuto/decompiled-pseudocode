/*
 * XREFs of sub_180043100 @ 0x180043100
 * Callers:
 *     <none>
 * Callees:
 *     sub_180042FF4 @ 0x180042FF4 (sub_180042FF4.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_180043100(_QWORD *a1, char a2)
{
  sub_180042FF4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
