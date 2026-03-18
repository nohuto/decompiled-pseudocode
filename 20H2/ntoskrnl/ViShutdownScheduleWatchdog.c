/*
 * XREFs of ViShutdownScheduleWatchdog @ 0x1409DD3B4
 * Callers:
 *     VfShutdownScheduleWatchdog @ 0x1405A0738 (VfShutdownScheduleWatchdog.c)
 *     ViShutdownWatchdogExecuteDpc @ 0x1409DD430 (ViShutdownWatchdogExecuteDpc.c)
 * Callees:
 *     KiSetTimerEx @ 0x140247520 (KiSetTimerEx.c)
 *     KeInitializeTimerEx @ 0x1402D6620 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x14033E040 (KeInitializeDpc.c)
 */

__int64 ViShutdownScheduleWatchdog()
{
  if ( !VfShutdownThread )
    VfShutdownThread = (ULONG_PTR)KeGetCurrentThread();
  KeInitializeDpc(&ViShutdownWatchdogDpc, ViShutdownWatchdogExecuteDpc, 0LL);
  KeInitializeTimerEx(&ViShutdownWatchdogTimer, NotificationTimer);
  return KiSetTimerEx((__int64)&ViShutdownWatchdogTimer, -6000000000LL, 0, 0, (__int64)&ViShutdownWatchdogDpc);
}
