/*
 * XREFs of sub_18007636C @ 0x18007636C
 * Callers:
 *     sub_180075DD0 @ 0x180075DD0 (sub_180075DD0.c)
 * Callees:
 *     sub_18007442C @ 0x18007442C (sub_18007442C.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18007636C(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4, _QWORD **a5)
{
  __int64 v8; // rdi
  _QWORD *v9; // rax

  v8 = *a1;
  v9 = operator new(0x38uLL);
  v9[4] = **a5;
  v9[5] = 0LL;
  v9[6] = 0LL;
  *v9 = v8;
  v9[1] = v8;
  v9[2] = v8;
  *((_WORD *)v9 + 12) = 0;
  sub_18007442C(a1, a2, a3, v9 + 4, v9);
  return a2;
}
