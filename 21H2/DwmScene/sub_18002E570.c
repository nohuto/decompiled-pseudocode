/*
 * XREFs of sub_18002E570 @ 0x18002E570
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002E498 @ 0x18002E498 (sub_18002E498.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_18002E570(_QWORD *a1, char a2)
{
  sub_18002E498(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
