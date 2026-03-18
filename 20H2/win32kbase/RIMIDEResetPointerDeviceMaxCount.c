/*
 * XREFs of RIMIDEResetPointerDeviceMaxCount @ 0x1C0169800
 * Callers:
 *     NtUserSetFeatureReportResponse @ 0x1C0136280 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C017E68C (RIMCmAllocPointerDeviceContacts.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C017E934 (RIMCmFreePointerDeviceContacts.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEResetPointerDeviceMaxCount(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  unsigned int v6; // ebx
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // r8

  v4 = a2;
  if ( (a1[78] & 0x2000) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v6 = 0;
  if ( !a1[180] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v7 = v4 + 1;
  if ( a1[6] != 7 )
    v7 = v4;
  RIMCmFreePointerDeviceContacts(a1, a2, a3);
  if ( (int)RIMCmAllocPointerDeviceContacts(a1, 1785620818LL) >= 0 )
  {
    if ( Win32AllocPoolZInit(8LL * v7, 0x78707352u) )
    {
      a1[180] = v7;
      return 1;
    }
    else
    {
      RIMCmFreePointerDeviceContacts(a1, v8, v9);
    }
  }
  return v6;
}
