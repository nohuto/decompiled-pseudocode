/*
 * XREFs of PopDispatchSuperfetchNotification @ 0x1407765E4
 * Callers:
 *     PopIssueActionRequest @ 0x140775A08 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceSuperfetchNotification @ 0x1407765B8 (PopDiagTraceSuperfetchNotification.c)
 *     PfPowerActionNotify @ 0x1409909B4 (PfPowerActionNotify.c)
 *     PopCheckpointSystemSleep @ 0x140993484 (PopCheckpointSystemSleep.c)
 */

__int64 PopDispatchSuperfetchNotification()
{
  PopDiagTraceSuperfetchNotification(1);
  PopCheckpointSystemSleep(6LL);
  PfPowerActionNotify(1LL);
  PopDiagTraceSuperfetchNotification(0);
  return PopCheckpointSystemSleep(7LL);
}
