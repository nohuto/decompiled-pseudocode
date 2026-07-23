/*
 * XREFs of HalpTimerSelectRoles @ 0x1403AAB2C
 * Callers:
 *     HalpInitializeTimers @ 0x1403AA3C8 (HalpInitializeTimers.c)
 * Callees:
 *     HalpFindTimer @ 0x14039D5A8 (HalpFindTimer.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x1403A24C4 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpTimerPropagateQpcBiasUpdate @ 0x1403A5EBC (HalpTimerPropagateQpcBiasUpdate.c)
 *     HalpTimerMeasureFrequencies @ 0x1403AA668 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerInitialize @ 0x1403AADC4 (HalpTimerInitialize.c)
 *     HalpTimerFindBestAlwaysOnTimer @ 0x1403AAE5C (HalpTimerFindBestAlwaysOnTimer.c)
 *     HalpTimerFindIdealPerformanceCounterSource @ 0x1403AAEFC (HalpTimerFindIdealPerformanceCounterSource.c)
 *     HalpTimerFindIdealClockSource @ 0x1403AB1B4 (HalpTimerFindIdealClockSource.c)
 *     HalpTimerFindIdealWatchdog @ 0x1403AB29C (HalpTimerFindIdealWatchdog.c)
 *     HalpVpptTimerRegister @ 0x1404C0ED8 (HalpVpptTimerRegister.c)
 *     HalpTimerStopProfileInterrupt @ 0x1404C1D1C (HalpTimerStopProfileInterrupt.c)
 */

