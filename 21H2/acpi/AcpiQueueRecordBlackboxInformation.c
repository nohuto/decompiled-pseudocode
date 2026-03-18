/*
 * XREFs of AcpiQueueRecordBlackboxInformation @ 0x1C0063F38
 * Callers:
 *     RunContext @ 0x1C0010A50 (RunContext.c)
 *     AmliDisableWatchdog @ 0x1C00641E0 (AmliDisableWatchdog.c)
 *     AmliWatchdogTimeoutAction @ 0x1C0064394 (AmliWatchdogTimeoutAction.c)
 * Callees:
 *     <none>
 */

char AcpiQueueRecordBlackboxInformation()
{
  char v0; // cl

  v0 = 0;
  if ( _InterlockedIncrement(&dword_1C0080AE0) == 1 )
  {
    ExQueueWorkItem(&AcpiRecordBlackboxWorkItem, DelayedWorkQueue);
    return 1;
  }
  return v0;
}
