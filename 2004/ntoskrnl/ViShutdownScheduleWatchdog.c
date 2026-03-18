/*
 * XREFs of ViShutdownScheduleWatchdog @ 0x1409D7394
 * Callers:
 *     VfShutdownScheduleWatchdog @ 0x14059CC98 (VfShutdownScheduleWatchdog.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1409D7410 (ViShutdownWatchdogExecuteDpc.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402C90A0 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x1402E3AC0 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x1402F9130 (KeInitializeTimerEx.c)
 */

__int64 ViShutdownScheduleWatchdog()
{
  if ( !VfShutdownThread )
    VfShutdownThread = (ULONG_PTR)KeGetCurrentThread();
  KeInitializeDpc(&ViShutdownWatchdogDpc, ViShutdownWatchdogExecuteDpc, 0LL);
  KeInitializeTimerEx(&ViShutdownWatchdogTimer, NotificationTimer);
  return KiSetTimerEx((__int64)&ViShutdownWatchdogTimer, -6000000000LL, 0, 0, (__int64)&ViShutdownWatchdogDpc);
}
