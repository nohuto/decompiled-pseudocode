/*
 * XREFs of HalpSecondaryInterruptQueryPrimaryInformation @ 0x1408657D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x140865730 (HalpQueryPrimaryInterruptInformation.c)
 */

__int64 __fastcall HalpSecondaryInterruptQueryPrimaryInformation(int *a1, _DWORD *a2)
{
  __int64 result; // rax
  _OWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  memset(v4, 0, sizeof(v4));
  v5 = 0LL;
  result = HalpQueryPrimaryInterruptInformation(a1, (__int64)v4);
  if ( (int)result >= 0 )
    *a2 = DWORD1(v4[0]);
  return result;
}
