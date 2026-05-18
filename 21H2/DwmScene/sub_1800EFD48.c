/*
 * XREFs of sub_1800EFD48 @ 0x1800EFD48
 * Callers:
 *     sub_1800769BC @ 0x1800769BC (sub_1800769BC.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_18010D290 @ 0x18010D290 (sub_18010D290.c)
 */

_QWORD *__fastcall sub_1800EFD48(_QWORD *a1)
{
  _QWORD v3[6]; // [rsp+28h] [rbp-30h] BYREF

  v3[2] = 0LL;
  v3[3] = 0LL;
  sub_180020B7C(v3, (__int64)&qword_180214458);
  sub_18010D290(a1, v3);
  *a1 = &Spectre::Engine::UnlitShaderExtension::`vftable';
  return a1;
}
