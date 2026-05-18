/*
 * XREFs of sub_1800CFBB4 @ 0x1800CFBB4
 * Callers:
 *     sub_1800270B0 @ 0x1800270B0 (sub_1800270B0.c)
 *     sub_1800B6900 @ 0x1800B6900 (sub_1800B6900.c)
 * Callees:
 *     sub_1800CF178 @ 0x1800CF178 (sub_1800CF178.c)
 */

_QWORD *__fastcall sub_1800CFBB4(_QWORD *a1)
{
  sub_1800CF178(a1, 11LL, 5LL);
  *a1 = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  return a1;
}
