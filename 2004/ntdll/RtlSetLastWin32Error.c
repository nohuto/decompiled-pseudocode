/*
 * XREFs of RtlSetLastWin32Error @ 0x180050770
 * Callers:
 *     TppSetTimer @ 0x1800139EC (TppSetTimer.c)
 *     EtwRegisterTraceGuidsW @ 0x180042A00 (EtwRegisterTraceGuidsW.c)
 *     EtwpSetProviderTraits @ 0x180042B38 (EtwpSetProviderTraits.c)
 *     EtwEventRegister @ 0x180042E70 (EtwEventRegister.c)
 *     EtwNotificationRegister @ 0x180043030 (EtwNotificationRegister.c)
 *     EvtIntReportEventWorker @ 0x18004ED30 (EvtIntReportEventWorker.c)
 *     EtwUnregisterTraceGuids @ 0x180050330 (EtwUnregisterTraceGuids.c)
 *     EtwNotificationUnregister @ 0x180050390 (EtwNotificationUnregister.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x180050750 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwEventActivityIdControl @ 0x18005B690 (EtwEventActivityIdControl.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x18005CDF0 (RtlQueryUnbiasedInterruptTime.c)
 *     EtwGetTraceLoggerHandle @ 0x180081300 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableLevel @ 0x180081340 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x180081380 (EtwGetTraceEnableFlags.c)
 *     EtwpTrackProviderBinary @ 0x180081418 (EtwpTrackProviderBinary.c)
 *     EtwRegisterSecurityProvider @ 0x18008BEA0 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x1801105C0 (EtwpUseDescriptorType.c)
 *     EtwCreateTraceInstanceId @ 0x1801106B0 (EtwCreateTraceInstanceId.c)
 *     TppRaiseInvalidParameter @ 0x18011212C (TppRaiseInvalidParameter.c)
 * Callees:
 *     EtwEventWrite @ 0x18004F1A0 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 */

void __cdecl RtlSetLastWin32Error(LONG Win32Error)
{
  struct _TEB *v1; // rax
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-28h] BYREF
  LONG v3; // [rsp+50h] [rbp+8h] BYREF

  v3 = Win32Error;
  v1 = NtCurrentTeb();
  if ( g_dwLastErrorToBreakOn && Win32Error == g_dwLastErrorToBreakOn )
    __debugbreak();
  if ( v1->LastErrorValue != Win32Error )
  {
    v1->LastErrorValue = Win32Error;
    if ( v3 )
    {
      if ( g_isErrorOriginProviderEnabled )
      {
        if ( v3 != 997 )
        {
          UserData.Ptr = (unsigned __int64)&v3;
          *(_QWORD *)&UserData.Size = 4LL;
          EtwEventWrite(g_hUserDiagnosticProvider, &SetLastWin32ErrorEvent, 1u, &UserData);
        }
      }
    }
  }
}
