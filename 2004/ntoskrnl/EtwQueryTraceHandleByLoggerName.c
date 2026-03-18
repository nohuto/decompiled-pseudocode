/*
 * XREFs of EtwQueryTraceHandleByLoggerName @ 0x14077743C
 * Callers:
 *     IopErrorLogThread @ 0x14073FD30 (IopErrorLogThread.c)
 *     WmiQueryTraceInformation @ 0x1407766A0 (WmiQueryTraceInformation.c)
 *     WdipSemGetLoggerIds @ 0x1407773AC (WdipSemGetLoggerIds.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140645544 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpReleaseLoggerContext @ 0x14066BAFC (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwQueryTraceHandleByLoggerName(const UNICODE_STRING *a1, _QWORD *a2)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned int *v5; // rax
  __int16 v6; // cx

  if ( !a1 || !a1->Buffer || !a1->Length || !a2 )
    return 3221225485LL;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v5 = (unsigned int *)EtwpAcquireLoggerContextByLoggerName(CurrentServerSiloGlobals[108], a1, 0);
  if ( !v5 )
    return 3221226134LL;
  *a2 = 0LL;
  if ( *v5 )
    v6 = *(_WORD *)v5;
  else
    v6 = -1;
  *(_WORD *)a2 = v6;
  EtwpReleaseLoggerContext(v5, 0);
  return 0LL;
}
