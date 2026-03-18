/*
 * XREFs of KiDeferDpcWatchdogViolation @ 0x1405790F8
 * Callers:
 *     KeAccumulateTicks @ 0x1403078A0 (KeAccumulateTicks.c)
 * Callees:
 *     KeRelaxTimingConstraints @ 0x140568560 (KeRelaxTimingConstraints.c)
 */

signed __int64 KiDeferDpcWatchdogViolation()
{
  struct _KPRCB *CurrentPrcb; // rbx
  signed __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  result = _InterlockedCompareExchange64(&KiDeferredDpcWatchdogActivePrcb, (signed __int64)CurrentPrcb, 0LL);
  if ( !result )
  {
    KeRelaxTimingConstraints(1);
    LODWORD(KiSavedDpcTimeCount) = CurrentPrcb->DpcTimeCount;
    result = CurrentPrcb->DpcTimeLimitTicks;
    LODWORD(KiSavedDpcTimeLimitTicks) = CurrentPrcb->DpcTimeLimitTicks;
  }
  return result;
}
