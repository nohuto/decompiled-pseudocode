/*
 * XREFs of PsGetProcessStartKey @ 0x1402D7050
 * Callers:
 *     EtwpInitStateChangeInfo @ 0x140665888 (EtwpInitStateChangeInfo.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140666164 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpWriteUserEvent @ 0x140669E00 (EtwpWriteUserEvent.c)
 *     EtwpWriteProcessStarted @ 0x1407004B0 (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x1407667B0 (EtwpWriteAppStateChangeWithStats.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PsGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 2296) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
