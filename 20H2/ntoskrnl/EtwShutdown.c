/*
 * XREFs of EtwShutdown @ 0x1407700F0
 * Callers:
 *     PopIssueActionRequest @ 0x140771A58 (PopIssueActionRequest.c)
 *     PspDeleteExternalServerSiloState @ 0x140908A88 (PspDeleteExternalServerSiloState.c)
 *     PopGracefulShutdown @ 0x1409B4060 (PopGracefulShutdown.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     EtwpReleaseLoggerContext @ 0x140669F18 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140669F64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpStopTrace @ 0x140713944 (EtwpStopTrace.c)
 *     EtwpFlushCoverage @ 0x140770200 (EtwpFlushCoverage.c)
 *     EtwpTraceSystemShutdown @ 0x14093A2B4 (EtwpTraceSystemShutdown.c)
 */

void __fastcall EtwShutdown(char a1)
{
  __int64 v2; // rbp
  bool IsCurrentThreadInServerSilo; // al
  bool v4; // si
  __int16 v5; // bx
  unsigned int *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD v9[22]; // [rsp+20h] [rbp-D8h] BYREF

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
  memset(v9, 0, sizeof(v9));
  LODWORD(v9[0]) = 176;
  v5 = *(_WORD *)(v2 + 16);
  HIDWORD(v9[5]) = 0x20000;
  while ( --v5 >= 0 )
  {
    v6 = EtwpAcquireLoggerContextByLoggerId(v2, v5, 0);
    if ( v6 )
    {
      if ( v4 )
        goto LABEL_19;
      if ( a1 )
      {
        if ( (v6[3] & 0x400000) == 0 )
          goto LABEL_8;
LABEL_19:
        if ( v5 )
          LOWORD(v9[1]) = v5;
        else
          LOWORD(v9[1]) = -1;
        *(_OWORD *)&v9[3] = *(_OWORD *)(v6 + 73);
        EtwpReleaseLoggerContext(v6, 0);
        if ( !a1 )
          ++EtwpStopTraceCount;
        LOBYTE(v7) = 1;
        EtwpStopTrace(v2, (__int64)v9, v7, v8);
      }
      else
      {
        if ( (v6[3] & 0x400) == 0 )
          goto LABEL_19;
LABEL_8:
        EtwpReleaseLoggerContext(v6, 0);
      }
    }
  }
  if ( !a1 )
    EtwpStopTraceCount = 0;
}
