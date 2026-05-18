/*
 * XREFs of sub_18011A5AC @ 0x18011A5AC
 * Callers:
 *     sub_18011A308 @ 0x18011A308 (sub_18011A308.c)
 *     sub_18011CE0C @ 0x18011CE0C (sub_18011CE0C.c)
 * Callees:
 *     sub_180119594 @ 0x180119594 (sub_180119594.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18011A5AC(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4, _DWORD **a5)
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
  sub_180119594(a1, a2, a3, v9 + 8, v9);
  return a2;
}
