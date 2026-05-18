/*
 * XREFs of sub_1800A1E54 @ 0x1800A1E54
 * Callers:
 *     sub_1800A28D0 @ 0x1800A28D0 (sub_1800A28D0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A1E54(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  result = operator new(0x40uLL);
  result[6] = 0LL;
  result[7] = 0LL;
  *((_OWORD *)result + 2) = *(_OWORD *)a3;
  *((_OWORD *)result + 3) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 15LL;
  *(_BYTE *)a3 = 0;
  *result = a2;
  result[1] = a2;
  result[2] = a2;
  *((_WORD *)result + 12) = 0;
  return result;
}
