/*
 * XREFs of sub_180028A30 @ 0x180028A30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800279B8 @ 0x1800279B8 (sub_1800279B8.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_180028A30(_QWORD *a1, char a2)
{
  sub_1800279B8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
