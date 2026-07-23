/*
 * XREFs of KeAccumulateTicks @ 0x1402C8D10
 * Callers:
 *     KeClockInterruptNotify @ 0x1402C5F40 (KeClockInterruptNotify.c)
 *     PpmIdleExecuteTransition @ 0x1402C6DB0 (PpmIdleExecuteTransition.c)
 *     KiUpdateRunTime @ 0x1402CBED0 (KiUpdateRunTime.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140211DC4 (KiRequestSoftwareInterrupt.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140212038 (KiResetGlobalDpcWatchdogProfiler.c)
 *     KiCheckKeepAlive @ 0x140237860 (KiCheckKeepAlive.c)
 *     KiCheckForTimerExpiration @ 0x1402C90F0 (KiCheckForTimerExpiration.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402F1D50 (KiGetThreadEffectiveRankNonZero.c)
 *     KdCheckForDebugBreak @ 0x140384004 (KdCheckForDebugBreak.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     HvlInvokeHypervisorDebugger @ 0x1404F1A40 (HvlInvokeHypervisorDebugger.c)
 *     KiDpcWatchdogCaptureStack @ 0x140512260 (KiDpcWatchdogCaptureStack.c)
 */

__int64 __fastcall KeAccumulateTicks(struct _KPRCB *a1, int a2, unsigned int a3, unsigned __int8 a4, char a5)
{
  char v9; // r15
  __int64 result; // rax
  __int64 MaximumDpcQueueDepth; // rcx
  unsigned int v12; // esi
  _KTHREAD *CurrentThread; // rbp
  unsigned int InterruptRate; // edi
  void **DpcWatchdogProfile; // rcx
  __int64 v16; // rax
  int DpcWatchdogPeriod; // ecx
  int v19; // eax
  signed int DpcWatchdogProfileCumulativeDpcThreshold; // r9d
  int DpcWatchdogCount; // edx
  int v22; // r8d
  ULONG_PTR BugCheckParameter4; // r12
  ULONG_PTR v24; // r13
  unsigned int v25; // ecx
  unsigned int DpcTimeCount; // ecx
  unsigned int v27; // ecx
  unsigned int DpcTimeLimit; // eax
  unsigned int DpcWatchdogProfileSingleDpcThreshold; // r8d
  unsigned int v30; // edx
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rdx
  __int64 v32; // rdx
  size_t v33; // r8

  v9 = 0;
  result = KiCheckForTimerExpiration();
  a1->LastTick = a3;
  v12 = a3 - a2;
  if ( !v12 )
  {
    if ( KiForceIdleDisabled )
      return result;
    result = (unsigned int)KiForceIdleState;
    if ( KiForceIdleState != 4 )
      return result;
    goto LABEL_18;
  }
  CurrentThread = a1->CurrentThread;
  InterruptRate = 0;
  if ( a1->ClockOwner )
  {
    if ( !--KiClockPollCycle )
    {
      KiClockPollCycle = KiClockKeepAliveCycle;
      BugCheckParameter4 = (unsigned __int8)KiClockCheckSlot;
      v24 = KiProcessorBlock[(unsigned __int8)KiClockCheckSlot];
      v25 = (unsigned __int8)KiClockCheckSlot + 1;
      if ( v25 >= (unsigned int)KeNumberProcessors_0 )
        LOBYTE(v25) = 0;
      KiClockCheckSlot = v25;
      if ( KiCheckKeepAlive(*(_DWORD *)(v24 + 36)) )
      {
        if ( !*(_DWORD *)(v24 + 31712) && KeEnableWatchdogTimeout && (KiBugCheckActive & 3) == 0 )
        {
          HvlInvokeHypervisorDebugger(1LL, BugCheckParameter4);
          KeBugCheckEx(0x101u, (unsigned __int8)KiClockKeepAliveCycle, 0LL, v24, BugCheckParameter4);
        }
        *(_DWORD *)(v24 + 31712) = 0;
      }
    }
  }
  if ( a5 )
  {
    a1->UserTime += v12;
    CurrentThread->UserTime += v12;
  }
  else
  {
    a1->KernelTime += v12;
    if ( a1->NestingLevel == 2 && a1->DpcRoutineActive )
    {
      DpcTimeCount = a1->DpcTimeCount;
      a1->DpcTime += v12;
      v27 = DpcTimeCount + 1;
      DpcTimeLimit = a1->DpcTimeLimit;
      a1->DpcTimeCount = v27;
      if ( DpcTimeLimit )
      {
        DpcWatchdogProfileSingleDpcThreshold = a1->DpcWatchdogProfileSingleDpcThreshold;
        v30 = v27;
        if ( DpcWatchdogProfileSingleDpcThreshold && v27 >= DpcWatchdogProfileSingleDpcThreshold )
        {
          KiDpcWatchdogCaptureStack(a1, v27);
          v30 = a1->DpcTimeCount;
          v9 = 1;
          DpcTimeLimit = a1->DpcTimeLimit;
        }
        if ( v30 > DpcTimeLimit )
        {
          if ( KeEnableWatchdogTimeout )
          {
            __rdtsc();
            HvlInvokeHypervisorDebugger(3LL, 0LL);
            if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent )
              KeBugCheckEx(
                0x133u,
                0LL,
                a1->DpcTimeCount,
                a1->DpcTimeLimit,
                (ULONG_PTR)&KeDpcWatchdogProfileGlobalTriageBlock);
            __int2c();
          }
          a1->DpcTimeCount = 0;
          KiResetGlobalDpcWatchdogProfiler((__int64)a1);
        }
      }
    }
    else if ( a1->NestingLevel > 1u )
    {
      a1->InterruptTime += v12;
    }
    else
    {
      CurrentThread->SchedulerApc.SpareLong0 += v12;
    }
    if ( a4 < 2u )
    {
      ++a1->DpcWatchdogSequenceNumber;
      DpcWatchdogProfile = a1->DpcWatchdogProfile;
      a1->DpcWatchdogCount = 0;
      if ( DpcWatchdogProfile
        && a1->DpcWatchdogProfileCurrentEmptyCapture != DpcWatchdogProfile
        && (int)a1->DpcWatchdogProfileCumulativeDpcThreshold > 0 )
      {
        v33 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
        a1->DpcWatchdogProfileCurrentEmptyCapture = DpcWatchdogProfile;
        memset(DpcWatchdogProfile, 0, v33);
      }
      goto LABEL_12;
    }
    DpcWatchdogPeriod = a1->DpcWatchdogPeriod;
    v19 = a1->DpcWatchdogCount + 1;
    a1->DpcWatchdogCount = v19;
    if ( !DpcWatchdogPeriod )
      goto LABEL_12;
    DpcWatchdogProfileCumulativeDpcThreshold = a1->DpcWatchdogProfileCumulativeDpcThreshold;
    DpcWatchdogCount = v19;
    v22 = DpcWatchdogPeriod;
    if ( DpcWatchdogProfileCumulativeDpcThreshold && v19 >= DpcWatchdogProfileCumulativeDpcThreshold && !v9 )
    {
      KiDpcWatchdogCaptureStack(a1, (unsigned int)v19);
      DpcWatchdogCount = a1->DpcWatchdogCount;
      v22 = a1->DpcWatchdogPeriod;
    }
    if ( DpcWatchdogCount < v22 )
      goto LABEL_12;
    if ( KeEnableWatchdogTimeout )
    {
      __rdtsc();
      HvlInvokeHypervisorDebugger(2LL, 0LL);
      if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent )
        KeBugCheckEx(0x133u, 1uLL, a1->DpcWatchdogPeriod, (ULONG_PTR)&KeDpcWatchdogProfileGlobalTriageBlock, 0LL);
      __int2c();
    }
  }
  ++a1->DpcWatchdogSequenceNumber;
  a1->DpcWatchdogCount = 0;
  KiResetGlobalDpcWatchdogProfiler((__int64)a1);
