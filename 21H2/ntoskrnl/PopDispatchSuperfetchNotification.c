/*
 * XREFs of PopDispatchSuperfetchNotification @ 0x1407FFE58
 * Callers:
 *     PopIssueActionRequest @ 0x1407FF888 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140256CA0 (PopDiagTraceEventNoPayload.c)
 *     PfPowerActionNotify @ 0x140A49250 (PfPowerActionNotify.c)
 *     PopCheckpointSystemSleep @ 0x140A4B974 (PopCheckpointSystemSleep.c)
 */

__int64 PopDispatchSuperfetchNotification()
{
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUPERFETCH_START);
  PopCheckpointSystemSleep(6LL);
  PfPowerActionNotify(1LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_SUPERFETCH_STOP);
  return PopCheckpointSystemSleep(7LL);
}
