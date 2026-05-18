/*
 * XREFs of sub_1800D359C @ 0x1800D359C
 * Callers:
 *     sub_1800F432C @ 0x1800F432C (sub_1800F432C.c)
 * Callees:
 *     sub_180067B20 @ 0x180067B20 (sub_180067B20.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800D359C(_QWORD *a1)
{
  _QWORD *v2; // rax

  sub_180067B20(a1, 6, 7u);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::ConstantBuffer::`vftable';
  a1[14] = 0LL;
  a1[15] = 0LL;
  v2 = operator new(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  a1[14] = v2;
  return a1;
}
