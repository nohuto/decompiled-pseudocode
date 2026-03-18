/*
 * XREFs of PsGetProcessStartKey @ 0x14026D6B0
 * Callers:
 *     EtwpInitStateChangeInfo @ 0x140620168 (EtwpInitStateChangeInfo.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140620A44 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpWriteUserEvent @ 0x1406246E0 (EtwpWriteUserEvent.c)
 *     EtwpWriteProcessStarted @ 0x14064D198 (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x140768B90 (EtwpWriteAppStateChangeWithStats.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PsGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 2296) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
