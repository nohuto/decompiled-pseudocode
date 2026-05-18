/*
 * XREFs of sub_180107AB8 @ 0x180107AB8
 * Callers:
 *     sub_1800D4850 @ 0x1800D4850 (sub_1800D4850.c)
 *     sub_18012D82C @ 0x18012D82C (sub_18012D82C.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_180107AB8(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ShaderDatabase::`vftable';
  *a1 = &Spectre::Engine::ShaderDatabase::`vftable';
  return result;
}
