/*
 * XREFs of KeSetTimer2 @ 0x1402D0DD0
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140202E10 (NtSetInformationWorkerFactory.c)
 *     KiTriggerForegroundBoostDpc @ 0x14023EE30 (KiTriggerForegroundBoostDpc.c)
 *     ExSetTimer @ 0x14026E2B0 (ExSetTimer.c)
 *     ExpSetTimerObject2 @ 0x14026E4AC (ExpSetTimerObject2.c)
 *     KiProcessPendingForegroundBoosts @ 0x14029B220 (KiProcessPendingForegroundBoosts.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1403A8D58 (PopThermalUpdateTelemetryClientCount.c)
 *     MiStoreEvictThread @ 0x1403C1430 (MiStoreEvictThread.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x140568D8C (PopDirectedDripsStartDisengageTimer.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x140576BF4 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopPowerButtonWorkCallback @ 0x140578A90 (PopPowerButtonWorkCallback.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14057C458 (PopIdleArmAoAcDozeS4Timer.c)
 *     ?SmHighMemPriorityTimerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1405994F8 (-SmHighMemPriorityTimerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     EtwpCoverageRecord @ 0x1406151A4 (EtwpCoverageRecord.c)
 *     NtCreateWorkerFactory @ 0x1406AB120 (NtCreateWorkerFactory.c)
 *     PopSleepstudyStartNextSession @ 0x140774E98 (PopSleepstudyStartNextSession.c)
 *     EtwpEnableKernelTrace @ 0x1407983D8 (EtwpEnableKernelTrace.c)
 *     ExpWorkQueueManagerThread @ 0x1407AF9E0 (ExpWorkQueueManagerThread.c)
 *     PpmRegisterPerfStates @ 0x1407BA470 (PpmRegisterPerfStates.c)
 *     PopThermalWorker @ 0x1407C0790 (PopThermalWorker.c)
 *     EtwpCoverageEnsureContext @ 0x1407CA35C (EtwpCoverageEnsureContext.c)
 *     PopPowerAggregatorSessionSwitchWorker @ 0x1408EEBC0 (PopPowerAggregatorSessionSwitchWorker.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1408EF644 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopNetArmDsEvaluationTimer @ 0x1408F1D04 (PopNetArmDsEvaluationTimer.c)
 *     PopNetArmRefreshTimer @ 0x1408F1D60 (PopNetArmRefreshTimer.c)
 *     ExpTimeRefreshWork @ 0x140990840 (ExpTimeRefreshWork.c)
 *     HalpBlkInitSystem @ 0x140A3A550 (HalpBlkInitSystem.c)
 *     ExInitializeTimeRefresh @ 0x140A5C1EC (ExInitializeTimeRefresh.c)
 * Callees:
 *     KiSendClockInterruptToClockOwner @ 0x140210A74 (KiSendClockInterruptToClockOwner.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140210C80 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KeIsForceIdleEngaged @ 0x140211564 (KeIsForceIdleEngaged.c)
 *     KiRequestTimer2Expiration @ 0x140211C94 (KiRequestTimer2Expiration.c)
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     RtlGetSystemTimePrecise @ 0x140266EC0 (RtlGetSystemTimePrecise.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x14026E120 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x14026E14C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     PsTimerResolutionActive @ 0x1402818E4 (PsTimerResolutionActive.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     RtlGetInterruptTimePrecise @ 0x1402CF060 (RtlGetInterruptTimePrecise.c)
 *     KiRemoveTimer2 @ 0x1402EFC30 (KiRemoveTimer2.c)
 *     KiShouldActivateHRTimerClock @ 0x1402F039C (KiShouldActivateHRTimerClock.c)
 *     KiUpdateTimer2Collections @ 0x1403A0A54 (KiUpdateTimer2Collections.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceSetTimer2 @ 0x140523ED0 (KiTraceSetTimer2.c)
 */

