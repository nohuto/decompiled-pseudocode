/*
 * XREFs of sub_1800CF260 @ 0x1800CF260
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CDF54 @ 0x1800CDF54 (sub_1800CDF54.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800CF260(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // r9
  char v7; // [rsp+20h] [rbp-28h]

  v3 = (_QWORD *)(a1 + 16);
  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = operator new(0x60uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *a2 = v4;
  sub_1800CDF54(a2, v3, v7, v5);
  return a2;
}
