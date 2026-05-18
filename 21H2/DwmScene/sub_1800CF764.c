/*
 * XREFs of sub_1800CF764 @ 0x1800CF764
 * Callers:
 *     sub_180096B20 @ 0x180096B20 (sub_180096B20.c)
 * Callees:
 *     sub_1800D2984 @ 0x1800D2984 (sub_1800D2984.c)
 */

_QWORD *__fastcall sub_1800CF764(_QWORD *a1)
{
  sub_1800D2984(a1, 8LL, 6LL);
  *a1 = &Spectre::Engine::IndexBuffer::`vftable';
  return a1;
}
