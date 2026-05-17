/*
 * XREFs of RtlSetLastWin32Error @ 0x1800507C0
 * Callers:
 *     TppSetTimer @ 0x1800139EC (TppSetTimer.c)
 *     EtwRegisterTraceGuidsW @ 0x180042A50 (EtwRegisterTraceGuidsW.c)
 *     EtwpSetProviderTraits @ 0x180042B88 (EtwpSetProviderTraits.c)
 *     EtwEventRegister @ 0x180042EC0 (EtwEventRegister.c)
 *     EtwNotificationRegister @ 0x180043080 (EtwNotificationRegister.c)
 *     EvtIntReportEventWorker @ 0x18004ED80 (EvtIntReportEventWorker.c)
 *     EtwUnregisterTraceGuids @ 0x180050380 (EtwUnregisterTraceGuids.c)
 *     EtwNotificationUnregister @ 0x1800503E0 (EtwNotificationUnregister.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x1800507A0 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwEventActivityIdControl @ 0x18005B6E0 (EtwEventActivityIdControl.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x18005CE40 (RtlQueryUnbiasedInterruptTime.c)
 *     EtwGetTraceLoggerHandle @ 0x180081400 (EtwGetTraceLoggerHandle.c)
 *     EtwGetTraceEnableLevel @ 0x180081440 (EtwGetTraceEnableLevel.c)
 *     EtwGetTraceEnableFlags @ 0x180081480 (EtwGetTraceEnableFlags.c)
 *     EtwpTrackProviderBinary @ 0x180081518 (EtwpTrackProviderBinary.c)
 *     EtwRegisterSecurityProvider @ 0x18008BFA0 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x180110AD0 (EtwpUseDescriptorType.c)
 *     EtwCreateTraceInstanceId @ 0x180110BC0 (EtwCreateTraceInstanceId.c)
 *     TppRaiseInvalidParameter @ 0x18011263C (TppRaiseInvalidParameter.c)
 * Callees:
 *     EtwEventWrite @ 0x18004F1F0 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 */

__int64 __fastcall RtlSetLastWin32Error(unsigned int a1)
{
  __int64 result; // rax
  _QWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v3; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1;
  result = (__int64)NtCurrentTeb();
  if ( g_dwLastErrorToBreakOn && a1 == g_dwLastErrorToBreakOn )
    __debugbreak();
  if ( *(_DWORD *)(result + 104) != a1 )
  {
    *(_DWORD *)(result + 104) = a1;
    result = v3;
    if ( v3 )
    {
      if ( g_isErrorOriginProviderEnabled )
      {
        if ( v3 != 997 )
        {
          v2[0] = &v3;
          v2[1] = 4LL;
          return EtwEventWrite(g_hUserDiagnosticProvider, (int)&SetLastWin32ErrorEvent, 1, (__int64)v2);
        }
      }
    }
  }
  return result;
}
