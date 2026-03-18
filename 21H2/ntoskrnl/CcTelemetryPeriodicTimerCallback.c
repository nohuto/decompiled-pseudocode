/*
 * XREFs of CcTelemetryPeriodicTimerCallback @ 0x1406DBDA0
 * Callers:
 *     <none>
 * Callees:
 *     CcPostVolumeTelemetry @ 0x1402541A8 (CcPostVolumeTelemetry.c)
 *     CcHasGlobalTelemetryChanged @ 0x140254F5C (CcHasGlobalTelemetryChanged.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     CcForEachPartition @ 0x140363C8C (CcForEachPartition.c)
 *     Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabled @ 0x140416F1C (Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabled.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1406D2264 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

char CcTelemetryPeriodicTimerCallback()
{
  signed __int32 IsEnabled; // eax
  char HasGlobalTelemetryChanged; // si

  IsEnabled = Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabled();
  if ( !IsEnabled || CcTelemetryGlobalData )
  {
    _InterlockedExchange(&dword_140C499D8, 0);
    if ( !(unsigned int)Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabled() )
    {
      IsEnabled = _InterlockedCompareExchange(&CcProviderRegistrationInProgress, 1, 0);
      if ( IsEnabled )
      {
        if ( !CcProviderRegistrationComplete )
          return IsEnabled;
      }
      else
      {
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C02EE8, 0LL, 0LL);
        CcProviderRegistrationComplete = 1;
      }
    }
    Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabled();
    IsEnabled = _InterlockedIncrement(&dword_140C499D0);
    if ( IsEnabled == 1 )
    {
      IsEnabled = _InterlockedCompareExchange(&dword_140C499D4, 1, 0);
      if ( !IsEnabled )
      {
        ++qword_140C498D0;
        qword_140C498D8 += (unsigned int)CcNumberOfMappedVacbs;
        HasGlobalTelemetryChanged = CcHasGlobalTelemetryChanged();
        CcForEachPartition((__int64 (__fastcall *)(__int64, _QWORD, __int64))CcPartitionTelemetryCallback, 0LL, 1, 1);
        LOBYTE(IsEnabled) = CcPostVolumeTelemetry();
        if ( byte_140C498C1 || !HasGlobalTelemetryChanged )
          _InterlockedExchange(&dword_140C499D4, 0);
        else
          LOBYTE(IsEnabled) = KeSetCoalescableTimer(&Timer, DueTime, 0, 0x3A98u, &stru_140C499E0);
      }
    }
    _InterlockedDecrement(&dword_140C499D0);
  }
  return IsEnabled;
}