LABEL_12:
  if ( CurrentThread != a1->IdleThread
    && a1->NestingLevel <= 1u
    && (CurrentThread->Priority < 16
     && CurrentThread->SchedulingGroup
     && (SchedulingGroup = CurrentThread->SchedulingGroup) != 0LL
     && (v32 = (__int64)SchedulingGroup + a1->ScbOffset) != 0
     && (unsigned int)KiGetThreadEffectiveRankNonZero((_DWORD)CurrentThread, v32, 0, 0, 0LL)
     || CurrentThread->Priority < 8) )
  {
    a1->AvailableTime += v12;
  }
  if ( v12 < 8 )
  {
    a1->InterruptRate += 15 * (a1->InterruptCount - a1->InterruptLastCount);
    InterruptRate = a1->InterruptRate;
    v16 = v12;
    do
    {
      InterruptRate >>= 4;
      --v16;
    }
    while ( v16 );
  }
  a1->InterruptRate = InterruptRate;
  MaximumDpcQueueDepth = v12;
  a1->InterruptLastCount = a1->InterruptCount;
  a1->DpcRequestRate = (a1->DpcRequestRate + a1->DpcData[0].DpcCount - a1->DpcLastCount) >> v12;
  a1->DpcLastCount = a1->DpcData[0].DpcCount;
  result = (unsigned int)a1->DpcData[0].DpcQueueDepth;
  if ( !(_DWORD)result
    || (MaximumDpcQueueDepth = (unsigned __int16)a1->DpcRequestSlot[0], (MaximumDpcQueueDepth & 3) != 0) )
  {
    if ( a1->AdjustDpcThreshold-- == 1 )
    {
      a1->AdjustDpcThreshold = KiAdjustDpcThreshold;
      result = (unsigned int)a1->MaximumDpcQueueDepth;
      if ( (unsigned int)result < KiMaximumDpcQueueDepth )
      {
        result = (unsigned int)(result + 1);
        a1->MaximumDpcQueueDepth = result;
      }
    }
  }
  else
  {
    a1->AdjustDpcThreshold = KiAdjustDpcThreshold;
    if ( (MaximumDpcQueueDepth & 0x2F) == 0 )
      KiRequestSoftwareInterrupt(a1, 2);
    MaximumDpcQueueDepth = (unsigned int)a1->MaximumDpcQueueDepth;
    result = (unsigned int)KiIdealDpcRate;
    if ( a1->DpcRequestRate < KiIdealDpcRate && (unsigned int)MaximumDpcQueueDepth > 1 )
    {
      result = (unsigned int)(MaximumDpcQueueDepth - 1);
      a1->MaximumDpcQueueDepth = result;
    }
  }
LABEL_18:
  if ( (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    result = a1->Number;
    if ( KiPollSlot == (_DWORD)result )
      return KdCheckForDebugBreak(MaximumDpcQueueDepth);
  }
  return result;
}
