/*
 * XREFs of ?QueueReportForSubmission@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAA?AW4_WER_SUBMIT_RESULT@@XZ @ 0x140009C88
 * Callers:
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x140009084 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     ?TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ @ 0x140009D2C (-TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ.c)
 */

__int64 __fastcall BlackScreenDiagnostics::CWatsonErrorReporting::QueueReportForSubmission(HREPORT *this)
{
  _WER_SUBMIT_RESULT pSubmitResult; // [rsp+38h] [rbp+10h] BYREF

  pSubmitResult = WerCustomAction|WerReportFailed;
  if ( BlackScreenDiagnostics::CWatsonErrorReporting::TryInit(this) )
    WerReportSubmit(*this, WerConsentNotAsked, 4u, &pSubmitResult);
  return (unsigned int)pSubmitResult;
}
