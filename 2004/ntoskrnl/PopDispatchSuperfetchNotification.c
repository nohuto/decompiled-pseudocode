/*
 * XREFs of PopDispatchSuperfetchNotification @ 0x140764024
 * Callers:
 *     PopIssueActionRequest @ 0x140763448 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceSuperfetchNotification @ 0x140763FF8 (PopDiagTraceSuperfetchNotification.c)
 *     PfPowerActionNotify @ 0x14098D9C4 (PfPowerActionNotify.c)
 *     PopCheckpointSystemSleep @ 0x140990414 (PopCheckpointSystemSleep.c)
 */

__int64 PopDispatchSuperfetchNotification()
{
  PopDiagTraceSuperfetchNotification(1);
  PopCheckpointSystemSleep(6LL);
  PfPowerActionNotify(1LL);
  PopDiagTraceSuperfetchNotification(0);
  return PopCheckpointSystemSleep(7LL);
}
