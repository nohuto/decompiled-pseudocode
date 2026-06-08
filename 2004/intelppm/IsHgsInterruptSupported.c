/*
 * XREFs of IsHgsInterruptSupported @ 0x1C0001E78
 * Callers:
 *     ConnectHwpInterrupt @ 0x1C0006760 (ConnectHwpInterrupt.c)
 *     InitDriver @ 0x1C003B2B4 (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0004280 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C00044B0 (GetCpuIdInfo.c)
 */

bool IsHgsInterruptSupported()
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
    return (v3 & 0x80000) != 0;
  }
  return v0;
}
