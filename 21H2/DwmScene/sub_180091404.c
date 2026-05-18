/*
 * XREFs of sub_180091404 @ 0x180091404
 * Callers:
 *     sub_180091378 @ 0x180091378 (sub_180091378.c)
 * Callees:
 *     sub_180091058 @ 0x180091058 (sub_180091058.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180091404(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4, _WORD **a5)
{
  __int64 v8; // rdi
  _WORD *v9; // rax

  v8 = *a1;
  v9 = operator new(0x28uLL);
  v9[14] = **a5;
  *((_DWORD *)v9 + 8) = 0;
  *(_QWORD *)v9 = v8;
  *((_QWORD *)v9 + 1) = v8;
  *((_QWORD *)v9 + 2) = v8;
  v9[12] = 0;
  sub_180091058(a1, a2, a3, v9 + 14, v9);
  return a2;
}
