/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x140278330
 * Callers:
 *     KiCheckWaitNext @ 0x140229A90 (KiCheckWaitNext.c)
 *     PopFxIdleComponent @ 0x1402371A0 (PopFxIdleComponent.c)
 *     PopFxResidentTimeoutRoutine @ 0x1402377E0 (PopFxResidentTimeoutRoutine.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1402407D0 (KiSetClockIntervalToMinimumRequested.c)
 *     KePrepareClockTimerForIdle @ 0x140241D70 (KePrepareClockTimerForIdle.c)
 *     KeSetTimer2 @ 0x1402426C0 (KeSetTimer2.c)
 *     KiExpireTimer2 @ 0x140243360 (KiExpireTimer2.c)
 *     KeClockInterruptNotify @ 0x14026F550 (KeClockInterruptNotify.c)
 *     KeIntSteerSnapPerf @ 0x140277E20 (KeIntSteerSnapPerf.c)
 *     PpmCheckStart @ 0x140277FD0 (PpmCheckStart.c)
 *     HalpTimerClockInterrupt @ 0x140278110 (HalpTimerClockInterrupt.c)
 *     KeQueryInterruptTimePrecise @ 0x14030F310 (KeQueryInterruptTimePrecise.c)
 *     KiCheckAndRearmForceIdle @ 0x14031F4DC (KiCheckAndRearmForceIdle.c)
 *     KiResumeClockTimer @ 0x140380898 (KiResumeClockTimer.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x1404BB140 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x1404BB2F0 (HalpVpptArmTimer.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x1404BB884 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpWatchdogCheckPreResetNMI @ 0x1404BD2A0 (HalpWatchdogCheckPreResetNMI.c)
 *     HalpWatchdogDelayExpiration @ 0x1404BD390 (HalpWatchdogDelayExpiration.c)
 *     KeGetNextClockTickDuration @ 0x14050E220 (KeGetNextClockTickDuration.c)
 *     KeQueryWakeSource @ 0x14050EBEC (KeQueryWakeSource.c)
 *     KeSetForceIdle @ 0x14051D4A8 (KeSetForceIdle.c)
 *     KiResetForceIdle @ 0x14051DB20 (KiResetForceIdle.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140560E5C (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PpmIdlePrevetoWatchdog @ 0x140560FF0 (PpmIdlePrevetoWatchdog.c)
 *     PpmUpdateIdleVeto @ 0x1405624D0 (PpmUpdateIdleVeto.c)
 *     PopCalculateCsSummary @ 0x14056A410 (PopCalculateCsSummary.c)
 *     PopSetModernStandbyTransitionReason @ 0x140570CE4 (PopSetModernStandbyTransitionReason.c)
 *     PpmEventTracePreVetoAccounting @ 0x1405750D8 (PpmEventTracePreVetoAccounting.c)
 *     PopIdleWakeNotifyDevicesActive @ 0x140575BE8 (PopIdleWakeNotifyDevicesActive.c)
 *     PopIdleWakeNotifyIdleResiliencyState @ 0x140575CE4 (PopIdleWakeNotifyIdleResiliencyState.c)
 *     PopIdleWakeNotifyModernStandbyExit @ 0x140575F80 (PopIdleWakeNotifyModernStandbyExit.c)
 *     PopSleepstudyInitialize @ 0x140A3D094 (PopSleepstudyInitialize.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
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
