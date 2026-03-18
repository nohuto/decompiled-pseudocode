/*
 * XREFs of PopCheckTestsigningEnabled @ 0x140989608
 * Callers:
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 *     PopDripsWatchdogTakeAction @ 0x1409A0958 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 */

bool PopCheckTestsigningEnabled()
{
  char v0; // bl
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  v2 = 8LL;
  if ( (int)ZwQuerySystemInformation(103LL, (__int64)&v2) >= 0 )
    return (v2 & 0x200000000LL) != 0;
  return v0;
}
