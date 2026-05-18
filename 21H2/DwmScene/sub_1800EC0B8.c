/*
 * XREFs of sub_1800EC0B8 @ 0x1800EC0B8
 * Callers:
 *     sub_1800766A0 @ 0x1800766A0 (sub_1800766A0.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_1800A8998 @ 0x1800A8998 (sub_1800A8998.c)
 */

_QWORD *__fastcall sub_1800EC0B8(_QWORD *a1)
{
  __int64 v3[6]; // [rsp+28h] [rbp-30h] BYREF

  v3[2] = 0LL;
  v3[3] = 0LL;
  sub_180020B7C(v3, (__int64)aFont);
  sub_1800A8998((__int64)a1, v3);
  *a1 = &Spectre::Engine::FontShaderExtension::`vftable';
  return a1;
}
