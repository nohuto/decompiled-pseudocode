/*
 * XREFs of rimAbIsPointInPenDeadzone @ 0x1C01595F8
 * Callers:
 *     rimAbIsPointerSuppressedByPointer @ 0x1C0159A28 (rimAbIsPointerSuppressedByPointer.c)
 *     RIMIsPointInPenDeadzone @ 0x1C015ADC0 (RIMIsPointInPenDeadzone.c)
 *     ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z @ 0x1C019A150 (-SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C016DD7C (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 *     ApiSetGetUserHandedness @ 0x1C01C96D0 (ApiSetGetUserHandedness.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbIsPointInPenDeadzone(__int128 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int UserHandedness; // eax
  __int64 v12; // rcx
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF

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
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
        v14 = *a1;
        UserHandedness = ApiSetGetUserHandedness();
        v3 = RIMDeadzone::IsInDeadzone(v12, &v14, a2, a3, UserHandedness);
      }
      qword_1C024E3D8 = 0LL;
      ExReleasePushLockExclusiveEx(&gDeadzoneLock, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  return v3;
}
