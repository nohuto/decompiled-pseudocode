/*
 * XREFs of sub_180107AA4 @ 0x180107AA4
 * Callers:
 *     sub_1800D492C @ 0x1800D492C (sub_1800D492C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180107AA4(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &Spectre::Engine::ShaderDatabase::`vftable';
  return a1;
}
