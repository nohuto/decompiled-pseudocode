/*
 * XREFs of sub_1800EA478 @ 0x1800EA478
 * Callers:
 *     sub_1800710EC @ 0x1800710EC (sub_1800710EC.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_1801079C0 @ 0x1801079C0 (sub_1801079C0.c)
 */

_QWORD *__fastcall sub_1800EA478(_QWORD *a1)
{
  _QWORD v3[6]; // [rsp+28h] [rbp-30h] BYREF

  v3[2] = 0LL;
  v3[3] = 0LL;
  sub_18001CDF8(v3, (__int64)&qword_18020D3E8);
  sub_1801079C0(a1, v3);
  *a1 = &Spectre::Engine::UnlitShaderExtension::`vftable';
  return a1;
}
