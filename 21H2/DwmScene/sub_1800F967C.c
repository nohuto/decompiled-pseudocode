/*
 * XREFs of sub_1800F967C @ 0x1800F967C
 * Callers:
 *     sub_1800B6698 @ 0x1800B6698 (sub_1800B6698.c)
 * Callees:
 *     sub_1800D0304 @ 0x1800D0304 (sub_1800D0304.c)
 */

_QWORD *__fastcall sub_1800F967C(_QWORD *a1)
{
  sub_1800D0304(a1);
  *a1 = &Spectre::Engine::DepthBufferGeneric::`vftable';
  return a1;
}
