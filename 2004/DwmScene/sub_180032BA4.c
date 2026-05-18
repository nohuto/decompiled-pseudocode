/*
 * XREFs of sub_180032BA4 @ 0x180032BA4
 * Callers:
 *     sub_180020ED8 @ 0x180020ED8 (sub_180020ED8.c)
 * Callees:
 *     sub_180067E3C @ 0x180067E3C (sub_180067E3C.c)
 */

_QWORD *__fastcall sub_180032BA4(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180067E3C();
  *a1 = &Spectre::Engine::D3D11::CommandListD3D11::`vftable';
  result = a1;
  a1[18] = 0LL;
  a1[19] = 0LL;
  return result;
}
