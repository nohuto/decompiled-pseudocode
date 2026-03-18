/*
 * XREFs of PsGetProcessStartKey @ 0x140245DD0
 * Callers:
 *     EtwpWriteProcessStarted @ 0x14062F1AC (EtwpWriteProcessStarted.c)
 *     EtwpInitStateChangeInfo @ 0x140650DA8 (EtwpInitStateChangeInfo.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140651684 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpWriteUserEvent @ 0x1406557F0 (EtwpWriteUserEvent.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x1407771A0 (EtwpWriteAppStateChangeWithStats.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PsGetProcessStartKey(__int64 a1)
{
  return *(_QWORD *)(a1 + 2296) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
}
