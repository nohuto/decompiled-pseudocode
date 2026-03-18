/*
 * XREFs of PopDispatchSuperfetchNotification @ 0x140762744
 * Callers:
 *     PopIssueActionRequest @ 0x140761B68 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceSuperfetchNotification @ 0x140762718 (PopDiagTraceSuperfetchNotification.c)
 *     PfPowerActionNotify @ 0x14098D1AC (PfPowerActionNotify.c)
 *     PopCheckpointSystemSleep @ 0x14098F6C4 (PopCheckpointSystemSleep.c)
 */

__int64 PopDispatchSuperfetchNotification()
{
  PopDiagTraceSuperfetchNotification(1);
  PopCheckpointSystemSleep(6LL);
  PfPowerActionNotify(1LL);
  PopDiagTraceSuperfetchNotification(0);
  return PopCheckpointSystemSleep(7LL);
}
