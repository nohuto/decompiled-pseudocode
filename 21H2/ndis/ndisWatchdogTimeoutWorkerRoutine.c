/*
 * XREFs of ndisWatchdogTimeoutWorkerRoutine @ 0x1C0122060
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportTimeout@NdisWatchdogState@@QEAAXXZ @ 0x1C0121980 (-ReportTimeout@NdisWatchdogState@@QEAAXXZ.c)
 */

void __fastcall ndisWatchdogTimeoutWorkerRoutine(struct _KEVENT *a1)
{
  NdisWatchdogState::ReportTimeout(a1);
}
