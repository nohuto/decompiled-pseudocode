/*
 * XREFs of sub_1800C98D4 @ 0x1800C98D4
 * Callers:
 *     sub_180040BF0 @ 0x180040BF0 (sub_180040BF0.c)
 *     sub_1800CA310 @ 0x1800CA310 (sub_1800CA310.c)
 *     sub_1800CA570 @ 0x1800CA570 (sub_1800CA570.c)
 *     sub_1800CA5F0 @ 0x1800CA5F0 (sub_1800CA5F0.c)
 *     sub_1800CA724 @ 0x1800CA724 (sub_1800CA724.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800C98D4(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ArrayBufferDesc::`vftable';
  *a1 = &Spectre::Engine::ArrayBufferDesc::`vftable';
  return result;
}
