/*
 * XREFs of sub_1800762E8 @ 0x1800762E8
 * Callers:
 *     sub_180075D48 @ 0x180075D48 (sub_180075D48.c)
 *     sub_1800BCCC4 @ 0x1800BCCC4 (sub_1800BCCC4.c)
 * Callees:
 *     sub_1800736AC @ 0x1800736AC (sub_1800736AC.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_1800762E8(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4, _DWORD **a5)
{
  __int64 v8; // rdi
  _DWORD *v9; // rax

  v8 = *a1;
  v9 = operator new(0x38uLL);
  v9[8] = **a5;
  *((_QWORD *)v9 + 5) = 0LL;
  *((_QWORD *)v9 + 6) = 0LL;
  *(_QWORD *)v9 = v8;
  *((_QWORD *)v9 + 1) = v8;
  *((_QWORD *)v9 + 2) = v8;
  *((_WORD *)v9 + 12) = 0;
  sub_1800736AC(a1, a2, a3, v9 + 8, (__int64 *)v9);
  return a2;
}
