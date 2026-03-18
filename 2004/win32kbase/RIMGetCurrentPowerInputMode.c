/*
 * XREFs of RIMGetCurrentPowerInputMode @ 0x1C0016254
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x1C00161A8 (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     ApiSetGetPowerTransitionsState @ 0x1C00162C0 (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

__int64 RIMGetCurrentPowerInputMode()
{
  __int128 v1; // [rsp+20h] [rbp-58h] BYREF
  __int128 v2; // [rsp+30h] [rbp-48h]
  __int128 v3; // [rsp+40h] [rbp-38h]
  __int64 v4; // [rsp+50h] [rbp-28h]
  int v5; // [rsp+58h] [rbp-20h]

  v1 = 0LL;
  v4 = 0LL;
  v2 = 0LL;
  v5 = 0;
  v3 = 0LL;
  ApiSetGetPowerTransitionsState(&v1);
  if ( HIDWORD(v2) )
    return 1LL;
  else
    return (_DWORD)v3 != 0 ? 2 : 0;
}
