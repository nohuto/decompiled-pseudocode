/*
 * XREFs of sub_1800C9E68 @ 0x1800C9E68
 * Callers:
 *     sub_180021238 @ 0x180021238 (sub_180021238.c)
 *     sub_1800B0E34 @ 0x1800B0E34 (sub_1800B0E34.c)
 * Callees:
 *     sub_1800C98A8 @ 0x1800C98A8 (sub_1800C98A8.c)
 */

_QWORD *__fastcall sub_1800C9E68(_QWORD *a1)
{
  sub_1800C98A8(a1, 8LL, 6LL);
  *a1 = &Spectre::Engine::DeviceIndexBuffer::`vftable';
  return a1;
}
