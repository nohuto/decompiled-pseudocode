/*
 * XREFs of sub_18010EAB0 @ 0x18010EAB0
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_18010EAB0(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Utils::IMemoryStatsProvider::`vftable';
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
