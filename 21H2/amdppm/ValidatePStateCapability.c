/*
 * XREFs of ValidatePStateCapability @ 0x1C0002760
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0001D90 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C000EC00 (GetCpuIdInfo.c)
 */

__int64 __fastcall ValidatePStateCapability(_BYTE *a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF

  v7 = 0LL;
  v5 = -1073741637;
  v8 = 0LL;
  GetCpuIdInfo(0x80000000LL, &v7);
  if ( (unsigned int)v7 >= 7 )
  {
    GetCpuIdInfo(2147483655LL, &v8);
    if ( SBYTE12(v8) < 0 && (*a1 == 1 || *a1 == 127) )
      return 0;
  }
  if ( *a1 == 1 )
    return 0;
  else
    *a3 |= 0x20u;
  return v5;
}
