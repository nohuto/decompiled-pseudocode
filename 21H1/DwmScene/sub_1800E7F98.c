/*
 * XREFs of sub_1800E7F98 @ 0x1800E7F98
 * Callers:
 *     sub_1800E7FD0 @ 0x1800E7FD0 (sub_1800E7FD0.c)
 * Callees:
 *     sub_1800E47BC @ 0x1800E47BC (sub_1800E47BC.c)
 */

__int64 __fastcall sub_1800E7F98(_QWORD *a1, __int64 a2)
{
  *a1 = &Spectre::Engine::StandardShaderExtension::`vftable';
  sub_1800E47BC((__int64)(a1 + 19), a2);
  return sub_180107B50(a1);
}
