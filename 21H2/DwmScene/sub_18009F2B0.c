/*
 * XREFs of sub_18009F2B0 @ 0x18009F2B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009F074 @ 0x18009F074 (sub_18009F074.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_18009F2B0(_QWORD *a1, char a2)
{
  sub_18009F074(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
