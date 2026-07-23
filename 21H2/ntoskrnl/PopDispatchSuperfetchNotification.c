/*
 * XREFs of PopDispatchSuperfetchNotification @ 0x1407767A4
 * Callers:
 *     PopIssueActionRequest @ 0x140775BC8 (PopIssueActionRequest.c)
 * Callees:
 *     PopDiagTraceSuperfetchNotification @ 0x140776778 (PopDiagTraceSuperfetchNotification.c)
 *     PfPowerActionNotify @ 0x1409919B4 (PfPowerActionNotify.c)
 *     PopCheckpointSystemSleep @ 0x140994484 (PopCheckpointSystemSleep.c)
 */

__int64 PopDispatchSuperfetchNotification()
{
  PopDiagTraceSuperfetchNotification(1);
  PopCheckpointSystemSleep(6LL);
  PfPowerActionNotify(1LL);
  PopDiagTraceSuperfetchNotification(0);
  return PopCheckpointSystemSleep(7LL);
}
