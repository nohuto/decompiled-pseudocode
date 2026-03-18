/*
 * XREFs of EtwShutdown @ 0x140761AE0
 * Callers:
 *     PopIssueActionRequest @ 0x140763448 (PopIssueActionRequest.c)
 *     PspDeleteExternalServerSiloState @ 0x140902E78 (PspDeleteExternalServerSiloState.c)
 *     PopGracefulShutdown @ 0x1409AE0F0 (PopGracefulShutdown.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14066BA28 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14066BAFC (EtwpReleaseLoggerContext.c)
 *     EtwpStopTrace @ 0x1406C75AC (EtwpStopTrace.c)
 *     EtwpFlushCoverage @ 0x140761BF0 (EtwpFlushCoverage.c)
 *     EtwpTraceSystemShutdown @ 0x140934484 (EtwpTraceSystemShutdown.c)
 */

void __fastcall EtwShutdown(char a1)
{
  __int64 v2; // rbp
  char IsCurrentThreadInServerSilo; // al
  char v4; // si
  __int16 v5; // bx
  __int64 v6; // rax
  _QWORD v7[22]; // [rsp+20h] [rbp-D8h] BYREF

  v2 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo();
  v4 = IsCurrentThreadInServerSilo;
  if ( !a1 )
  {
    if ( !IsCurrentThreadInServerSilo )
      EtwpTraceSystemShutdown();
    *(_DWORD *)(v2 + 4068) = 1;
  }
  if ( !v4 )
    EtwpFlushCoverage();
  memset(v7, 0, sizeof(v7));
  LODWORD(v7[0]) = 176;
  v5 = *(_WORD *)(v2 + 16);
  HIDWORD(v7[5]) = 0x20000;
  while ( --v5 >= 0 )
  {
    v6 = EtwpAcquireLoggerContextByLoggerId(v2, v5, 0);
    if ( v6 )
    {
      if ( v4 )
        goto LABEL_19;
      if ( a1 )
      {
        if ( (*(_DWORD *)(v6 + 12) & 0x400000) == 0 )
          goto LABEL_8;
LABEL_19:
        if ( v5 )
          LOWORD(v7[1]) = v5;
        else
          LOWORD(v7[1]) = -1;
        *(_OWORD *)&v7[3] = *(_OWORD *)(v6 + 292);
        EtwpReleaseLoggerContext((unsigned int *)v6, 0);
        if ( !a1 )
          ++EtwpStopTraceCount;
        EtwpStopTrace(v2, v7, 1);
      }
      else
      {
        if ( (*(_DWORD *)(v6 + 12) & 0x400) == 0 )
          goto LABEL_19;
LABEL_8:
        EtwpReleaseLoggerContext((unsigned int *)v6, 0);
      }
    }
  }
  if ( !a1 )
    EtwpStopTraceCount = 0;
}
