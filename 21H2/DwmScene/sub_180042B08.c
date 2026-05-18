/*
 * XREFs of sub_180042B08 @ 0x180042B08
 * Callers:
 *     sub_180026B9C @ 0x180026B9C (sub_180026B9C.c)
 * Callees:
 *     sub_1800CE130 @ 0x1800CE130 (sub_1800CE130.c)
 *     memset @ 0x18012396A (memset.c)
 */

_QWORD *__fastcall sub_180042B08(_QWORD *a1)
{
  _QWORD *result; // rax

  memset(a1, 0, 0x68uLL);
  sub_1800CE130(a1);
  *a1 = &Spectre::Engine::D3D11::PixelShaderD3D11::`vftable';
  result = a1;
  a1[13] = 0LL;
  return result;
}
