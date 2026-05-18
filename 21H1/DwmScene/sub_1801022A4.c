/*
 * XREFs of sub_1801022A4 @ 0x1801022A4
 * Callers:
 *     sub_180103164 @ 0x180103164 (sub_180103164.c)
 *     sub_1801041B0 @ 0x1801041B0 (sub_1801041B0.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_180102BBC @ 0x180102BBC (sub_180102BBC.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1801022A4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // [rsp+28h] [rbp-30h]

  v8 = operator new(0x1D0uLL);
  v8[6] = 0LL;
  v8[7] = 0LL;
  sub_18001CDF8(v8 + 4, a3);
  sub_180102BBC(v8 + 8, a4);
  *v8 = a2;
  v8[1] = a2;
  v8[2] = a2;
  *((_WORD *)v8 + 12) = 0;
  return v8;
}
