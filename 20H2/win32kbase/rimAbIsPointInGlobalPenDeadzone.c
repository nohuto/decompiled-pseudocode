/*
 * XREFs of rimAbIsPointInGlobalPenDeadzone @ 0x1C015951C
 * Callers:
 *     rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x1C01596E4 (rimAbIsPointerSuppressedByGlobalPenDeadzone.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C015A4C4 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C016DD7C (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 *     ApiSetGetUserHandedness @ 0x1C01C96D0 (ApiSetGetUserHandedness.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbIsPointInGlobalPenDeadzone(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int UserHandedness; // eax
  __int64 v13; // r9
  __int64 v14; // rcx
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( *(_DWORD *)(a1 + 492) )
  {
    RIMLockExclusive((__int64)&gDeadzoneLock);
    if ( gDeviceArbitrationType == 1 )
    {
      v4 = 1;
    }
    else if ( RIMDeadzone::s_pRimDeadzoneInstance )
    {
      if ( *((_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 2) != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
      UserHandedness = ApiSetGetUserHandedness();
      v13 = *(_QWORD *)(a1 + 496);
      v16 = *a2;
      v4 = RIMDeadzone::IsInDeadzone(v14, &v16, a3, v13, UserHandedness);
    }
    qword_1C024E3D8 = 0LL;
    ExReleasePushLockExclusiveEx(&gDeadzoneLock, 0LL);
    KeLeaveCriticalRegion();
  }
  return v4;
}
