/*
 * XREFs of sub_1800A3E50 @ 0x1800A3E50
 * Callers:
 *     sub_1800A3B40 @ 0x1800A3B40 (sub_1800A3B40.c)
 *     sub_1800A8700 @ 0x1800A8700 (sub_1800A8700.c)
 * Callees:
 *     sub_1800A2F60 @ 0x1800A2F60 (sub_1800A2F60.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_1800A3E50(__int64 **a1, _QWORD *a2, __int64 *a3, __int64 a4, __int64 ***a5)
{
  __int64 *v8; // rdi
  __int64 **v9; // rax

  v8 = *a1;
  v9 = (__int64 **)operator new(0x38uLL);
  v9[4] = **a5;
  v9[5] = 0LL;
  v9[6] = 0LL;
  *v9 = v8;
  v9[1] = v8;
  v9[2] = v8;
  *((_WORD *)v9 + 12) = 0;
  sub_1800A2F60(a1, a2, a3, (unsigned __int64 *)v9 + 4, v9);
  return a2;
}
