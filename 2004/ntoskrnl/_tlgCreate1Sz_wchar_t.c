/*
 * XREFs of _tlgCreate1Sz_wchar_t @ 0x140276BC8
 * Callers:
 *     PopDiagTraceIrpFinishTelemetry @ 0x140378DFC (PopDiagTraceIrpFinishTelemetry.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140387B14 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x140387CA4 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140387F78 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x140388164 (PopTraceThermalRequestActiveActivity.c)
 *     ExLogTimeZoneInformation @ 0x1403B09C4 (ExLogTimeZoneInformation.c)
 *     PopTraceZoneCr3Mitigated @ 0x14056E690 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x14056E7BC (PopTraceZoneCr3Tripped.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14061F28C (EtwpWriteAppStateChangeSummary.c)
 *     CmpLogHiveFileInaccessible @ 0x14063CA24 (CmpLogHiveFileInaccessible.c)
 *     PopLogPowerRequestAction @ 0x14064D0B0 (PopLogPowerRequestAction.c)
 *     EtwpWriteProcessStarted @ 0x14064D198 (EtwpWriteProcessStarted.c)
 *     PnpTraceDeviceConfig @ 0x14072F600 (PnpTraceDeviceConfig.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x1407936EC (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407BDEF4 (PopThermalHandlePreviousShutdown.c)
 *     IoGetEnvironmentVariableEx @ 0x1408967CC (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x140896ADC (IoSetEnvironmentVariableEx.c)
 *     PnpTraceDriverBlocked @ 0x1408AEAF8 (PnpTraceDriverBlocked.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x1408E6AF0 (PopDiagTraceDozeDeferralDecision.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408F302C (PopPublishAndPurgePowerRequestStats.c)
 *     PopSqmThermalCriticalEvent @ 0x1408F67B8 (PopSqmThermalCriticalEvent.c)
 *     PopSqmThermalZoneEnumeration @ 0x1408F6ADC (PopSqmThermalZoneEnumeration.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x1408FE7B0 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x1408FEBC8 (TtmiLogDeviceEnumeratedTerminalEvent.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x140948370 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
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
