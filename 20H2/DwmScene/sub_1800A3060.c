/*
 * XREFs of sub_1800A3060 @ 0x1800A3060
 * Callers:
 *     sub_180107BB0 @ 0x180107BB0 (sub_180107BB0.c)
 * Callees:
 *     sub_1800A1FF8 @ 0x1800A1FF8 (sub_1800A1FF8.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A3060(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r9
  char v7; // [rsp+20h] [rbp-28h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = operator new(0x40uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *a1 = v4;
  sub_1800A1FF8(a1, a2, v7, v5);
  return a1;
}
