/*
 * XREFs of sub_1800C9E94 @ 0x1800C9E94
 * Callers:
 *     sub_180091250 @ 0x180091250 (sub_180091250.c)
 * Callees:
 *     sub_1800CD0B4 @ 0x1800CD0B4 (sub_1800CD0B4.c)
 */

_QWORD *__fastcall sub_1800C9E94(_QWORD *a1)
{
  sub_1800CD0B4(a1, 8LL, 6LL);
  *a1 = &Spectre::Engine::IndexBuffer::`vftable';
  return a1;
}
