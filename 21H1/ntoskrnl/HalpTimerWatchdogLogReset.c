/*
 * XREFs of HalpTimerWatchdogLogReset @ 0x1407BEFE4
 * Callers:
 *     HalpTimerInitSystem @ 0x1403A4F50 (HalpTimerInitSystem.c)
 * Callees:
 *     EtwWrite @ 0x140256BF0 (EtwWrite.c)
 *     DbgPrint @ 0x14033C6D0 (DbgPrint.c)
 *     HalpTimerWatchdogGeneratedLastReset @ 0x1407BF010 (HalpTimerWatchdogGeneratedLastReset.c)
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
