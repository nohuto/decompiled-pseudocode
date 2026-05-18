/*
 * XREFs of sub_18011ADE0 @ 0x18011ADE0
 * Callers:
 *     sub_18011AFEC @ 0x18011AFEC (sub_18011AFEC.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18011ADE0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  _QWORD *result; // rax
  __int64 v7; // rcx

  result = operator new(0x48uLL);
  v7 = *a4;
  result[6] = 0LL;
  result[7] = 0LL;
  *((_OWORD *)result + 2) = *(_OWORD *)v7;
  *((_OWORD *)result + 3) = *(_OWORD *)(v7 + 16);
  *(_QWORD *)(v7 + 16) = 0LL;
  *(_QWORD *)(v7 + 24) = 15LL;
  *(_BYTE *)v7 = 0;
  result[8] = 0LL;
  *result = a2;
  result[1] = a2;
  result[2] = a2;
  *((_WORD *)result + 12) = 0;
  return result;
}
