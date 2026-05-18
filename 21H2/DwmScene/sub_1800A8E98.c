/*
 * XREFs of sub_1800A8E98 @ 0x1800A8E98
 * Callers:
 *     sub_1800A77DC @ 0x1800A77DC (sub_1800A77DC.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A8E98(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = operator new(0x20uLL);
  *v2 = v2;
  v2[1] = v2;
  *a1 = v2;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v3 = operator new(0x38uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  a1[2] = v3;
  return a1;
}
