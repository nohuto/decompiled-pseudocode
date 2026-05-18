/*
 * XREFs of sub_180070A18 @ 0x180070A18
 * Callers:
 *     sub_180070478 @ 0x180070478 (sub_180070478.c)
 *     sub_1800B73F4 @ 0x1800B73F4 (sub_1800B73F4.c)
 * Callees:
 *     sub_18006DDDC @ 0x18006DDDC (sub_18006DDDC.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180070A18(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 a4, _DWORD **a5)
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
  sub_18006DDDC(a1, a2, a3, v9 + 8, (__int64 *)v9);
  return a2;
}
