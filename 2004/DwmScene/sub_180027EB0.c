/*
 * XREFs of sub_180027EB0 @ 0x180027EB0
 * Callers:
 *     sub_180027D48 @ 0x180027D48 (sub_180027D48.c)
 * Callees:
 *     sub_180027888 @ 0x180027888 (sub_180027888.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180027EB0(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4, _DWORD **a5)
{
  __int64 v8; // rdi
  char *v9; // rax

  v8 = *a1;
  v9 = (char *)operator new(0x48uLL);
  *((_DWORD *)v9 + 8) = **a5;
  *(_OWORD *)(v9 + 40) = 0LL;
  *(_OWORD *)(v9 + 56) = 0LL;
  *(_QWORD *)v9 = v8;
  *((_QWORD *)v9 + 1) = v8;
  *((_QWORD *)v9 + 2) = v8;
  *((_WORD *)v9 + 12) = 0;
  sub_180027888(a1, a2, a3, (unsigned int *)v9 + 8, v9);
  return a2;
}
