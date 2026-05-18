/*
 * XREFs of sub_1800A1D64 @ 0x1800A1D64
 * Callers:
 *     sub_1800A3D78 @ 0x1800A3D78 (sub_1800A3D78.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A1D64(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rdx
  _QWORD *v8; // [rsp+28h] [rbp-10h]

  v8 = operator new(0x48uLL);
  v6 = *a4;
  v8[6] = 0LL;
  v8[7] = 0LL;
  sub_180020B7C(v8 + 4, v6);
  *((_WORD *)v8 + 32) = 0;
  *v8 = a2;
  v8[1] = a2;
  v8[2] = a2;
  *((_WORD *)v8 + 12) = 0;
  return v8;
}
