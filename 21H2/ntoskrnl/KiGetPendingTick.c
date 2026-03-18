/*
 * XREFs of KiGetPendingTick @ 0x14023EF1C
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x140308240 (KeResumeClockTimerFromIdle.c)
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
