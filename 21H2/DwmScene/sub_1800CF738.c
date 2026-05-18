/*
 * XREFs of sub_1800CF738 @ 0x1800CF738
 * Callers:
 *     sub_180026B08 @ 0x180026B08 (sub_180026B08.c)
 *     sub_1800B6704 @ 0x1800B6704 (sub_1800B6704.c)
 * Callees:
 *     sub_1800CF178 @ 0x1800CF178 (sub_1800CF178.c)
 */

_QWORD *__fastcall sub_1800CF738(_QWORD *a1)
{
  sub_1800CF178(a1, 8LL, 6LL);
  *a1 = &Spectre::Engine::DeviceIndexBuffer::`vftable';
  return a1;
}
