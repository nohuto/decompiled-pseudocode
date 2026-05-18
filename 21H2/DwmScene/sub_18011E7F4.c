/*
 * XREFs of sub_18011E7F4 @ 0x18011E7F4
 * Callers:
 *     sub_18011FD28 @ 0x18011FD28 (sub_18011FD28.c)
 * Callees:
 *     sub_1801223CC @ 0x1801223CC (sub_1801223CC.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18011E7F4(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rcx
  _QWORD *v8; // [rsp+28h] [rbp-10h]

  v8 = operator new(0xC0uLL);
  v6 = *a4;
  v8[6] = 0LL;
  v8[7] = 0LL;
  *((_OWORD *)v8 + 2) = *(_OWORD *)v6;
  *((_OWORD *)v8 + 3) = *(_OWORD *)(v6 + 16);
  *(_QWORD *)(v6 + 16) = 0LL;
  *(_QWORD *)(v6 + 24) = 7LL;
  *(_WORD *)v6 = 0;
  sub_1801223CC(v8 + 8);
  *v8 = a2;
  v8[1] = a2;
  v8[2] = a2;
  *((_WORD *)v8 + 12) = 0;
  return v8;
}
