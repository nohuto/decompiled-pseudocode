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

struct _TEB *__stdcall RtlSetLastWin32Error(struct _TEB *a1)
{
  struct _TEB *result; // eax
  _DWORD v2[5]; // [esp+0h] [ebp-18h] BYREF

  result = NtCurrentTeb();
  if ( g_dwLastErrorToBreakOn && a1 == (struct _TEB *)g_dwLastErrorToBreakOn )
    __debugbreak();
  if ( (struct _TEB *)result->LastErrorValue != a1 )
  {
    result->LastErrorValue = (unsigned int)a1;
    result = a1;
    if ( a1 )
    {
      if ( g_isErrorOriginProviderEnabled )
      {
        if ( a1 != (struct _TEB *)997 )
        {
          v2[1] = 0;
          v2[0] = &a1;
          v2[2] = 4;
          v2[3] = 0;
          return (struct _TEB *)EtwEventWrite(g_hUserDiagnosticProvider, dword_4B3A479C, SetLastWin32ErrorEvent, 1, v2);
        }
      }
    }
  }
  return result;
}
