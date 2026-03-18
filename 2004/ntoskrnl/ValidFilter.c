/*
 * XREFs of ValidFilter @ 0x1405D10CC
 * Callers:
 *     PiDqQueryValidateQueryData @ 0x1405D2788 (PiDqQueryValidateQueryData.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _PnpValidatePropertyData @ 0x1405D11A8 (_PnpValidatePropertyData.c)
 *     FilterEval @ 0x1405D6F00 (FilterEval.c)
 */

__int64 __fastcall ValidFilter(unsigned int a1, __int64 a2)
{
  int v4; // edi
  __int64 i; // rbx
  int v7; // [rsp+30h] [rbp-58h] BYREF
  _DWORD v8[2]; // [rsp+38h] [rbp-50h] BYREF
  _OWORD *v9; // [rsp+40h] [rbp-48h]
  _OWORD v10[3]; // [rsp+48h] [rbp-40h] BYREF

  v8[1] = 0;
  v7 = 0;
  v8[0] = 1;
  v9 = v10;
  memset(v10, 0, sizeof(v10));
  if ( (unsigned int)FilterEval((unsigned int)GetPropertyFromPropArray, (unsigned int)v8, a1, a2, (__int64)&v7) != -1073741811 )
  {
    v4 = 0;
    if ( !a1 )
      return 1LL;
    for ( i = a2 + 40;
          !*(_QWORD *)(i - 8)
       && (unsigned int)PnpValidatePropertyData(*(PSECURITY_DESCRIPTOR *)(i + 8), *(_DWORD *)(i + 4)) != 1;
          i += 56LL )
    {
      if ( ++v4 >= a1 )
        return 1LL;
    }
  }
  return 0LL;
}
