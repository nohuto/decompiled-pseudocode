/*
 * XREFs of EtwQueryTraceHandleByLoggerName @ 0x14077502C
 * Callers:
 *     IopErrorLogThread @ 0x14073E1B0 (IopErrorLogThread.c)
 *     WmiQueryTraceInformation @ 0x140774290 (WmiQueryTraceInformation.c)
 *     WdipSemGetLoggerIds @ 0x140774F9C (WdipSemGetLoggerIds.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpReleaseLoggerContext @ 0x1405F3C38 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14067A780 (EtwpAcquireLoggerContextByLoggerName.c)
 */

__int64 __fastcall EtwQueryTraceHandleByLoggerName(const UNICODE_STRING *a1, _QWORD *a2)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned int *v5; // rax
  __int16 v6; // cx

  if ( !a1 || !a1->Buffer || !a1->Length || !a2 )
    return 3221225485LL;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v5 = EtwpAcquireLoggerContextByLoggerName(CurrentServerSiloGlobals[108], a1, 0);
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
