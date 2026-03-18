/*
 * XREFs of _tlgCreate1Sz_wchar_t @ 0x14023D318
 * Callers:
 *     PopDiagTraceIrpFinishTelemetry @ 0x14037AB2C (PopDiagTraceIrpFinishTelemetry.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140389CD4 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x140389E64 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14038A138 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x14038A324 (PopTraceThermalRequestActiveActivity.c)
 *     ExLogTimeZoneInformation @ 0x1403B3334 (ExLogTimeZoneInformation.c)
 *     PopTraceZoneCr3Mitigated @ 0x1405720C0 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1405721EC (PopTraceZoneCr3Tripped.c)
 *     PopLogPowerRequestAction @ 0x14062C1F0 (PopLogPowerRequestAction.c)
 *     EtwpWriteProcessStarted @ 0x14062F1AC (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14064FECC (EtwpWriteAppStateChangeSummary.c)
 *     CmpLogHiveFileInaccessible @ 0x1406FB038 (CmpLogHiveFileInaccessible.c)
 *     PnpTraceDeviceConfig @ 0x14073DDB8 (PnpTraceDeviceConfig.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x14079FE78 (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407CC784 (PopThermalHandlePreviousShutdown.c)
 *     IoGetEnvironmentVariableEx @ 0x14089C47C (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x14089C78C (IoSetEnvironmentVariableEx.c)
 *     PnpTraceDriverBlocked @ 0x1408B4628 (PnpTraceDriverBlocked.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x1408EC700 (PopDiagTraceDozeDeferralDecision.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408F8C3C (PopPublishAndPurgePowerRequestStats.c)
 *     PopSqmThermalCriticalEvent @ 0x1408FC3C8 (PopSqmThermalCriticalEvent.c)
 *     PopSqmThermalZoneEnumeration @ 0x1408FC6EC (PopSqmThermalZoneEnumeration.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x140904404 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x14090481C (TtmiLogDeviceEnumeratedTerminalEvent.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x14094E130 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 * Callees:
 *     <none>
 */

void __fastcall tlgCreate1Sz_wchar_t(__int64 a1, const size_t *a2)
{
  __int64 v2; // rax
  int v3; // r8d

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( *((_WORD *)a2 + v2) );
    v3 = 2 * v2 + 2;
  }
  else
  {
    a2 = &cchOriginalDestLength;
    v3 = 2;
  }
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 12) = 0;
}
