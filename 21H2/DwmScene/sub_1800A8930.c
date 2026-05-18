/*
 * XREFs of sub_1800A8930 @ 0x1800A8930
 * Callers:
 *     sub_18010D480 @ 0x18010D480 (sub_18010D480.c)
 * Callees:
 *     sub_1800A78C8 @ 0x1800A78C8 (sub_1800A78C8.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A8930(_QWORD *a1, _QWORD *a2)
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
  sub_1800A78C8(a1, a2, v7, v5);
  return a1;
}
