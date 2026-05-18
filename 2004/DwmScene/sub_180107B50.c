/*
 * XREFs of sub_180107B50 @ 0x180107B50
 * Callers:
 *     sub_1800E7F98 @ 0x1800E7F98 (sub_1800E7F98.c)
 *     sub_1800EA4D0 @ 0x1800EA4D0 (sub_1800EA4D0.c)
 *     sub_180107B80 @ 0x180107B80 (sub_180107B80.c)
 * Callees:
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 */

__int64 __fastcall sub_180107B50(_QWORD *a1)
{
  *a1 = &Spectre::Engine::BaseShaderExtension::`vftable';
  sub_180012938(a1 + 16);
  return sub_1800A36E4(a1);
}
