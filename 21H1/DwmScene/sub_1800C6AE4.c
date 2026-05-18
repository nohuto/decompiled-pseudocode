/*
 * XREFs of sub_1800C6AE4 @ 0x1800C6AE4
 * Callers:
 *     sub_180042B98 @ 0x180042B98 (sub_180042B98.c)
 * Callees:
 *     sub_180062180 @ 0x180062180 (sub_180062180.c)
 */

_QWORD *__fastcall sub_1800C6AE4(_QWORD *a1)
{
  sub_180062180((__int64)a1);
  *a1 = &Spectre::Engine::GpuQuery::`vftable';
  return a1;
}
