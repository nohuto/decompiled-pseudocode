/*
 * XREFs of sub_1800CC3B4 @ 0x1800CC3B4
 * Callers:
 *     sub_180048468 @ 0x180048468 (sub_180048468.c)
 * Callees:
 *     sub_180067A50 @ 0x180067A50 (sub_180067A50.c)
 */

_QWORD *__fastcall sub_1800CC3B4(_QWORD *a1)
{
  sub_180067A50((__int64)a1);
  *a1 = &Spectre::Engine::GpuQuery::`vftable';
  return a1;
}
