/*
 * XREFs of sub_1800EA150 @ 0x1800EA150
 * Callers:
 *     sub_1800EA180 @ 0x1800EA180 (sub_1800EA180.c)
 * Callees:
 *     sub_1800EA08C @ 0x1800EA08C (sub_1800EA08C.c)
 */

__int64 __fastcall sub_1800EA150(_QWORD *a1, __int64 a2)
{
  *a1 = &Spectre::Engine::BackgroundUnlitShaderExtension::`vftable';
  sub_1800EA08C((__int64)(a1 + 14), a2);
  return sub_1800A8FB4(a1);
}
