/*
 * XREFs of KeSetTimer2 @ 0x140353C40
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x1402D4530 (NtSetInformationWorkerFactory.c)
 *     ExSetTimer @ 0x1402D5750 (ExSetTimer.c)
 *     ExpSetTimerObject2 @ 0x1402D594C (ExpSetTimerObject2.c)
 *     KiProcessPendingForegroundBoosts @ 0x14039EE50 (KiProcessPendingForegroundBoosts.c)
 *     KiTriggerForegroundBoostDpc @ 0x14039FE50 (KiTriggerForegroundBoostDpc.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1403C0F80 (PopThermalUpdateTelemetryClientCount.c)
 *     MiStoreEvictThread @ 0x1403CDBF0 (MiStoreEvictThread.c)
 *     KiInitializeIdealProcessorRebalancer @ 0x1403DDE4C (KiInitializeIdealProcessorRebalancer.c)
 *     ?SmHighMemPriorityTimerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14045F3D4 (-SmHighMemPriorityTimerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x1405C9E88 (PopDirectedDripsStartDisengageTimer.c)
 *     PopThermalEventTransitionDisableDeepSleep @ 0x1405D04CC (PopThermalEventTransitionDisableDeepSleep.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1405D6D4C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopPowerButtonWorkCallback @ 0x1405D89F0 (PopPowerButtonWorkCallback.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1405DC298 (PopIdleArmAoAcDozeS4Timer.c)
 *     EtwpCoverageRecord @ 0x1406D45B4 (EtwpCoverageRecord.c)
 *     EtwpEnableKernelTrace @ 0x1406D5424 (EtwpEnableKernelTrace.c)
 *     NtCreateWorkerFactory @ 0x1407D5050 (NtCreateWorkerFactory.c)
 *     PopPowerRequestHandleRequestUpdate @ 0x1407EFDC8 (PopPowerRequestHandleRequestUpdate.c)
 *     PopSleepstudyStartNextSession @ 0x140809838 (PopSleepstudyStartNextSession.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x14081BF60 (SshpSessionManagerFlushControlEventBuffer.c)
 *     ExpWorkQueueManagerThread @ 0x14083ECE0 (ExpWorkQueueManagerThread.c)
 *     PpmRegisterPerfStates @ 0x140848C18 (PpmRegisterPerfStates.c)
 *     PopThermalWorker @ 0x140850980 (PopThermalWorker.c)
 *     EtwpCoverageEnsureContext @ 0x14085A124 (EtwpCoverageEnsureContext.c)
 *     PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x14086318C (PopPowerRequestSetExecutionRequiredTimeoutTimer.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x140989CF0 (PopPowerRequestDebounceTimerWorker.c)
 *     PopPowerAggregatorSessionSwitchWorker @ 0x140995E60 (PopPowerAggregatorSessionSwitchWorker.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1409967E4 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopNetArmDsEvaluationTimer @ 0x140998474 (PopNetArmDsEvaluationTimer.c)
 *     PopNetArmRefreshTimer @ 0x1409984D0 (PopNetArmRefreshTimer.c)
 *     ExpTimeRefreshWork @ 0x140A531E0 (ExpTimeRefreshWork.c)
 *     HalpBlkInitSystem @ 0x140AF8974 (HalpBlkInitSystem.c)
 *     ExInitializeTimeRefresh @ 0x140B0E000 (ExInitializeTimeRefresh.c)
 *     KiInitializeDpcRuntimeHistoryHashTables @ 0x140B24034 (KiInitializeDpcRuntimeHistoryHashTables.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiRequestTimer2Expiration @ 0x14022B980 (KiRequestTimer2Expiration.c)
 *     RtlGetSystemTimePrecise @ 0x14022DB00 (RtlGetSystemTimePrecise.c)
 *     KiSendClockInterruptToClockOwner @ 0x14022F244 (KiSendClockInterruptToClockOwner.c)
 *     KiRemoveTimer2 @ 0x1402F2AD0 (KiRemoveTimer2.c)
 *     KiShouldActivateHRTimerClock @ 0x1402F3248 (KiShouldActivateHRTimerClock.c)
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1403457BC (KiHvEnlightenedGuestPriorityKick.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140351500 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KeIsForceIdleEngaged @ 0x1403542B8 (KeIsForceIdleEngaged.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1403542DC (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x14035432C (KiAcquireTimer2LockUnlessDisabled.c)
 *     PsTimerResolutionActive @ 0x140357CE4 (PsTimerResolutionActive.c)
 *     KiUpdateTimer2Collections @ 0x14039ECA8 (KiUpdateTimer2Collections.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceSetTimer2 @ 0x14057AC2C (KiTraceSetTimer2.c)
 */

