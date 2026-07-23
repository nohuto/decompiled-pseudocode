/*
 * XREFs of HalpBlkWdTimerRoutine @ 0x1404DF4D0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 */

void HalpBlkWdTimerRoutine()
{
  if ( (_DWORD)HalpBlkNumberProcessors )
  {
    if ( !_InterlockedExchange(&HalpBlkWdPollingInProgress, 1) )
      ExQueueWorkItem(&HalpBlkWdWorkItem, DelayedWorkQueue);
  }
}
