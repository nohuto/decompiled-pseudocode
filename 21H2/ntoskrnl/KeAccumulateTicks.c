/*
 * XREFs of KeAccumulateTicks @ 0x1403078A0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140306100 (PpmIdleExecuteTransition.c)
 *     KiUpdateRunTime @ 0x140307660 (KiUpdateRunTime.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1402103E0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiDpcWatchdogCounterReset @ 0x1402221F4 (KiDpcWatchdogCounterReset.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140222280 (KiResetGlobalDpcWatchdogProfiler.c)
 *     KdCheckForDebugBreak @ 0x140222368 (KdCheckForDebugBreak.c)
 *     KiRequestSoftwareInterrupt @ 0x14022BA6C (KiRequestSoftwareInterrupt.c)
 *     KiCheckKeepAlive @ 0x1402F36BC (KiCheckKeepAlive.c)
 *     KiCheckForTimerExpiration @ 0x140307E90 (KiCheckForTimerExpiration.c)
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     HvlInvokeHypervisorDebugger @ 0x1405433C0 (HvlInvokeHypervisorDebugger.c)
 *     KiDpcWatchdogCaptureStack @ 0x140568930 (KiDpcWatchdogCaptureStack.c)
 *     KiDeferDpcWatchdogViolation @ 0x1405790F8 (KiDeferDpcWatchdogViolation.c)
 *     EtwTraceDpcProfilingStack @ 0x14062D8E4 (EtwTraceDpcProfilingStack.c)
 *     EtwTraceDpcProfilingStackBegin @ 0x14062D974 (EtwTraceDpcProfilingStackBegin.c)
 */

void __fastcall KeAccumulateTicks(struct _KPRCB *a1, int a2, unsigned int a3, unsigned __int8 a4, char a5)
{
  __int64 ActiveDpc; // rdx
  __int64 v10; // r8
  unsigned int v11; // esi
  __int64 CurrentThread; // r14
  unsigned int InterruptRate; // edi
  int v14; // r15d
  __int64 v15; // rax
  int v16; // edx
  unsigned int DpcCount; // r8d
  volatile int DpcQueueDepth; // eax
  signed int DpcWatchdogProfileCumulativeDpcThresholdTicks; // eax
  int DpcWatchdogCount; // r12d
  ULONG_PTR DpcWatchdogPeriodTicks; // rbp
  ULONG_PTR BugCheckParameter4; // r12
  ULONG_PTR v24; // r15
  unsigned int v25; // ecx
  unsigned int DpcWatchdogProfileSingleDpcThresholdTicks; // eax
  unsigned int DpcTimeLimitTicks; // ecx
  ULONG_PTR DpcTimeCount; // r12
  unsigned int SingleDpcSoftTimeLimitTicks; // r13d
  __int16 v30; // cx
  unsigned int v31; // ecx
  unsigned int MaximumDpcQueueDepth; // eax
  ULONG_PTR SingleDpcSoftTimeoutEventInfo; // r10
  __int64 v34; // rdx
  __int64 v35; // rdx
  unsigned int BugCheckParameter3; // [rsp+78h] [rbp+10h]

  KiCheckForTimerExpiration();
  a1->LastTick = a3;
  v11 = a3 - a2;
  if ( !v11 )
  {
    if ( KiForceIdleDisabled || KiForceIdleState != 4 )
      return;
    goto LABEL_22;
  }
  CurrentThread = (__int64)a1->CurrentThread;
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
        if ( !*(_DWORD *)(v24 + 32416) && KeEnableWatchdogTimeout && (KiBugCheckActive & 3) == 0 )
        {
          HvlInvokeHypervisorDebugger(1LL, BugCheckParameter4);
          KeBugCheckEx(0x101u, (unsigned __int8)KiClockKeepAliveCycle, 0LL, v24, BugCheckParameter4);
        }
        *(_DWORD *)(v24 + 32416) = 0;
      }
    }
  }
  if ( a5 )
  {
    a1->UserTime += v11;
    *(_DWORD *)(CurrentThread + 732) += v11;
    ++a1->DpcWatchdogSequenceNumber;
    KiDpcWatchdogCounterReset((__int64)a1, ActiveDpc, v10);
    goto LABEL_12;
  }
  a1->KernelTime += v11;
  v14 = 0;
  if ( a1->NestingLevel != 2 || !a1->DpcRoutineActive )
  {
    if ( a1->NestingLevel > 1u )
      a1->InterruptTime += v11;
    else
      a1->CurrentThread->SchedulerApc.SpareLong0 += v11;
    goto LABEL_10;
  }
  ++a1->DpcTimeCount;
  a1->DpcTime += v11;
  DpcWatchdogProfileSingleDpcThresholdTicks = a1->DpcWatchdogProfileSingleDpcThresholdTicks;
  DpcTimeLimitTicks = a1->DpcTimeLimitTicks;
  DpcTimeCount = a1->DpcTimeCount;
  SingleDpcSoftTimeLimitTicks = a1->SingleDpcSoftTimeLimitTicks;
  BugCheckParameter3 = DpcTimeLimitTicks;
  if ( DpcWatchdogProfileSingleDpcThresholdTicks )
  {
    if ( (_DWORD)DpcTimeCount == DpcWatchdogProfileSingleDpcThresholdTicks )
    {
      EtwTraceDpcProfilingStackBegin(a1, a1->DpcWatchdogSequenceNumber, DpcWatchdogProfileSingleDpcThresholdTicks, 0LL);
    }
    else if ( (unsigned int)DpcTimeCount < DpcWatchdogProfileSingleDpcThresholdTicks )
    {
      goto LABEL_47;
    }
    KiDpcWatchdogCaptureStack(a1);
    v14 = 1;
    EtwTraceDpcProfilingStack(a1->DpcWatchdogSequenceNumber, (unsigned int)DpcTimeCount);
    DpcTimeLimitTicks = BugCheckParameter3;
  }
