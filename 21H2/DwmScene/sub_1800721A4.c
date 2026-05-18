/*
 * XREFs of sub_1800721A4 @ 0x1800721A4
 * Callers:
 *     sub_1800760F8 @ 0x1800760F8 (sub_1800760F8.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800721A4(__int64 a1, __int64 a2, __int64 a3, _QWORD **a4)
{
  _QWORD *result; // rax
  _QWORD *v7; // rcx

  result = operator new(0x48uLL);
  v7 = *a4;
  result[4] = 0LL;
  result[5] = 0LL;
  result[4] = *v7;
  result[5] = v7[1];
  *v7 = 0LL;
  v7[1] = 0LL;
  result[6] = 0LL;
  result[7] = 0LL;
  result[8] = 0LL;
  *result = a2;
  result[1] = a2;
  result[2] = a2;
  *((_WORD *)result + 12) = 0;
  return result;
}
