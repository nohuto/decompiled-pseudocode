/*
 * XREFs of PopSuspendApps @ 0x140763E50
 * Callers:
 *     PopIssueActionRequest @ 0x140763448 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14035B1A4 (PopDiagTraceEventNoPayload.c)
 *     PopDispatchStateCallout @ 0x1407127E4 (PopDispatchStateCallout.c)
 *     PopCheckpointSystemSleep @ 0x140990414 (PopCheckpointSystemSleep.c)
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
