/*
 * XREFs of PopDispatchSuperfetchNotification @ 0x140772634
 * Callers:
 *     PopIssueActionRequest @ 0x140771A58 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceSuperfetchNotification @ 0x140772608 (PopDiagTraceSuperfetchNotification.c)
 *     PfPowerActionNotify @ 0x1409939B4 (PfPowerActionNotify.c)
 *     PopCheckpointSystemSleep @ 0x140996484 (PopCheckpointSystemSleep.c)
 */

__int64 PopDispatchSuperfetchNotification()
{
  PopDiagTraceSuperfetchNotification(1);
  PopCheckpointSystemSleep(6LL);
  PfPowerActionNotify(1LL);
  PopDiagTraceSuperfetchNotification(0);
  return PopCheckpointSystemSleep(7LL);
}
