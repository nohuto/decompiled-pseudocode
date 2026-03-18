/*
 * XREFs of ?CollectCurrentProcessHeapDump@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXXZ @ 0x140009C20
 * Callers:
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x140009084 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     ?TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ @ 0x140009D2C (-TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14000A064 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

void __fastcall BlackScreenDiagnostics::CWatsonErrorReporting::CollectCurrentProcessHeapDump(HREPORT *this)
{
  HANDLE CurrentProcess; // rax
  HRESULT v3; // eax
  __int64 v4; // rcx

  if ( BlackScreenDiagnostics::CWatsonErrorReporting::TryInit(this) )
  {
    CurrentProcess = GetCurrentProcess();
    v3 = WerReportAddDump(*this, CurrentProcess, 0LL, WerDumpTypeHeapDump, 0LL, 0LL, 0);
    if ( v3 < 0 )
      MicrosoftTelemetryAssertTriggeredArgs(v4, (unsigned int)v3, 0LL);
  }
}
