/*
 * XREFs of sub_18010D420 @ 0x18010D420
 * Callers:
 *     sub_1800ED868 @ 0x1800ED868 (sub_1800ED868.c)
 *     sub_1800EFDA0 @ 0x1800EFDA0 (sub_1800EFDA0.c)
 *     sub_18010D450 @ 0x18010D450 (sub_18010D450.c)
 * Callees:
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 */

__int64 __fastcall sub_18010D420(_QWORD *a1)
{
  *a1 = &Spectre::Engine::BaseShaderExtension::`vftable';
  sub_180012A18(a1 + 16);
  return sub_1800A8FB4(a1);
}
