/*
 * XREFs of PopSuspendApps @ 0x140762570
 * Callers:
 *     PopIssueActionRequest @ 0x140761B68 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14031D664 (PopDiagTraceEventNoPayload.c)
 *     PopDispatchStateCallout @ 0x1406FDDE0 (PopDispatchStateCallout.c)
 *     PopCheckpointSystemSleep @ 0x14098F6C4 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopSuspendApps(_DWORD *a1)
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDAPPS);
  PopCheckpointSystemSleep(2LL);
  a1[4] = 2;
  PopDispatchStateCallout(a1, 0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUSPENDAPPS_END);
  return PopCheckpointSystemSleep(3LL);
}
