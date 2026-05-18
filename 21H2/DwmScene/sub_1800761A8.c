/*
 * XREFs of sub_1800761A8 @ 0x1800761A8
 * Callers:
 *     sub_180075FA4 @ 0x180075FA4 (sub_180075FA4.c)
 * Callees:
 *     sub_180073894 @ 0x180073894 (sub_180073894.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800761A8(__int64 **a1, _QWORD *a2, __int64 *a3, __int64 a4, __int64 *a5)
{
  __int64 *v8; // rdi
  __int64 **v9; // rdx
  __int64 v10; // rax

  v8 = *a1;
  v9 = (__int64 **)operator new(0x48uLL);
  v10 = *a5;
  v9[6] = 0LL;
  v9[7] = 0LL;
  *((_OWORD *)v9 + 2) = *(_OWORD *)v10;
  *((_OWORD *)v9 + 3) = *(_OWORD *)(v10 + 16);
  *(_QWORD *)(v10 + 16) = 0LL;
  *(_QWORD *)(v10 + 24) = 15LL;
  *(_BYTE *)v10 = 0;
  *((_DWORD *)v9 + 16) = 0;
  *v9 = v8;
  v9[1] = v8;
  v9[2] = v8;
  *((_WORD *)v9 + 12) = 0;
  sub_180073894(a1, a2, a3, (size_t *)v9 + 4, v9);
  return a2;
}
