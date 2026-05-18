/*
 * XREFs of sub_1800A1DE8 @ 0x1800A1DE8
 * Callers:
 *     sub_1800A2630 @ 0x1800A2630 (sub_1800A2630.c)
 *     sub_1800A7A00 @ 0x1800A7A00 (sub_1800A7A00.c)
 *     sub_1800BD5B0 @ 0x1800BD5B0 (sub_1800BD5B0.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A1DE8(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // [rsp+28h] [rbp-10h]

  v6 = operator new(0x40uLL);
  v6[6] = 0LL;
  v6[7] = 0LL;
  sub_180020B7C(v6 + 4, a3);
  *v6 = a2;
  v6[1] = a2;
  v6[2] = a2;
  *((_WORD *)v6 + 12) = 0;
  return v6;
}
