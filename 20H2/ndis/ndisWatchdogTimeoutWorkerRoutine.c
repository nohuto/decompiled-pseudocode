/*
 * XREFs of ndisWatchdogTimeoutWorkerRoutine @ 0x1C01220A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportTimeout@NdisWatchdogState@@QEAAXXZ @ 0x1C01219C0 (-ReportTimeout@NdisWatchdogState@@QEAAXXZ.c)
 */

void __fastcall ndisWatchdogTimeoutWorkerRoutine(struct _KEVENT *a1)
{
  NdisWatchdogState::ReportTimeout(a1);
}
