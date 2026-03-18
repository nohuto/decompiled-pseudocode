/*
 * XREFs of PsGetProcessSessionId @ 0x1402D5FA0
 * Callers:
 *     EtwpInitStateChangeInfo @ 0x140665888 (EtwpInitStateChangeInfo.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140666164 (EtwQueryProcessTelemetryInfo.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x14066956C (ExpWnfGetCurrentScopeInstance.c)
 *     PspEstablishJobHierarchy @ 0x140672018 (PspEstablishJobHierarchy.c)
 *     EtwpWriteProcessStarted @ 0x1407004B0 (EtwpWriteProcessStarted.c)
 *     MiLogReserveVaFailed @ 0x1408C2304 (MiLogReserveVaFailed.c)
 *     MiLogCommitRequestFailed @ 0x1408D2A94 (MiLogCommitRequestFailed.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140902C04 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
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
