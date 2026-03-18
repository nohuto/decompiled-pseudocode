/*
 * XREFs of HalpTimerWatchdogLogReset @ 0x1408247DC
 * Callers:
 *     HalpTimerInitSystem @ 0x1403BB0A0 (HalpTimerInitSystem.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     HalpTimerWatchdogGeneratedLastReset @ 0x140824800 (HalpTimerWatchdogGeneratedLastReset.c)
 */

ULONG HalpTimerWatchdogLogReset()
{
  ULONG result; // eax

  result = HalpTimerWatchdogGeneratedLastReset();
  if ( (_BYTE)result )
  {
    if ( HalpDiagnosticEventsRegistered )
    {
      EtwWrite(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_WATCHDOG_TRIGGERED, 0LL, 0, 0LL);
      return DbgPrint("System was rebooted due to system watchdog timeout.\n");
    }
  }
  return result;
}
