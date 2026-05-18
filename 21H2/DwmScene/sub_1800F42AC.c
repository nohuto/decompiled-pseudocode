/*
 * XREFs of sub_1800F42AC @ 0x1800F42AC
 * Callers:
 *     sub_1800F40B8 @ 0x1800F40B8 (sub_1800F40B8.c)
 * Callees:
 *     sub_180067614 @ 0x180067614 (sub_180067614.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_1800F42AC(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4, _DWORD **a5)
{
  __int64 v8; // rdi
  _DWORD *v9; // rax

  v8 = *a1;
  v9 = operator new(0x28uLL);
  v9[7] = **a5;
  v9[8] = 0;
  *(_QWORD *)v9 = v8;
  *((_QWORD *)v9 + 1) = v8;
  *((_QWORD *)v9 + 2) = v8;
  *((_WORD *)v9 + 12) = 0;
  sub_180067614(a1, a2, a3, v9 + 7, v9);
  return a2;
}
