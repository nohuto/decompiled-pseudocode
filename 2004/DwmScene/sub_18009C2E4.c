/*
 * XREFs of sub_18009C2E4 @ 0x18009C2E4
 * Callers:
 *     sub_18009FA08 @ 0x18009FA08 (sub_18009FA08.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18009C2E4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *result; // rax

  result = operator new(0x68uLL);
  result[6] = 0LL;
  result[7] = 0LL;
  *((_OWORD *)result + 2) = *(_OWORD *)a3;
  *((_OWORD *)result + 3) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 15LL;
  *(_BYTE *)a3 = 0;
  result[8] = 0LL;
  result[9] = 0LL;
  result[8] = *(_QWORD *)a4;
  result[9] = *(_QWORD *)(a4 + 8);
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  *((_DWORD *)result + 20) = *(_DWORD *)(a4 + 16);
  result[11] = 0LL;
  result[12] = 0LL;
  result[11] = *(_QWORD *)(a4 + 24);
  result[12] = *(_QWORD *)(a4 + 32);
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  *result = a2;
  result[1] = a2;
  result[2] = a2;
  *((_WORD *)result + 12) = 0;
  return result;
}
