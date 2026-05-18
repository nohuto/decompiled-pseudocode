/*
 * XREFs of sub_18007624C @ 0x18007624C
 * Callers:
 *     sub_18007606C @ 0x18007606C (sub_18007606C.c)
 * Callees:
 *     sub_180074074 @ 0x180074074 (sub_180074074.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18007624C(__int64 **a1, _QWORD *a2, __int64 *a3, __int64 a4, __int64 ***a5)
{
  __int64 *v8; // rdi
  __int64 **v9; // rdx
  __int64 **v10; // rax

  v8 = *a1;
  v9 = (__int64 **)operator new(0x40uLL);
  v10 = *a5;
  v9[4] = 0LL;
  v9[5] = 0LL;
  v9[4] = *v10;
  v9[5] = v10[1];
  *v10 = 0LL;
  v10[1] = 0LL;
  v9[6] = 0LL;
  v9[7] = 0LL;
  *v9 = v8;
  v9[1] = v8;
  v9[2] = v8;
  *((_WORD *)v9 + 12) = 0;
  sub_180074074(a1, a2, a3, (__int64)(v9 + 4), v9);
  return a2;
}