LABEL_47:
  if ( SingleDpcSoftTimeLimitTicks )
  {
    if ( (unsigned int)DpcTimeCount >= SingleDpcSoftTimeLimitTicks )
    {
      SingleDpcSoftTimeoutEventInfo = (ULONG_PTR)a1->SingleDpcSoftTimeoutEventInfo;
      if ( SingleDpcSoftTimeoutEventInfo )
      {
        ActiveDpc = (__int64)a1->DpcData[0].ActiveDpc;
        if ( ActiveDpc )
        {
          if ( *(_DWORD *)(SingleDpcSoftTimeoutEventInfo + 72) )
          {
            if ( *(_QWORD *)(SingleDpcSoftTimeoutEventInfo + 64) == *(_QWORD *)(ActiveDpc + 24) )
              *(_DWORD *)(SingleDpcSoftTimeoutEventInfo + 72) = DpcTimeCount;
          }
          else
          {
            *(_DWORD *)(SingleDpcSoftTimeoutEventInfo + 72) = DpcTimeCount;
            *(_QWORD *)(SingleDpcSoftTimeoutEventInfo + 64) = *(_QWORD *)(ActiveDpc + 24);
            KiInsertQueueDpc(SingleDpcSoftTimeoutEventInfo, 0);
            DpcTimeLimitTicks = BugCheckParameter3;
          }
        }
      }
    }
  }
  if ( DpcTimeLimitTicks && (unsigned int)DpcTimeCount > DpcTimeLimitTicks )
  {
    if ( KeEnableWatchdogTimeout )
    {
      __rdtsc();
      HvlInvokeHypervisorDebugger(3LL, 0LL);
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && !KiForceBugcheckForDpcWatchdog )
      {
        __int2c();
        a1->DpcTimeCount = 0;
        KiResetGlobalDpcWatchdogProfiler((__int64)a1);
        goto LABEL_10;
      }
      if ( KiRecoveryCallbackCount <= 0 || (_BYTE)KiKernelCetEnabled )
        KeBugCheckEx(0x133u, 0LL, DpcTimeCount, BugCheckParameter3, (ULONG_PTR)&KeDpcWatchdogProfileGlobalTriageBlock);
      KiDeferDpcWatchdogViolation();
    }
    a1->DpcTimeCount = 0;
    KiResetGlobalDpcWatchdogProfiler((__int64)a1);
  }
