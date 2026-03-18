/*
 * XREFs of PsGetProcessSessionId @ 0x14026C600
 * Callers:
 *     EtwpInitStateChangeInfo @ 0x140620168 (EtwpInitStateChangeInfo.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140620A44 (EtwQueryProcessTelemetryInfo.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x140623E4C (ExpWnfGetCurrentScopeInstance.c)
 *     EtwpWriteProcessStarted @ 0x14064D198 (EtwpWriteProcessStarted.c)
 *     PspEstablishJobHierarchy @ 0x140659124 (PspEstablishJobHierarchy.c)
 *     MiLogReserveVaFailed @ 0x1408C3654 (MiLogReserveVaFailed.c)
 *     MiLogCommitRequestFailed @ 0x1408D3DE4 (MiLogCommitRequestFailed.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140903A14 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 */

__int64 __fastcall PsGetProcessSessionId(__int64 a1)
{
  unsigned int SessionId; // ecx
  __int64 result; // rax

  SessionId = MmGetSessionIdEx(a1);
  result = 0LL;
  if ( SessionId != -1 )
    return SessionId;
  return result;
}
