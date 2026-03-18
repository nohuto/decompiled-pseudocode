/*
 * XREFs of PsGetProcessSessionId @ 0x140244CC0
 * Callers:
 *     PspEstablishJobHierarchy @ 0x14062D6C4 (PspEstablishJobHierarchy.c)
 *     EtwpWriteProcessStarted @ 0x14062F1AC (EtwpWriteProcessStarted.c)
 *     EtwpInitStateChangeInfo @ 0x140650DA8 (EtwpInitStateChangeInfo.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140651684 (EtwQueryProcessTelemetryInfo.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x140654F58 (ExpWnfGetCurrentScopeInstance.c)
 *     MiLogReserveVaFailed @ 0x1408C9494 (MiLogReserveVaFailed.c)
 *     MiLogCommitRequestFailed @ 0x1408D9C24 (MiLogCommitRequestFailed.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140909634 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
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
