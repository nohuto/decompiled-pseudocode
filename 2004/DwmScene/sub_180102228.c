/*
 * XREFs of sub_180102228 @ 0x180102228
 * Callers:
 *     sub_1801037F0 @ 0x1801037F0 (sub_1801037F0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180102228(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  result = operator new(0x58uLL);
  result[6] = 0LL;
  result[7] = 0LL;
  *((_OWORD *)result + 2) = *(_OWORD *)a3;
  *((_OWORD *)result + 3) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 15LL;
  *(_BYTE *)a3 = 0;
  *((_OWORD *)result + 4) = *(_OWORD *)(a3 + 32);
  result[10] = *(_QWORD *)(a3 + 48);
  *result = a2;
  result[1] = a2;
  result[2] = a2;
  *((_WORD *)result + 12) = 0;
  return result;
}
