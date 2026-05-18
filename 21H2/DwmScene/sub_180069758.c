/*
 * XREFs of sub_180069758 @ 0x180069758
 * Callers:
 *     sub_18006BF54 @ 0x18006BF54 (sub_18006BF54.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
double *__fastcall sub_180069758(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  double *v8; // [rsp+28h] [rbp-20h]

  v8 = (double *)operator new(0x48uLL);
  v8[6] = 0.0;
  v8[7] = 0.0;
  sub_180020B7C((_QWORD *)v8 + 4, a3);
  v8[8] = (double)*a4;
  *(_QWORD *)v8 = a2;
  *((_QWORD *)v8 + 1) = a2;
  *((_QWORD *)v8 + 2) = a2;
  *((_WORD *)v8 + 12) = 0;
  return v8;
}
