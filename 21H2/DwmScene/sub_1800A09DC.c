/*
 * XREFs of sub_1800A09DC @ 0x1800A09DC
 * Callers:
 *     sub_180018A98 @ 0x180018A98 (sub_180018A98.c)
 * Callees:
 *     sub_18003E878 @ 0x18003E878 (sub_18003E878.c)
 *     sub_180067B20 @ 0x180067B20 (sub_180067B20.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800A09DC(_QWORD *a1)
{
  _QWORD *v2; // rax

  sub_180067B20(a1, 4, 0xBu);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::Sampler::`vftable';
  sub_18003E878((__int64)(a1 + 14));
  a1[16] = 0LL;
  a1[17] = 0LL;
  v2 = operator new(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  a1[16] = v2;
  return a1;
}
