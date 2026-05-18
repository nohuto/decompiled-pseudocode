/*
 * XREFs of sub_180063E88 @ 0x180063E88
 * Callers:
 *     sub_180066684 @ 0x180066684 (sub_180066684.c)
 * Callees:
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
double *__fastcall sub_180063E88(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  double *v8; // [rsp+28h] [rbp-20h]

  v8 = (double *)operator new(0x48uLL);
  v8[6] = 0.0;
  v8[7] = 0.0;
  sub_18001CDF8((_QWORD *)v8 + 4, a3);
  v8[8] = (double)*a4;
  *(_QWORD *)v8 = a2;
  *((_QWORD *)v8 + 1) = a2;
  *((_QWORD *)v8 + 2) = a2;
  *((_WORD *)v8 + 12) = 0;
  return v8;
}
