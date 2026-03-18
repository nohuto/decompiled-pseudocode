/*
 * XREFs of PopSuspendApps @ 0x140772460
 * Callers:
 *     PopIssueActionRequest @ 0x140771A58 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x14032BC04 (PopDiagTraceEventNoPayload.c)
 *     PopDispatchStateCallout @ 0x1407205B8 (PopDispatchStateCallout.c)
 *     PopCheckpointSystemSleep @ 0x140996484 (PopCheckpointSystemSleep.c)
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