_BOOL8 __fastcall KeSetTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // rsi
  char v8; // r12
  __int64 CurrentIrql; // rcx
  char v10; // r13
  LARGE_INTEGER InterruptTimePrecise; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // rax
  bool v15; // bp
  unsigned int v16; // esi
  __int64 v17; // rdx
  char v18; // al
  bool v19; // zf
  char v20; // dl
  volatile signed __int32 v21; // edx
  signed __int32 v22; // eax
  unsigned __int8 v23; // bl
  LARGE_INTEGER SystemTimePrecise; // rdx
  __int64 v26; // rax
  char v27; // r8
  _DWORD *SchedulerAssist; // r9
  signed __int32 v29; // r8d
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v31; // rcx
  int *v32; // rax
  int v33; // eax
  _DWORD *v34; // r8
  __int64 v35; // rcx
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // rax
  _DWORD *v38; // r9
  int v39; // edx
  bool v40; // [rsp+70h] [rbp+8h] BYREF
  char v41; // [rsp+78h] [rbp+10h] BYREF
  __int64 v42; // [rsp+80h] [rbp+18h]
  LARGE_INTEGER PerformanceCounter; // [rsp+88h] [rbp+20h] BYREF

  PerformanceCounter.QuadPart = 0LL;
  v40 = 0;
  v5 = a3;
  v6 = a2;
  if ( a3 && a3 < (unsigned int)KeMinimumIncrement )
    v5 = (unsigned int)KeMinimumIncrement;
  v8 = *(_BYTE *)(a1 + 129);
  CurrentIrql = KeGetCurrentIrql();
  v42 = CurrentIrql;
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
      SystemTimePrecise.QuadPart = MEMORY[0xFFFFF78000000014];
    v26 = 0LL;
    if ( v6 > SystemTimePrecise.QuadPart )
      v26 = SystemTimePrecise.QuadPart - v6;
    v6 = v26;
  }
  if ( (v8 & 4) != 0 )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  else
    InterruptTimePrecise.QuadPart = MEMORY[0xFFFFF78000000008];
  v12 = InterruptTimePrecise.QuadPart - v6;
  if ( InterruptTimePrecise.QuadPart >= (unsigned __int64)v6 || v12 == -1LL )
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
  v41 = 0;
  v16 = 1;
  if ( !KiAcquireTimer2LockUnlessDisabled(a1) )
  {
    if ( KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1, v17);
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
    v19 = (KiVelocityFlags & 0x2000) == 0;
    *(_QWORD *)(a1 + 72) = v12;
    *(_QWORD *)(a1 + 80) = v13;
    v20 = *(_BYTE *)(a1 + 129);
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 88) = v5;
    *(_BYTE *)(a1 + 128) = v10;
    if ( v19 )
    {
      if ( (v20 & 0x10) == 0 )
      {
LABEL_48:
        *(_BYTE *)(a1 + 129) = v20 | 0x10;
        KiUpdateTimer2Collections(a1);
      }
    }
    else if ( (v20 & 0xE) == 0 )
    {
      if ( !PsTimerResolutionActive((__int64)KeGetCurrentThread()->ApcState.Process) )
      {
        if ( v27 )
        {
          *(_BYTE *)(a1 + 129) = v20 & 0xEF;
          KiUpdateTimer2Collections(a1);
        }
        goto LABEL_19;
      }
      if ( !v27 )
        goto LABEL_48;
    }
LABEL_19:
    if ( v16 == 1 )
    {
      KxAcquireSpinLock(&KiTimer2CollectionLock);
      KiInsertTimer2WithCollectionLockHeld(a1, 1, &v41, &v40);
    }
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      KiTraceSetTimer2(a1, v15, v16);
    }
    else
    {
      v21 = *(_DWORD *)a1;
      v22 = _InterlockedCompareExchange(
              (volatile signed __int32 *)a1,
              (v16 << 8) | *(_DWORD *)a1 & 0xFFFFF07F,
              *(_DWORD *)a1);
      if ( v21 != v22 )
      {
        do
        {
          v29 = v22;
          v22 = _InterlockedCompareExchange((volatile signed __int32 *)a1, (v16 << 8) | v22 & 0xFFFFF07F, v22);
        }
        while ( v29 != v22 );
      }
      if ( v16 == 1 )
        KxReleaseSpinLock(&KiTimer2CollectionLock);
    }
    if ( v40 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v31 = KiProcessorBlock[(unsigned int)KiClockTimerOwner];
      if ( (KiVelocityFlags & 2) != 0 )
      {
        v32 = *(int **)(v31 + 33976);
        if ( v32 )
        {
          if ( CurrentPrcb->SchedulerAssist )
          {
            if ( CurrentPrcb != (struct _KPRCB *)v31 && KiVpThreadSystemWorkPriority >= 8 )
            {
              v33 = *v32;
              if ( (v33 & 0x100000) != 0 || (v33 & 0x40000) != 0 && (unsigned __int8)v33 < KiVpThreadSystemWorkPriority )
              {
                v19 = HvlpVirtualProcessorsIdentityMapped == 0;
                v34 = CurrentPrcb->SchedulerAssist;
                v34[3] = 2;
                v35 = *(unsigned int *)(v31 + 36);
                if ( v19 )
                  LODWORD(v35) = (unsigned __int8)byte_140D006C1[2 * v35] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v35] << 6);
                v34[2] = v35;
                __writemsr(0x400000C2u, (unsigned int)v35);
              }
            }
          }
        }
      }
    }
    if ( !KeIsForceIdleEngaged() )
    {
      if ( v41 )
      {
        KiRequestTimer2Expiration();
      }
      else if ( (v8 & 4) != 0 && (unsigned __int8)KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], v12) )
      {
        KiSendClockInterruptToClockOwner();
      }
    }
  }
  v23 = v42;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v36 = KeGetCurrentIrql();
      if ( v36 <= 0xFu && (unsigned __int8)v42 <= 0xFu && v36 >= 2u )
      {
        v37 = KeGetCurrentPrcb();
        v38 = v37->SchedulerAssist;
        v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v42 + 1));
        v19 = (v39 & v38[5]) == 0;
        v38[5] &= v39;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v37);
      }
    }
  }
  __writecr8(v23);
  return v15;
}
