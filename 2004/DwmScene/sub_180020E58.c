/*
 * XREFs of sub_180020E58 @ 0x180020E58
 * Callers:
 *     sub_180020D3C @ 0x180020D3C (sub_180020D3C.c)
 * Callees:
 *     sub_180020388 @ 0x180020388 (sub_180020388.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180020E58(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4, _QWORD **a5)
{
  __int64 v8; // rdi
  _QWORD *v9; // rax

  v8 = *a1;
  v9 = operator new(0x68uLL);
  v9[4] = **a5;
  v9[12] = 0LL;
  *v9 = v8;
  v9[1] = v8;
  v9[2] = v8;
  *((_WORD *)v9 + 12) = 0;
  sub_180020388(a1, a2, a3, v9 + 4, v9);
  return a2;
}
