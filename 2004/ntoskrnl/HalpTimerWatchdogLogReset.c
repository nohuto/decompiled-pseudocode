/*
 * XREFs of HalpTimerWatchdogLogReset @ 0x1407C24E4
 * Callers:
 *     HalpTimerInitSystem @ 0x1403AC010 (HalpTimerInitSystem.c)
 * Callees:
 *     EtwWrite @ 0x140293470 (EtwWrite.c)
 *     DbgPrint @ 0x140361340 (DbgPrint.c)
 *     HalpTimerWatchdogGeneratedLastReset @ 0x1407C2510 (HalpTimerWatchdogGeneratedLastReset.c)
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
