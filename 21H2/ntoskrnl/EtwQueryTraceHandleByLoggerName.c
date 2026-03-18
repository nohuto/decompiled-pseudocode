/*
 * XREFs of EtwQueryTraceHandleByLoggerName @ 0x1406E6D40
 * Callers:
 *     WdipSemGetLoggerIds @ 0x1406E6CB0 (WdipSemGetLoggerIds.c)
 *     IopErrorLogThread @ 0x14080FDC0 (IopErrorLogThread.c)
 *     WmiQueryTraceInformation @ 0x140815520 (WmiQueryTraceInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1407940E4 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpReleaseLoggerContext @ 0x1407981E8 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwQueryTraceHandleByLoggerName(__int64 a1, _QWORD *a2)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v4; // rdx
  __int16 *v5; // rax
  __int16 v6; // cx

  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 || !a2 )
    return 3221225485LL;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v5 = (__int16 *)EtwpAcquireLoggerContextByLoggerName(CurrentServerSiloGlobals[108], v4, 0LL);
  if ( !v5 )
    return 3221226134LL;
  *a2 = 0LL;
  if ( *(_DWORD *)v5 )
    v6 = *v5;
  else
    v6 = -1;
  *(_WORD *)a2 = v6;
  EtwpReleaseLoggerContext(v5, 0LL);
  return 0LL;
}
