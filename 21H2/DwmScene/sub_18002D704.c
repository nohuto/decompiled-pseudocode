/*
 * XREFs of sub_18002D704 @ 0x18002D704
 * Callers:
 *     sub_18002D590 @ 0x18002D590 (sub_18002D590.c)
 * Callees:
 *     sub_18002CF70 @ 0x18002CF70 (sub_18002CF70.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18002D704(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4, _DWORD **a5)
{
  __int64 v8; // rdi
  _DWORD *v9; // rax

  v8 = *a1;
  v9 = operator new(0x30uLL);
  v9[8] = **a5;
  *((_QWORD *)v9 + 5) = 0LL;
  *(_QWORD *)v9 = v8;
  *((_QWORD *)v9 + 1) = v8;
  *((_QWORD *)v9 + 2) = v8;
  *((_WORD *)v9 + 12) = 0;
  sub_18002CF70(a1, a2, a3, v9 + 8, v9);
  return a2;
}
