/*
 * XREFs of VfShutdownScheduleWatchdog @ 0x1405A0738
 * Callers:
 *     PopGracefulShutdown @ 0x1409B4060 (PopGracefulShutdown.c)
 * Callees:
 *     ViShutdownScheduleWatchdog @ 0x1409DD3B4 (ViShutdownScheduleWatchdog.c)
 */

__int64 VfShutdownScheduleWatchdog()
{
  __int64 result; // rax

  if ( ViVerifierEnabled )
    return ViShutdownScheduleWatchdog();
  return result;
}