LABEL_10:
  if ( a4 < 2u )
  {
LABEL_11:
    KiDpcWatchdogCounterReset((__int64)a1, ActiveDpc, v10);
    ++a1->DpcWatchdogSequenceNumber;
    goto LABEL_12;
  }
  ++a1->DpcWatchdogCount;
  DpcWatchdogProfileCumulativeDpcThresholdTicks = a1->DpcWatchdogProfileCumulativeDpcThresholdTicks;
  DpcWatchdogCount = a1->DpcWatchdogCount;
  DpcWatchdogPeriodTicks = (unsigned int)a1->DpcWatchdogPeriodTicks;
  if ( DpcWatchdogProfileCumulativeDpcThresholdTicks && !v14 )
  {
    if ( DpcWatchdogCount == DpcWatchdogProfileCumulativeDpcThresholdTicks )
    {
      EtwTraceDpcProfilingStackBegin(a1, a1->DpcWatchdogSequenceNumber, (unsigned int)DpcWatchdogCount, 1LL);
LABEL_64:
      KiDpcWatchdogCaptureStack(a1);
      EtwTraceDpcProfilingStack(a1->DpcWatchdogSequenceNumber, (unsigned int)DpcWatchdogCount);
      goto LABEL_27;
    }
    if ( DpcWatchdogCount >= DpcWatchdogProfileCumulativeDpcThresholdTicks )
      goto LABEL_64;
  }
LABEL_27:
  if ( (_DWORD)DpcWatchdogPeriodTicks && DpcWatchdogCount >= (int)DpcWatchdogPeriodTicks )
  {
    if ( KeEnableWatchdogTimeout )
    {
      __rdtsc();
      HvlInvokeHypervisorDebugger(2LL, 0LL);
      if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent || KiForceBugcheckForDpcWatchdog )
        KeBugCheckEx(0x133u, 1uLL, DpcWatchdogPeriodTicks, (ULONG_PTR)&KeDpcWatchdogProfileGlobalTriageBlock, 0LL);
      __int2c();
    }
    goto LABEL_11;
  }
LABEL_12:
  if ( (_KTHREAD *)CurrentThread != a1->IdleThread
    && a1->NestingLevel <= 1u
    && (*(char *)(CurrentThread + 195) < 16
     && *(_QWORD *)(CurrentThread + 104)
     && (v34 = *(_QWORD *)(CurrentThread + 104)) != 0
     && (v35 = a1->ScbOffset + v34) != 0
     && (unsigned int)KiGetThreadEffectiveRankNonZero(CurrentThread, v35, 0LL, 0, 0LL)
     || *(char *)(CurrentThread + 195) < 8) )
  {
    a1->AvailableTime += v11;
  }
  if ( v11 < 8 )
  {
    a1->InterruptRate += 15 * (a1->InterruptCount - a1->InterruptLastCount);
    InterruptRate = a1->InterruptRate;
    v15 = v11;
    do
    {
      InterruptRate >>= 4;
      --v15;
    }
    while ( v15 );
  }
  a1->InterruptRate = InterruptRate;
  v16 = a1->DpcRequestRate - a1->DpcLastCount;
  a1->InterruptLastCount = a1->InterruptCount;
  DpcCount = a1->DpcData[0].DpcCount;
  a1->DpcRequestRate = (DpcCount + v16) >> v11;
  DpcQueueDepth = a1->DpcData[0].DpcQueueDepth;
  a1->DpcLastCount = DpcCount;
  if ( !DpcQueueDepth || (v30 = a1->DpcRequestSlot[0], (v30 & 3) != 0) )
  {
    if ( a1->AdjustDpcThreshold-- == 1 )
    {
      a1->AdjustDpcThreshold = KiAdjustDpcThreshold;
      MaximumDpcQueueDepth = a1->MaximumDpcQueueDepth;
      if ( MaximumDpcQueueDepth < KiMaximumDpcQueueDepth )
        a1->MaximumDpcQueueDepth = MaximumDpcQueueDepth + 1;
    }
  }
  else
  {
    a1->AdjustDpcThreshold = KiAdjustDpcThreshold;
    if ( (v30 & 0xAF) == 0 )
      KiRequestSoftwareInterrupt(a1, 2);
    v31 = a1->MaximumDpcQueueDepth;
    if ( v31 > 1 && a1->DpcRequestRate < KiIdealDpcRate )
      a1->MaximumDpcQueueDepth = v31 - 1;
  }
LABEL_22:
  if ( ((_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled) && KiPollSlot == a1->Number )
    KdCheckForDebugBreak();
}