_BOOL8 __fastcall KeSetTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // rsi
  char v8; // r12
  __int64 CurrentIrql; // rcx
  char v10; // r13
  unsigned __int64 InterruptTimePrecise; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  bool v15; // r14
  unsigned int v16; // ebp
  __int64 v17; // r8
  char v18; // al
  __int64 v19; // rdx
  volatile signed __int32 v20; // edx
  signed __int32 v21; // eax
  unsigned __int8 v22; // bl
  _DWORD *SchedulerAssist; // r9
  char v25; // dl
  __int64 SystemTimePrecise; // rdx
  __int64 v27; // rax
  signed __int32 v28; // r8d
  unsigned __int8 v29; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *v31; // r9
  int v32; // edx
  bool v33; // zf
  bool v34; // [rsp+70h] [rbp+8h] BYREF
  char v35; // [rsp+78h] [rbp+10h] BYREF
  __int64 v36; // [rsp+80h] [rbp+18h]
  LARGE_INTEGER v37; // [rsp+88h] [rbp+20h] BYREF

  v37.QuadPart = 0LL;
  v5 = a3;
  v6 = a2;
  if ( a3 && a3 < (unsigned int)KeMinimumIncrement )
    v5 = (unsigned int)KeMinimumIncrement;
  v8 = *(_BYTE *)(a1 + 129);
  CurrentIrql = KeGetCurrentIrql();
  v36 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v10 = 0;
  if ( a2 > 0 )
  {
    v10 = 1;
    if ( (v8 & 4) != 0 )
      SystemTimePrecise = RtlGetSystemTimePrecise();
    else
      SystemTimePrecise = MEMORY[0xFFFFF78000000014];
    v27 = 0LL;
    if ( v6 > SystemTimePrecise )
      v27 = SystemTimePrecise - v6;
    v6 = v27;
  }
  if ( (v8 & 4) != 0 )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v37);
  else
    InterruptTimePrecise = MEMORY[0xFFFFF78000000008];
  v12 = InterruptTimePrecise - v6;
  if ( InterruptTimePrecise >= v6 || v12 == -1LL )
    v12 = -2LL;
  v13 = v12;
  if ( a4 && *(_BYTE *)(a1 + 130) != 21 )
  {
    v14 = *(_QWORD *)(a4 + 8);
    if ( v14 == -1 )
    {
      v13 = -1LL;
    }
    else
    {
      v13 = v14 + v12;
      if ( v14 + v12 < v12 || v13 == -1 )
        v13 = -2LL;
    }
  }
  v15 = 0;
  v35 = 0;
  v16 = 1;
  if ( !(unsigned __int8)KiAcquireTimer2LockUnlessDisabled(a1) )
  {
    if ( (unsigned __int8)KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1);
      KxReleaseSpinLock(&KiTimer2CollectionLock);
      v15 = 1;
    }
    else
    {
      v18 = *(_BYTE *)(a1 + 1);
      if ( (v18 & 0xF) != 0 )
      {
        v16 = 8;
        v15 = (v18 & 4) == 0;
      }
    }
    *(_QWORD *)(a1 + 72) = v12;
    *(_QWORD *)(a1 + 80) = v13;
    v19 = *(unsigned __int8 *)(a1 + 129);
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 88) = v5;
    *(_BYTE *)(a1 + 128) = v10;
    if ( KiGlobalTimerResolutionRequests )
    {
      if ( (v19 & 0x10) != 0 )
        goto LABEL_19;
    }
    else
    {
      if ( (v19 & 0xE) != 0 )
      {
LABEL_19:
        v34 = 0;
        if ( v16 == 1 )
        {
          KxAcquireSpinLock(&KiTimer2CollectionLock);
          KiInsertTimer2WithCollectionLockHeld(a1, 1, &v35, &v34);
        }
        if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
        {
          KiTraceSetTimer2(a1, v15, v16);
        }
        else
        {
          v20 = *(_DWORD *)a1;
          v21 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)a1,
                  (v16 << 8) | *(_DWORD *)a1 & 0xFFFFF07F,
                  *(_DWORD *)a1);
          if ( v20 != v21 )
          {
            do
            {
              v28 = v21;
              v21 = _InterlockedCompareExchange((volatile signed __int32 *)a1, (v16 << 8) | v21 & 0xFFFFF07F, v21);
            }
            while ( v28 != v21 );
          }
          if ( v16 == 1 )
            KxReleaseSpinLock(&KiTimer2CollectionLock);
        }
        if ( v34 )
          KiHvEnlightenedGuestPriorityKick(
            (__int64)KeGetCurrentPrcb(),
            KiProcessorBlock[(unsigned int)KiClockTimerOwner],
            KiVpThreadSystemWorkPriority);
        if ( !(unsigned __int8)KeIsForceIdleEngaged() )
        {
          if ( v35 )
          {
            KiRequestTimer2Expiration();
          }
          else if ( (v8 & 4) != 0 && KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], v12) )
          {
            KiSendClockInterruptToClockOwner();
          }
        }
        goto LABEL_30;
      }
      if ( !(unsigned __int8)PsTimerResolutionActive(KeGetCurrentThread()->ApcState.Process, v19, v17) )
      {
        if ( (v19 & 0x10) == 0 )
          goto LABEL_19;
        v25 = v19 & 0xEF;
        goto LABEL_38;
      }
      if ( (v19 & 0x10) != 0 )
        goto LABEL_19;
    }
    v25 = v19 | 0x10;
LABEL_38:
    *(_BYTE *)(a1 + 129) = v25;
    KiUpdateTimer2Collections(a1);
    goto LABEL_19;
  }
LABEL_30:
  v22 = v36;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v29 = KeGetCurrentIrql();
      if ( v29 <= 0xFu && (unsigned __int8)v36 <= 0xFu && v29 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v31 = CurrentPrcb->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v36 + 1));
        v33 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v33 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v22);
  return v15;
}
