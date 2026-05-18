/*
 * XREFs of sub_1800697DC @ 0x1800697DC
 * Callers:
 *     sub_180069900 @ 0x180069900 (sub_180069900.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800697DC(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // [rsp+28h] [rbp-10h]

  v6 = operator new(0x58uLL);
  v6[6] = 0LL;
  v6[7] = 0LL;
  sub_180020B7C(v6 + 4, a3);
  *((_OWORD *)v6 + 4) = *(_OWORD *)(a3 + 32);
  v6[10] = *(_QWORD *)(a3 + 48);
  *v6 = a2;
  v6[1] = a2;
  v6[2] = a2;
  *((_WORD *)v6 + 12) = 0;
  return v6;
}
