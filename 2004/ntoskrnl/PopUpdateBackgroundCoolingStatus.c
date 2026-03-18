/*
 * XREFs of PopUpdateBackgroundCoolingStatus @ 0x1407C1D84
 * Callers:
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 *     PopCoolingInitializeWnfEvents @ 0x140A905F8 (PopCoolingInitializeWnfEvents.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1403F6F80 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopUpdateBackgroundCoolingStatus(char a1)
{
  BOOL v2; // [rsp+40h] [rbp-28h] BYREF
  __int64 v3; // [rsp+48h] [rbp-20h] BYREF

  v3 = WNF_EXEC_THERMAL_LIMITER_TERMINATE_BACKGROUND_TASKS;
  v2 = a1 != 0;
  return ZwUpdateWnfStateData((__int64)&v3, (__int64)&v2);
}
