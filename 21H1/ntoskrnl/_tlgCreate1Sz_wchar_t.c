/*
 * XREFs of _tlgCreate1Sz_wchar_t @ 0x14033DA64
 * Callers:
 *     PopDiagTraceIrpFinishTelemetry @ 0x140377FEC (PopDiagTraceIrpFinishTelemetry.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140386BA4 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x140386D34 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140387008 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1403871F4 (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceZoneCr3Mitigated @ 0x14056E040 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x14056E16C (PopTraceZoneCr3Tripped.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1406649AC (EtwpWriteAppStateChangeSummary.c)
 *     CmpLogHiveFileInaccessible @ 0x14068EBC4 (CmpLogHiveFileInaccessible.c)
 *     PopLogPowerRequestAction @ 0x1407003C8 (PopLogPowerRequestAction.c)
 *     EtwpWriteProcessStarted @ 0x1407004B0 (EtwpWriteProcessStarted.c)
 *     PnpTraceDeviceConfig @ 0x140735ED4 (PnpTraceDeviceConfig.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x140790D3C (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407BAD84 (PopThermalHandlePreviousShutdown.c)
 *     IoGetEnvironmentVariableEx @ 0x1408954AC (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x1408957BC (IoSetEnvironmentVariableEx.c)
 *     PnpTraceDriverBlocked @ 0x1408AD7D8 (PnpTraceDriverBlocked.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x1408E5870 (PopDiagTraceDozeDeferralDecision.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408F1D3C (PopPublishAndPurgePowerRequestStats.c)
 *     PopSqmThermalCriticalEvent @ 0x1408F54C8 (PopSqmThermalCriticalEvent.c)
 *     PopSqmThermalZoneEnumeration @ 0x1408F57EC (PopSqmThermalZoneEnumeration.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x1408FD4C0 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x1408FD8D8 (TtmiLogDeviceEnumeratedTerminalEvent.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x14094707C (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     Phase1InitializationIoReady @ 0x140A3EF44 (Phase1InitializationIoReady.c)
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
