/*
 * XREFs of HalpTimerWatchdogLogReset @ 0x1407D0CE4
 * Callers:
 *     HalpTimerInitSystem @ 0x1403AE600 (HalpTimerInitSystem.c)
 * Callees:
 *     EtwWrite @ 0x14020E030 (EtwWrite.c)
 *     DbgPrint @ 0x1403647B0 (DbgPrint.c)
 *     HalpTimerWatchdogGeneratedLastReset @ 0x1407D0D10 (HalpTimerWatchdogGeneratedLastReset.c)
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
