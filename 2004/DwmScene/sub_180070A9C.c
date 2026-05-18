/*
 * XREFs of sub_180070A9C @ 0x180070A9C
 * Callers:
 *     sub_180070500 @ 0x180070500 (sub_180070500.c)
 * Callees:
 *     sub_18006EB5C @ 0x18006EB5C (sub_18006EB5C.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180070A9C(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4, _QWORD **a5)
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
  sub_18006EB5C(a1, a2, a3, v9 + 4, v9);
  return a2;
}
