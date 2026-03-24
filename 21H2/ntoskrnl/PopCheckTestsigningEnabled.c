/*
 * XREFs of PopCheckTestsigningEnabled @ 0x1408E109C
 * Callers:
 *     PopPowerInformationInternal @ 0x140678DF4 (PopPowerInformationInternal.c)
 *     PopDripsWatchdogTakeAction @ 0x1408FA6A0 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x1403FAA60 (ZwQuerySystemInformation.c)
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
