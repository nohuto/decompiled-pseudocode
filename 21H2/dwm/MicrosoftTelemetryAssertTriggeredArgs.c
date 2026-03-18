/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgs @ 0x14000A064
 * Callers:
 *     ?DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXXZ @ 0x14000877C (-DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXXZ.c)
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x1400088AC (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 *     BlackScreenDiagnostics::GetDwmFrontBufferBitsColor @ 0x140008B50 (BlackScreenDiagnostics--GetDwmFrontBufferBitsColor.c)
 *     BlackScreenDiagnostics::IsSectionAllBlackPixels @ 0x140008FE0 (BlackScreenDiagnostics--IsSectionAllBlackPixels.c)
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x140009084 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 *     BlackScreenDiagnostics::TriggerGraphicsCollection @ 0x140009674 (BlackScreenDiagnostics--TriggerGraphicsCollection.c)
 *     ?CollectCurrentProcessHeapDump@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXXZ @ 0x140009C20 (-CollectCurrentProcessHeapDump@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXXZ.c)
 *     ?SetReportParameter@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXKPEBG@Z @ 0x140009CD0 (-SetReportParameter@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXKPEBG@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x14000A088 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 __fastcall MicrosoftTelemetryAssertTriggeredArgs(__int64 a1, int a2, int a3)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker((_DWORD)retaddr, a2, a3, a2, a3);
}
