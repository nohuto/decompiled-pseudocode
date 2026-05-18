/*
 * XREFs of sub_1800F3DAC @ 0x1800F3DAC
 * Callers:
 *     sub_1800B0DC8 @ 0x1800B0DC8 (sub_1800B0DC8.c)
 * Callees:
 *     sub_1800CAA34 @ 0x1800CAA34 (sub_1800CAA34.c)
 */

_QWORD *__fastcall sub_1800F3DAC(_QWORD *a1)
{
  sub_1800CAA34(a1);
  *a1 = &Spectre::Engine::DepthBufferGeneric::`vftable';
  return a1;
}
