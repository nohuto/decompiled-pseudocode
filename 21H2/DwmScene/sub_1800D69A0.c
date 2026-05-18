/*
 * XREFs of sub_1800D69A0 @ 0x1800D69A0
 * Callers:
 *     sub_18006A760 @ 0x18006A760 (sub_18006A760.c)
 * Callees:
 *     sub_1800D6704 @ 0x1800D6704 (sub_1800D6704.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800D69A0(_QWORD *a1)
{
  _QWORD *v2; // rcx

  *a1 = &Spectre::Engine::GpuProfilingGrapher::`vftable';
  v2 = a1 + 1;
  *v2 = 0LL;
  v2[1] = 0LL;
  v2[2] = 0LL;
  a1[4] = 0LL;
  sub_1800D6704(v2, 0xF0uLL);
  return a1;
}
