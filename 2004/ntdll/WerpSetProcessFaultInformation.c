/*
 * XREFs of WerpSetProcessFaultInformation @ 0x1800DDB28
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DCA20 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DCEF0 (RtlReportExceptionHelper.c)
 * Callees:
 *     NtSetInformationProcess @ 0x18009D190 (NtSetInformationProcess.c)
 */

__int64 __fastcall WerpSetProcessFaultInformation(__int64 a1)
{
  if ( a1 )
    return NtSetInformationProcess();
  else
    return 3221225711LL;
}
