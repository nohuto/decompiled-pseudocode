/*
 * XREFs of IsTurboModeSupported @ 0x1C0004200
 * Callers:
 *     SetGV3PerfState @ 0x1C00019F0 (SetGV3PerfState.c)
 *     SetGV3PerfStateAndTurbo @ 0x1C0007590 (SetGV3PerfStateAndTurbo.c)
 *     SetTurboDisablePolicy @ 0x1C00077A0 (SetTurboDisablePolicy.c)
 *     InitDriver @ 0x1C003B2B4 (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0004280 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C00044B0 (GetCpuIdInfo.c)
 */

bool IsTurboModeSupported()
{
  bool result; // al
  __int128 v1; // [rsp+20h] [rbp-38h] BYREF
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  GetCpuIdInfo(0LL, &v1);
  result = 0;
  if ( (unsigned int)v1 >= 6 )
  {
    GetCpuIdInfo(6LL, &v2);
    if ( (v2 & 2) != 0 )
      return 1;
  }
  return result;
}
