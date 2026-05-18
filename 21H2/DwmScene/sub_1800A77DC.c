/*
 * XREFs of sub_1800A77DC @ 0x1800A77DC
 * Callers:
 *     sub_1800A8654 @ 0x1800A8654 (sub_1800A8654.c)
 * Callees:
 *     sub_1800A8E98 @ 0x1800A8E98 (sub_1800A8E98.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall sub_1800A77DC(__int64 a1, __int64 a2, __int64 a3, _DWORD **a4)
{
  __int64 v6; // rdx
  char *v8; // [rsp+28h] [rbp-10h]

  v8 = (char *)operator new(0x48uLL);
  *((_DWORD *)v8 + 8) = **a4;
  *(_OWORD *)(v8 + 40) = 0LL;
  *(_OWORD *)(v8 + 56) = 0LL;
  sub_1800A8E98(v8 + 40, v6);
  *(_QWORD *)v8 = a2;
  *((_QWORD *)v8 + 1) = a2;
  *((_QWORD *)v8 + 2) = a2;
  *((_WORD *)v8 + 12) = 0;
  return v8;
}
