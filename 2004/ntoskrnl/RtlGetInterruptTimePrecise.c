/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x14021F2E0
 * Callers:
 *     KeClockInterruptNotify @ 0x140216500 (KeClockInterruptNotify.c)
 *     KeIntSteerSnapPerf @ 0x14021EDD0 (KeIntSteerSnapPerf.c)
 *     PpmCheckStart @ 0x14021EF80 (PpmCheckStart.c)
 *     HalpTimerClockInterrupt @ 0x14021F0C0 (HalpTimerClockInterrupt.c)
 *     KePrepareClockTimerForIdle @ 0x14027E8E0 (KePrepareClockTimerForIdle.c)
 *     KeSetTimer2 @ 0x14027EDC0 (KeSetTimer2.c)
 *     KiExpireTimer2 @ 0x14027FA60 (KiExpireTimer2.c)
 *     KiCheckWaitNext @ 0x1402BC710 (KiCheckWaitNext.c)
 *     PopFxIdleComponent @ 0x1402C9FD0 (PopFxIdleComponent.c)
 *     PopFxResidentTimeoutRoutine @ 0x1402CA610 (PopFxResidentTimeoutRoutine.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1402F3AD0 (KiSetClockIntervalToMinimumRequested.c)
 *     KeQueryInterruptTimePrecise @ 0x14034C9E0 (KeQueryInterruptTimePrecise.c)
 *     KiCheckAndRearmForceIdle @ 0x14035CFEC (KiCheckAndRearmForceIdle.c)
 *     KiResumeClockTimer @ 0x1403810D8 (KiResumeClockTimer.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x1404BB820 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x1404BB9D0 (HalpVpptArmTimer.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x1404BBF64 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpWatchdogCheckPreResetNMI @ 0x1404BD980 (HalpWatchdogCheckPreResetNMI.c)
 *     HalpWatchdogDelayExpiration @ 0x1404BDA70 (HalpWatchdogDelayExpiration.c)
 *     KeGetNextClockTickDuration @ 0x14050E870 (KeGetNextClockTickDuration.c)
 *     KeQueryWakeSource @ 0x14050F23C (KeQueryWakeSource.c)
 *     KeSetForceIdle @ 0x14051DAF8 (KeSetForceIdle.c)
 *     KiResetForceIdle @ 0x14051E170 (KiResetForceIdle.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x1405614AC (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmIdlePrevetoWatchdog @ 0x140561640 (PpmIdlePrevetoWatchdog.c)
 *     PpmUpdateIdleVeto @ 0x140562B20 (PpmUpdateIdleVeto.c)
 *     PopCalculateCsSummary @ 0x14056AA60 (PopCalculateCsSummary.c)
 *     PopSetModernStandbyTransitionReason @ 0x140571334 (PopSetModernStandbyTransitionReason.c)
 *     PpmEventTracePreVetoAccounting @ 0x140575728 (PpmEventTracePreVetoAccounting.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x140576238 (PopIdleWakeNotifyDevicesActive.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x140576334 (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x1405765D0 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopSleepstudyInitialize @ 0x140A3CCEC (PopSleepstudyInitialize.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
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
