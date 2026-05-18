/*
 * XREFs of sub_1800A1F0C @ 0x1800A1F0C
 * Callers:
 *     sub_1800A2D84 @ 0x1800A2D84 (sub_1800A2D84.c)
 * Callees:
 *     sub_1800A35C8 @ 0x1800A35C8 (sub_1800A35C8.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall sub_1800A1F0C(__int64 a1, __int64 a2, __int64 a3, _DWORD **a4)
{
  __int64 v6; // rdx
  char *v8; // [rsp+28h] [rbp-10h]

  v8 = (char *)operator new(0x48uLL);
  *((_DWORD *)v8 + 8) = **a4;
  *(_OWORD *)(v8 + 40) = 0LL;
  *(_OWORD *)(v8 + 56) = 0LL;
  sub_1800A35C8(v8 + 40, v6);
  *(_QWORD *)v8 = a2;
  *((_QWORD *)v8 + 1) = a2;
  *((_QWORD *)v8 + 2) = a2;
  *((_WORD *)v8 + 12) = 0;
  return v8;
}
