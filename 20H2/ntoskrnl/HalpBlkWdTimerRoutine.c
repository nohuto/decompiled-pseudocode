/*
 * XREFs of HalpBlkWdTimerRoutine @ 0x1404DD880
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 */

void HalpBlkWdTimerRoutine()
{
  if ( (_DWORD)HalpBlkNumberProcessors )
  {
    if ( !_InterlockedExchange(&HalpBlkWdPollingInProgress, 1) )
      ExQueueWorkItem(&HalpBlkWdWorkItem, DelayedWorkQueue);
  }
}
