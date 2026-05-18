/*
 * XREFs of sub_18010D450 @ 0x18010D450
 * Callers:
 *     <none>
 * Callees:
 *     sub_18010D420 @ 0x18010D420 (sub_18010D420.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_18010D450(_QWORD *a1, char a2)
{
  sub_18010D420(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
