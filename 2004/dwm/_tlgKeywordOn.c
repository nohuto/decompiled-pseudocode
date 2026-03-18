/*
 * XREFs of _tlgKeywordOn @ 0x140009A3C
 * Callers:
 *     ?DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXXZ @ 0x14000877C (-DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXXZ.c)
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x140009084 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 *     ?RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x14000945C (-RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4Diag.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x14000A088 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

char __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & *(_QWORD *)(a1 + 16)) != 0 && (a2 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24) )
    return 1;
  return v2;
}
