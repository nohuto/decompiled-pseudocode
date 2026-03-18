/*
 * XREFs of rimAbIsPointInPenDeadzone @ 0x1C0161EA8
 * Callers:
 *     rimAbIsPointerSuppressedByPointer @ 0x1C01622D8 (rimAbIsPointerSuppressedByPointer.c)
 *     RIMIsPointInPenDeadzone @ 0x1C0163670 (RIMIsPointInPenDeadzone.c)
 *     ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z @ 0x1C01A23B0 (-SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C01764DC (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 *     ApiSetGetUserHandedness @ 0x1C01D19D0 (ApiSetGetUserHandedness.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbIsPointInPenDeadzone(__int128 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v7; // rcx
  int UserHandedness; // eax
  __int64 v9; // rcx
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  if ( gDeviceArbitrationType )
  {
    if ( gDeviceArbitrationType == 1 )
    {
      return 1;
    }
    else if ( (unsigned int)(gDeviceArbitrationType - 2) <= 1 )
    {
      RIMLockExclusive((__int64)&gDeadzoneLock);
      if ( RIMDeadzone::s_pRimDeadzoneInstance )
      {
        if ( *((_DWORD *)RIMDeadzone::s_pRimDeadzoneInstance + 2) != 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
        v11 = *a1;
        UserHandedness = ApiSetGetUserHandedness();
        v3 = RIMDeadzone::IsInDeadzone(v9, &v11, a2, a3, UserHandedness);
      }
      qword_1C0256348 = 0LL;
      ExReleasePushLockExclusiveEx(&gDeadzoneLock, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  return v3;
}
