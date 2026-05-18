/*
 * XREFs of sub_180072110 @ 0x180072110
 * Callers:
 *     sub_180076D60 @ 0x180076D60 (sub_180076D60.c)
 *     sub_180082820 @ 0x180082820 (sub_180082820.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180072110(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // [rsp+28h] [rbp-20h]

  v6 = operator new(0x60uLL);
  v6[6] = 0LL;
  v6[7] = 0LL;
  sub_180020B7C(v6 + 4, a3);
  v6[10] = 0LL;
  v6[11] = 0LL;
  sub_180020B7C(v6 + 8, a3 + 32);
  *v6 = a2;
  v6[1] = a2;
  v6[2] = a2;
  *((_WORD *)v6 + 12) = 0;
  return v6;
}
