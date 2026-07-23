/*
 * XREFs of KiGetPendingTick @ 0x14023AF70
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x1402C94E0 (KeResumeClockTimerFromIdle.c)
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
