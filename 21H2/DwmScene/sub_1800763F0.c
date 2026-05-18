/*
 * XREFs of sub_1800763F0 @ 0x1800763F0
 * Callers:
 *     sub_180075F1C @ 0x180075F1C (sub_180075F1C.c)
 * Callees:
 *     sub_180074874 @ 0x180074874 (sub_180074874.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800763F0(__int64 **a1, _QWORD *a2, __int64 *a3, __int64 a4, __int64 ***a5)
{
  __int64 *v8; // rdi
  __int64 **v9; // rax

  v8 = *a1;
  v9 = (__int64 **)operator new(0x30uLL);
  v9[4] = **a5;
  v9[5] = 0LL;
  *v9 = v8;
  v9[1] = v8;
  v9[2] = v8;
  *((_WORD *)v9 + 12) = 0;
  sub_180074874(a1, a2, a3, (unsigned __int64 *)v9 + 4, v9);
  return a2;
}
