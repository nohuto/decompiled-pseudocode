/*
 * XREFs of sub_1800CF1A4 @ 0x1800CF1A4
 * Callers:
 *     sub_1800464C0 @ 0x1800464C0 (sub_1800464C0.c)
 *     sub_1800CFBE0 @ 0x1800CFBE0 (sub_1800CFBE0.c)
 *     sub_1800CFE40 @ 0x1800CFE40 (sub_1800CFE40.c)
 *     sub_1800CFEC0 @ 0x1800CFEC0 (sub_1800CFEC0.c)
 *     sub_1800CFFF4 @ 0x1800CFFF4 (sub_1800CFFF4.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800CF1A4(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ArrayBufferDesc::`vftable';
  *a1 = &Spectre::Engine::ArrayBufferDesc::`vftable';
  return result;
}
