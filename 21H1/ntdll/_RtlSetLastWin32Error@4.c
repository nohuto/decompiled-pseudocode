/*
 * XREFs of _RtlSetLastWin32Error@4 @ 0x4B2DAB00
 * Callers:
 *     _EtwEventRegister@16 @ 0x4B2AE0A0 (_EtwEventRegister@16.c)
 *     _EtwpSetProviderTraits@16 @ 0x4B2B0AAD (_EtwpSetProviderTraits@16.c)
 *     _TppSetTimer@20 @ 0x4B2B3EA0 (_TppSetTimer@20.c)
 *     _EtwNotificationRegister@20 @ 0x4B2C1950 (_EtwNotificationRegister@20.c)
 *     _EtwUnregisterTraceGuids@8 @ 0x4B2D9960 (_EtwUnregisterTraceGuids@8.c)
 *     _EtwNotificationUnregister@12 @ 0x4B2D99D0 (_EtwNotificationUnregister@12.c)
 *     _RtlSetLastWin32ErrorAndNtStatusFromNtStatus@4 @ 0x4B2DAAE0 (_RtlSetLastWin32ErrorAndNtStatusFromNtStatus@4.c)
 *     _EtwEventActivityIdControl@8 @ 0x4B2DC160 (_EtwEventActivityIdControl@8.c)
 *     _RtlQueryUnbiasedInterruptTime@4 @ 0x4B2DC510 (_RtlQueryUnbiasedInterruptTime@4.c)
 *     _EtwRegisterTraceGuidsW@32 @ 0x4B2E43A0 (_EtwRegisterTraceGuidsW@32.c)
 *     _EtwGetTraceLoggerHandle@4 @ 0x4B2EC700 (_EtwGetTraceLoggerHandle@4.c)
 *     _EtwGetTraceEnableLevel@8 @ 0x4B2EC750 (_EtwGetTraceEnableLevel@8.c)
 *     _EtwGetTraceEnableFlags@8 @ 0x4B2EC780 (_EtwGetTraceEnableFlags@8.c)
 *     _EtwRegisterSecurityProvider@0 @ 0x4B380690 (_EtwRegisterSecurityProvider@0.c)
 *     _EtwpTrackProviderBinary@8 @ 0x4B3808C0 (_EtwpTrackProviderBinary@8.c)
 *     _EtwpUseDescriptorType@16 @ 0x4B380958 (_EtwpUseDescriptorType@16.c)
 *     _EtwCreateTraceInstanceId@8 @ 0x4B380A60 (_EtwCreateTraceInstanceId@8.c)
 *     _EvtIntReportEventWorker@48 @ 0x4B382BB1 (_EvtIntReportEventWorker@48.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 * Callees:
 *     _EtwEventWrite@20 @ 0x4B2E1250 (_EtwEventWrite@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

void __cdecl RtlSetLastWin32Error(LONG Win32Error)
{
  struct _TEB *v1; // eax
  _EVENT_DATA_DESCRIPTOR UserData; // [esp+0h] [ebp-18h] BYREF

  v1 = NtCurrentTeb();
  if ( g_dwLastErrorToBreakOn && Win32Error == g_dwLastErrorToBreakOn )
    __debugbreak();
  if ( v1->LastErrorValue != Win32Error )
  {
    v1->LastErrorValue = Win32Error;
    if ( Win32Error )
    {
      if ( g_isErrorOriginProviderEnabled )
      {
        if ( Win32Error != 997 )
        {
          UserData.Ptr = (unsigned int)&Win32Error;
          UserData.Size = 4;
          UserData.Reserved = 0;
          EtwEventWrite(g_hUserDiagnosticProvider, &SetLastWin32ErrorEvent, 1u, &UserData);
        }
      }
    }
  }
}
