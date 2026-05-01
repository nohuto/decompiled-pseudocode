/*
 * XREFs of sub_1800830E8 @ 0x1800830E8
 * Callers:
 *     sub_180082A64 @ 0x180082A64 (sub_180082A64.c)
 *     sub_180082DB4 @ 0x180082DB4 (sub_180082DB4.c)
 * Callees:
 *     sub_1800833D0 @ 0x1800833D0 (sub_1800833D0.c)
 */

__int64 __fastcall sub_1800830E8(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // [rsp+38h] [rbp-10h]
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = *a2;
    sub_1800833D0(a3, 256, (unsigned int)&v6, 0, 0, (__int64)L"%s (%u)", a1, v5);
  }
  else
  {
    sub_1800833D0(a3, 256, (unsigned int)&v6, 0, 0, (__int64)L"%s", a1);
  }
  result = (unsigned int)wcsnlen((const wchar_t *)a3, 0x100uLL) + 1;
  *(_DWORD *)(a3 + 512) = result;
  return result;
}
