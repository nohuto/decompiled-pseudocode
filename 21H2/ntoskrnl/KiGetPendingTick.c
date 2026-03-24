/*
 * XREFs of KiGetPendingTick @ 0x1402BC9E0
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x140224BE0 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     <none>
 */

char KiGetPendingTick()
{
  struct _KPRCB *CurrentPrcb; // rax

  if ( KiClockTimerPerCpu )
    CurrentPrcb = KeGetCurrentPrcb();
  else
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[(unsigned int)KiClockTimerOwner];
  return CurrentPrcb->PendingTickFlags & 1;
}
