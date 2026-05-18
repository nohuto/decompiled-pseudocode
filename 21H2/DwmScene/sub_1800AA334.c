/*
 * XREFs of sub_1800AA334 @ 0x1800AA334
 * Callers:
 *     sub_1800AA9C8 @ 0x1800AA9C8 (sub_1800AA9C8.c)
 * Callees:
 *     sub_180067280 @ 0x180067280 (sub_180067280.c)
 *     sub_18006730C @ 0x18006730C (sub_18006730C.c)
 *     sub_1800A7964 @ 0x1800A7964 (sub_1800A7964.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800AA334(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // r9
  char v8; // [rsp+20h] [rbp-38h]

  v4 = a1 + 472;
  sub_180067280(a1 + 472);
  *a2 = 0LL;
  a2[1] = 0LL;
  v5 = operator new(0x30uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *a2 = v5;
  sub_1800A7964(a2, (_QWORD *)(a1 + 480), v8, v6);
  sub_18006730C(v4);
  return a2;
}
