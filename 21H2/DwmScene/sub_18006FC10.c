/*
 * XREFs of sub_18006FC10 @ 0x18006FC10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006E7FC @ 0x18006E7FC (sub_18006E7FC.c)
 *     sub_18011C1A0 @ 0x18011C1A0 (sub_18011C1A0.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_18006FC10(_QWORD *a1, char a2)
{
  sub_18006E7FC(a1 + 3, (__int64)(a1 + 3));
  sub_18011C1A0(a1 + 1);
  *a1 = &Spectre::Engine::IGpuQueryPool::`vftable';
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
