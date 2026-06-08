/*
 * XREFs of IsACountMCountSupported @ 0x1C0002324
 * Callers:
 *     InitDriver @ 0x1C003603C (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C000EA60 (GetCpuIdInfo.c)
 */

bool IsACountMCountSupported()
{
  char v0; // bl
  __int128 v2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  v0 = 0;
  v3 = 0LL;
  GetCpuIdInfo(0LL, &v2);
  if ( (unsigned int)v2 >= 6 )
  {
    GetCpuIdInfo(6LL, &v3);
    return (BYTE8(v3) & 1) != 0;
  }
  return v0;
}
