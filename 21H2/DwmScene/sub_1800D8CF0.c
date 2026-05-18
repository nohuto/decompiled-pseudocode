/*
 * XREFs of sub_1800D8CF0 @ 0x1800D8CF0
 * Callers:
 *     sub_1800D8DF4 @ 0x1800D8DF4 (sub_1800D8DF4.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800D8CF0(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rax
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  v1 = (_QWORD *)(a1 + 16);
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v3 = operator new(0xF8uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *v1 = v3;
  result = a1;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 196) = 0;
  return result;
}
