/*
 * XREFs of sub_18006A340 @ 0x18006A340
 * Callers:
 *     <none>
 * Callees:
 *     sub_180068F2C @ 0x180068F2C (sub_180068F2C.c)
 *     sub_1801168D0 @ 0x1801168D0 (sub_1801168D0.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_18006A340(_QWORD *a1, char a2)
{
  sub_180068F2C(a1 + 3, (__int64)(a1 + 3));
  sub_1801168D0(a1 + 1);
  *a1 = &Spectre::Engine::IGpuQueryPool::`vftable';
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
