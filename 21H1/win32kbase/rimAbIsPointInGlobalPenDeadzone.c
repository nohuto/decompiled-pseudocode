/*
 * XREFs of rimAbIsPointInGlobalPenDeadzone @ 0x1C0161DCC
 * Callers:
 *     rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x1C0161F94 (rimAbIsPointerSuppressedByGlobalPenDeadzone.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0162D74 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C01764DC (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 *     ApiSetGetUserHandedness @ 0x1C01D19D0 (ApiSetGetUserHandedness.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbIsPointInGlobalPenDeadzone(__int64 a1, __int128 *a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v7; // rcx
  int UserHandedness; // eax
  __int64 v9; // r9
  __int64 v10; // rcx
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( *(_DWORD *)(a1 + 492) )
  {
    RIMLockExclusive((__int64)&gDeadzoneLock);
    if ( gDeviceArbitrationType == 1 )
    {
      v3 = 1;
    }
    else if ( RIMDeadzone::s_pRimDeadzoneInstance )
    {
      if ( *((_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 2) != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
      UserHandedness = ApiSetGetUserHandedness();
      v9 = *(_QWORD *)(a1 + 496);
      v12 = *a2;
      v3 = RIMDeadzone::IsInDeadzone(v10, &v12, a3, v9, UserHandedness);
    }
    qword_1C0256348 = 0LL;
    ExReleasePushLockExclusiveEx(&gDeadzoneLock, 0LL);
    KeLeaveCriticalRegion();
  }
  return v3;
}
