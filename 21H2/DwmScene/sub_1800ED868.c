/*
 * XREFs of sub_1800ED868 @ 0x1800ED868
 * Callers:
 *     sub_1800ED8A0 @ 0x1800ED8A0 (sub_1800ED8A0.c)
 * Callees:
 *     sub_1800EA08C @ 0x1800EA08C (sub_1800EA08C.c)
 */

__int64 __fastcall sub_1800ED868(_QWORD *a1, __int64 a2)
{
  *a1 = &Spectre::Engine::StandardShaderExtension::`vftable';
  sub_1800EA08C((__int64)(a1 + 19), a2);
  return sub_18010D420(a1);
}
