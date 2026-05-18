/*
 * XREFs of sub_18011FE7C @ 0x18011FE7C
 * Callers:
 *     sub_18011FBD8 @ 0x18011FBD8 (sub_18011FBD8.c)
 *     sub_1801226DC @ 0x1801226DC (sub_1801226DC.c)
 * Callees:
 *     sub_18011EE64 @ 0x18011EE64 (sub_18011EE64.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18011FE7C(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4, _DWORD **a5)
{
  __int64 v8; // rdi
  _DWORD *v9; // rax

  v8 = *a1;
  v9 = operator new(0x68uLL);
  v9[8] = **a5;
  *((_QWORD *)v9 + 12) = 0LL;
  *(_QWORD *)v9 = v8;
  *((_QWORD *)v9 + 1) = v8;
  *((_QWORD *)v9 + 2) = v8;
  *((_WORD *)v9 + 12) = 0;
  sub_18011EE64(a1, a2, a3, v9 + 8, v9);
  return a2;
}
