/*
 * XREFs of sub_180107B74 @ 0x180107B74
 * Callers:
 *     sub_180108A34 @ 0x180108A34 (sub_180108A34.c)
 *     sub_180109A80 @ 0x180109A80 (sub_180109A80.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_18010848C @ 0x18010848C (sub_18010848C.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180107B74(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // [rsp+28h] [rbp-30h]

  v8 = operator new(0x1D0uLL);
  v8[6] = 0LL;
  v8[7] = 0LL;
  sub_180020B7C(v8 + 4, a3);
  sub_18010848C(v8 + 8, a4);
  *v8 = a2;
  v8[1] = a2;
  v8[2] = a2;
  *((_WORD *)v8 + 12) = 0;
  return v8;
}
