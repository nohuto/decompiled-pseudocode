/*
 * XREFs of sub_180042FB0 @ 0x180042FB0
 * Callers:
 *     sub_180026F00 @ 0x180026F00 (sub_180026F00.c)
 * Callees:
 *     sub_180067A50 @ 0x180067A50 (sub_180067A50.c)
 */

_QWORD *__fastcall sub_180042FB0(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180067A50(a1, 9LL, 4LL);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::D3D11::RenderStateD3D11::`vftable';
  result = a1;
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  return result;
}
