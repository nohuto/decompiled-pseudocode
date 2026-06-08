/*
 * XREFs of IsNonwrappingACountMCountSupported @ 0x1C0001D14
 * Callers:
 *     InitDriver @ 0x1C003B2B4 (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0004280 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C00044B0 (GetCpuIdInfo.c)
 */

bool IsNonwrappingACountMCountSupported()
{
  int v0; // r8d
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  GetCpuIdInfo(1LL, &v2);
  v0 = BYTE1(v2) & 0xF;
  return v0 != 15 && (v0 != 6 || (unsigned __int128)(v2 & 0xF0 | ((unsigned int)v2 >> 8) & 0xF00) >= 0x2A0);
}
