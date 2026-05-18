/*
 * XREFs of sub_18008BB34 @ 0x18008BB34
 * Callers:
 *     sub_18008BAA8 @ 0x18008BAA8 (sub_18008BAA8.c)
 * Callees:
 *     sub_18008B788 @ 0x18008B788 (sub_18008B788.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18008BB34(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4, _WORD **a5)
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
  sub_18008B788(a1, a2, a3, v9 + 14, v9);
  return a2;
}
