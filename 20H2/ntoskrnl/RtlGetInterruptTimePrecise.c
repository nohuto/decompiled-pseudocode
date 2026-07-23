/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x140288C20
 * Callers:
 *     PopFxIdleComponent @ 0x140246C40 (PopFxIdleComponent.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140266620 (KiSetClockIntervalToMinimumRequested.c)
 *     KeClockInterruptNotify @ 0x140280F70 (KeClockInterruptNotify.c)
 *     KeIntSteerSnapPerf @ 0x140288620 (KeIntSteerSnapPerf.c)
 *     PpmCheckStart @ 0x1402888C0 (PpmCheckStart.c)
 *     HalpTimerClockInterrupt @ 0x140288A00 (HalpTimerClockInterrupt.c)
 *     KiCheckWaitNext @ 0x1402DA930 (KiCheckWaitNext.c)
 *     KePrepareClockTimerForIdle @ 0x1402DFF00 (KePrepareClockTimerForIdle.c)
 *     KiExpireTimer2 @ 0x1402E01F0 (KiExpireTimer2.c)
 *     KeSetTimer2 @ 0x1402E0AF0 (KeSetTimer2.c)
 *     PopFxResidentTimeoutRoutine @ 0x14030F010 (PopFxResidentTimeoutRoutine.c)
 *     KeQueryInterruptTimePrecise @ 0x14031D740 (KeQueryInterruptTimePrecise.c)
 *     KiCheckAndRearmForceIdle @ 0x14032DADC (KiCheckAndRearmForceIdle.c)
 *     KiResumeClockTimer @ 0x140382E98 (KiResumeClockTimer.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x1404BED40 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x1404BEEF0 (HalpVpptArmTimer.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x1404BF484 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpWatchdogCheckPreResetNMI @ 0x1404C0EA0 (HalpWatchdogCheckPreResetNMI.c)
 *     HalpWatchdogDelayExpiration @ 0x1404C0F90 (HalpWatchdogDelayExpiration.c)
 *     KeGetNextClockTickDuration @ 0x1405121A0 (KeGetNextClockTickDuration.c)
 *     KeQueryWakeSource @ 0x140512B6C (KeQueryWakeSource.c)
 *     KeSetForceIdle @ 0x1405214C8 (KeSetForceIdle.c)
 *     KiResetForceIdle @ 0x140521B40 (KiResetForceIdle.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140564E8C (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmIdlePrevetoWatchdog @ 0x140565020 (PpmIdlePrevetoWatchdog.c)
 *     PpmUpdateIdleVeto @ 0x140566500 (PpmUpdateIdleVeto.c)
 *     PopCalculateCsSummary @ 0x14056E490 (PopCalculateCsSummary.c)
 *     PopSetModernStandbyTransitionReason @ 0x140574D64 (PopSetModernStandbyTransitionReason.c)
 *     PpmEventTracePreVetoAccounting @ 0x140579158 (PpmEventTracePreVetoAccounting.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x140579C68 (PopIdleWakeNotifyDevicesActive.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x140579D64 (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x14057A000 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopSleepstudyInitialize @ 0x140A42F8C (PopSleepstudyInitialize.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER __cdecl RtlGetInterruptTimePrecise(PLARGE_INTEGER PerformanceCounter)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  LARGE_INTEGER v4; // rbp
  LARGE_INTEGER v5; // rdx
  LONGLONG v6; // rdx
  LARGE_INTEGER result; // rax

  while ( 1 )
  {
    v2 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v3 = MEMORY[0xFFFFF78000000350];
      v4.QuadPart = MEMORY[0xFFFFF78000000008];
      v5 = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v2 )
        break;
    }
    _mm_pause();
  }
  *PerformanceCounter = v5;
  if ( v5.QuadPart <= v3 )
  {
    return v4;
  }
  else
  {
    v6 = v5.QuadPart - v3 - 1;
    if ( MEMORY[0xFFFFF78000000369] )
      v6 <<= MEMORY[0xFFFFF78000000369];
    result.QuadPart = (((unsigned __int64)v6 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64) + v4.QuadPart;
  }
  return result;
}
