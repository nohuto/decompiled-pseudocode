/*
 * XREFs of sub_1800708D8 @ 0x1800708D8
 * Callers:
 *     sub_1800706D4 @ 0x1800706D4 (sub_1800706D4.c)
 * Callees:
 *     sub_18006DFC4 @ 0x18006DFC4 (sub_18006DFC4.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800708D8(__int64 **a1, _QWORD *a2, __int64 *a3, __int64 a4, __int64 *a5)
{
  __int64 *v8; // rdi
  __int64 **v9; // rdx
  __int64 v10; // rax

  v8 = *a1;
  v9 = (__int64 **)operator new(0x48uLL);
  v10 = *a5;
  v9[6] = 0LL;
  v9[7] = 0LL;
  *((_OWORD *)v9 + 2) = *(_OWORD *)v10;
  *((_OWORD *)v9 + 3) = *(_OWORD *)(v10 + 16);
  *(_QWORD *)(v10 + 16) = 0LL;
  *(_QWORD *)(v10 + 24) = 15LL;
  *(_BYTE *)v10 = 0;
  *((_DWORD *)v9 + 16) = 0;
  *v9 = v8;
  v9[1] = v8;
  v9[2] = v8;
  *((_WORD *)v9 + 12) = 0;
  sub_18006DFC4(a1, a2, a3, (size_t *)v9 + 4, v9);
  return a2;
}