__int64 __fastcall HalpTimerSelectRoles(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  ULONG_PTR *v3; // rbp
  ULONG_PTR *v4; // rsi
  ULONG_PTR *Timer; // rdi
  __int64 IdealClockSource; // rax
  ULONG_PTR v7; // rdi
  __int64 IdealPerformanceCounterSource; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  ULONG_PTR *v11; // rax
  __int64 v12; // rdi
  __int64 BestAlwaysOnTimer; // rax
  ULONG_PTR v14; // rdi
  ULONG_PTR v15; // rcx
  __int64 v16; // rax
  ULONG_PTR v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 IdealWatchdog; // rax
  __int64 v21; // rdi
  ULONG_PTR *v23; // rcx
  int v24; // edx
  ULONG_PTR *v25; // rax
  ULONG_PTR v26; // rax
  ULONG_PTR *v27; // rax
  ULONG_PTR *v28; // rdi

  v2 = 0;
  if ( HalpTimerFrequenciesMeasured )
    goto LABEL_6;
  do
  {
    v3 = 0LL;
    v4 = 0LL;
    Timer = HalpFindTimer(1, 2, 24576, 0, 0);
    if ( Timer )
      goto LABEL_3;
    Timer = HalpFindTimer(3, 2, 24576, 0, 0);
    if ( Timer )
      goto LABEL_3;
    Timer = HalpFindTimer(6, 2, 24576, 0, 0);
    if ( Timer )
      goto LABEL_3;
    Timer = HalpFindTimer(2, 0, 0, 0, 0);
    if ( Timer )
      goto LABEL_3;
    v23 = (ULONG_PTR *)HalpRegisteredTimers;
    if ( (ULONG_PTR *)HalpRegisteredTimers == &HalpRegisteredTimers )
      goto LABEL_57;
    do
    {
      Timer = v23;
      v23 = (ULONG_PTR *)*v23;
      v24 = *((_DWORD *)Timer + 46);
      if ( (v24 & 1) == 0 )
      {
        if ( Timer[22] )
          v3 = Timer;
        if ( (Timer[28] & 2) != 0 && Timer[24] )
        {
          if ( (v24 & 8) == 0 )
            goto LABEL_58;
          if ( !v4 )
            v4 = Timer;
        }
      }
    }
    while ( v23 != &HalpRegisteredTimers );
    if ( v3 )
    {
      Timer = v3;
      goto LABEL_58;
    }
    if ( !v4 )
    {
LABEL_57:
      Timer = 0LL;
    }
    else
    {
      *((_DWORD *)v4 + 46) &= ~8u;
      Timer = v4;
    }
LABEL_58:
    if ( !Timer )
    {
      HalpTimerLastProblem = 19;
      return (unsigned int)-1073741823;
    }
LABEL_3:
    if ( (int)HalpTimerInitialize(Timer) >= 0 )
    {
      HalpTimerMeasureFrequencies((__int64)Timer);
      HalpTimerFrequenciesMeasured = 1;
    }
  }
  while ( !HalpTimerFrequenciesMeasured );
LABEL_6:
  while ( !HalpClockTimer )
  {
    IdealClockSource = HalpTimerFindIdealClockSource();
    v7 = IdealClockSource;
    if ( !IdealClockSource )
      goto LABEL_60;
    if ( (int)HalpTimerInitialize(IdealClockSource) >= 0 )
    {
      *(_DWORD *)(v7 + 184) |= 4u;
      HalpClockTimer = v7;
      break;
    }
  }
  while ( !HalpPerformanceCounter
       || (*(_DWORD *)(HalpPerformanceCounter + 184) & 4) == 0
       || HalpPerformanceCounter == HalpClockTimer )
  {
    IdealPerformanceCounterSource = HalpTimerFindIdealPerformanceCounterSource();
    v9 = IdealPerformanceCounterSource;
    if ( !IdealPerformanceCounterSource )
    {
      HalpTimerLastProblem = 21;
      return (unsigned int)-1073741823;
    }
    if ( (int)HalpTimerInitialize(IdealPerformanceCounterSource) >= 0 )
    {
      HalpPerformanceCounter = v9;
      HalpTimerPropagateQpcBiasUpdate(v9);
      *(_DWORD *)(v9 + 184) |= 4u;
      break;
    }
  }
  v10 = HalpStallCounter;
  if ( (*(_DWORD *)(HalpStallCounter + 224) & 0x2000) != 0 || HalpStallCounter == HalpClockTimer )
  {
    v10 = HalpPerformanceCounter;
    HalpStallCounter = HalpPerformanceCounter;
  }
  else
  {
    *(_DWORD *)(HalpStallCounter + 184) |= 4u;
  }
  if ( v10 != HalpOriginalStallTimer )
    *(_DWORD *)(HalpOriginalStallTimer + 184) |= 4u;
  if ( !HalpAuxiliaryCounter )
  {
    v11 = HalpFindTimer(15, 1048578, 24576, 0, 0);
    v12 = (__int64)v11;
    if ( v11 )
    {
      if ( v11[24] <= 0x3B9ACA00 && (int)HalpTimerInitialize(v11) >= 0 )
      {
        *(_DWORD *)(v12 + 184) |= 4u;
        HalpAuxiliaryCounter = v12;
      }
    }
  }
  while ( !HalpAlwaysOnTimer )
  {
    if ( (*(_DWORD *)(HalpClockTimer + 224) & 0x8000) != 0 )
      break;
    BestAlwaysOnTimer = HalpTimerFindBestAlwaysOnTimer(0LL);
    v14 = BestAlwaysOnTimer;
    if ( !BestAlwaysOnTimer )
      break;
    if ( (int)HalpTimerInitialize(BestAlwaysOnTimer) >= 0 )
    {
      *(_DWORD *)(v14 + 184) |= 4u;
      HalpAlwaysOnTimer = v14;
      break;
    }
  }
  v15 = HalpClockTimer;
  if ( (*(_DWORD *)(HalpClockTimer + 224) & 1) != 0 )
    goto LABEL_26;
  if ( (int)HalpVpptTimerRegister(HalpClockTimer, 0LL) < 0 )
    v25 = 0LL;
  else
    v25 = HalpFindTimer(12, 32, 0, 3840, 0);
  HalpClockTimer = (ULONG_PTR)v25;
  if ( !v25 )
  {
LABEL_60:
    HalpTimerLastProblem = 20;
    return (unsigned int)-1073741823;
  }
  if ( (int)HalpTimerInitialize(v25) < 0 )
  {
    v26 = HalpClockTimer;
    HalpTimerLastProblem = 20;
    if ( HalpClockTimer )
    {
      *(_DWORD *)(HalpClockTimer + 252) = 20;
      *(_QWORD *)(v26 + 264) = "minkernel\\hals\\lib\\timers\\common\\timer.c";
      *(_DWORD *)(v26 + 256) = 2;
      *(_DWORD *)(v26 + 272) = 3280;
    }
    return (unsigned int)-1073741823;
  }
  v15 = HalpClockTimer;
  *(_DWORD *)(HalpClockTimer + 184) |= 4u;
LABEL_26:
  if ( HalpAlwaysOnTimer && (*(_DWORD *)(HalpAlwaysOnTimer + 224) & 1) == 0 && (*(_DWORD *)(v15 + 224) & 1) != 0 )
  {
    LOBYTE(a2) = 1;
    if ( (int)HalpVpptTimerRegister(HalpAlwaysOnTimer, a2) < 0 )
      v27 = 0LL;
    else
      v27 = HalpFindTimer(12, 32, 0, 3840, 0);
    HalpAlwaysOnTimer = (ULONG_PTR)v27;
    if ( !v27 )
    {
      HalpTimerLastProblem = 33;
      return (unsigned int)-1073741823;
    }
    *((_DWORD *)v27 + 46) |= 4u;
  }
  while ( !HalpAlwaysOnCounter
       && ((*(_DWORD *)(HalpPerformanceCounter + 224) & 0x8000) == 0
        || (*(_DWORD *)(HalpStallCounter + 224) & 0x8000) == 0) )
  {
    LOBYTE(v15) = 1;
    v16 = HalpTimerFindBestAlwaysOnTimer(v15);
    v17 = v16;
    if ( !v16 )
      break;
    if ( (int)HalpTimerInitialize(v16) >= 0 )
    {
      *(_DWORD *)(v17 + 184) |= 4u;
      HalpAlwaysOnCounter = v17;
      break;
    }
  }
  while ( !HalpProfileTimer && (__int64 (__fastcall **)())HalpProfileInterface[0] == DefaultProfileInterface )
  {
    v28 = HalpFindTimer(0, 65, 0, 3840, 0);
    if ( !v28
      && ((unsigned int)HalpQueryMaximumRegisteredProcessorCount() != 1
       || (v28 = HalpFindTimer(0, 64, 0, 3840, 0)) == 0LL) )
    {
      HalpTimerLastProblem = 23;
      break;
    }
    if ( (int)HalpTimerInitialize(v28) >= 0 )
    {
      *((_DWORD *)v28 + 46) |= 4u;
      HalpProfileTimer = (__int64)v28;
      HalpTimerStopProfileInterrupt();
      break;
    }
  }
  if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 1) != 0 )
  {
    while ( !HalpFallbackPerformanceCounter )
    {
      v18 = HalpTimerFindIdealPerformanceCounterSource();
      v19 = v18;
      if ( !v18 )
      {
        HalpTimerLastProblem = 22;
        break;
      }
      if ( (int)HalpTimerInitialize(v18) >= 0 )
      {
        *(_DWORD *)(v19 + 184) |= 4u;
        HalpFallbackPerformanceCounter = v19;
        break;
      }
    }
  }
  if ( !HalpTimerWatchdogDisable )
  {
    IdealWatchdog = HalpTimerFindIdealWatchdog();
    v21 = IdealWatchdog;
    if ( IdealWatchdog )
    {
      if ( (int)HalpTimerInitialize(IdealWatchdog) >= 0 )
      {
        *(_DWORD *)(v21 + 184) |= 4u;
        HalpWatchdogTimer = v21;
      }
    }
  }
  return v2;
}
