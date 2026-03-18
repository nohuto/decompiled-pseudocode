/*
 * XREFs of KeSetTimer2 @ 0x1402426C0
 * Callers:
 *     ExpSetTimerObject2 @ 0x14024261C (ExpSetTimerObject2.c)
 *     NtSetInformationWorkerFactory @ 0x1402BF210 (NtSetInformationWorkerFactory.c)
 *     KiTriggerForegroundBoostDpc @ 0x140310B90 (KiTriggerForegroundBoostDpc.c)
 *     KiProcessPendingForegroundBoosts @ 0x140335D50 (KiProcessPendingForegroundBoosts.c)
 *     ExSetTimer @ 0x14035BB10 (ExSetTimer.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1403A4980 (PopThermalUpdateTelemetryClientCount.c)
 *     MiStoreEvictThread @ 0x1403BD300 (MiStoreEvictThread.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x14056304C (PopDirectedDripsStartDisengageTimer.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x140570F24 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopPowerButtonWorkCallback @ 0x140572DC0 (PopPowerButtonWorkCallback.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x140576788 (PopIdleArmAoAcDozeS4Timer.c)
 *     ?SmHighMemPriorityTimerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140593708 (-SmHighMemPriorityTimerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     NtCreateWorkerFactory @ 0x1406424A0 (NtCreateWorkerFactory.c)
 *     EtwpCoverageRecord @ 0x1406E12B4 (EtwpCoverageRecord.c)
 *     PopSleepstudyStartNextSession @ 0x140760E48 (PopSleepstudyStartNextSession.c)
 *     EtwpEnableKernelTrace @ 0x140786D80 (EtwpEnableKernelTrace.c)
 *     ExpWorkQueueManagerThread @ 0x1407979B0 (ExpWorkQueueManagerThread.c)
 *     PpmRegisterPerfStates @ 0x1407A4940 (PpmRegisterPerfStates.c)
 *     PopThermalWorker @ 0x1407AADD0 (PopThermalWorker.c)
 *     EtwpCoverageEnsureContext @ 0x1407B43DC (EtwpCoverageEnsureContext.c)
 *     PopPowerAggregatorSessionSwitchWorker @ 0x1408EA3D0 (PopPowerAggregatorSessionSwitchWorker.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1408EAE54 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopNetArmDsEvaluationTimer @ 0x1408ED4A4 (PopNetArmDsEvaluationTimer.c)
 *     PopNetArmRefreshTimer @ 0x1408ED500 (PopNetArmRefreshTimer.c)
 *     ExpTimeRefreshWork @ 0x14098B3D0 (ExpTimeRefreshWork.c)
 *     HalpBlkInitSystem @ 0x140A364D0 (HalpBlkInitSystem.c)
 *     ExInitializeTimeRefresh @ 0x140A537D4 (ExInitializeTimeRefresh.c)
 * Callees:
 *     KeIsForceIdleEngaged @ 0x140242A38 (KeIsForceIdleEngaged.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x140242A5C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x140242AAC (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140242AE0 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiRemoveTimer2 @ 0x140243180 (KiRemoveTimer2.c)
 *     KiShouldActivateHRTimerClock @ 0x1402438EC (KiShouldActivateHRTimerClock.c)
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     RtlGetInterruptTimePrecise @ 0x140278330 (RtlGetInterruptTimePrecise.c)
 *     PsTimerResolutionActive @ 0x1402FF9E0 (PsTimerResolutionActive.c)
 *     KiRequestTimer2Expiration @ 0x140302790 (KiRequestTimer2Expiration.c)
 *     KiSendClockInterruptToClockOwner @ 0x14030E514 (KiSendClockInterruptToClockOwner.c)
 *     RtlGetSystemTimePrecise @ 0x140355570 (RtlGetSystemTimePrecise.c)
 *     KiUpdateTimer2Collections @ 0x14039D3E4 (KiUpdateTimer2Collections.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceSetTimer2 @ 0x14051E190 (KiTraceSetTimer2.c)
 */

_BOOL8 __fastcall KeSetTimer2(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  _DWORD *v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rsi
  char v8; // r12
  __int64 CurrentIrql; // rcx
  char v10; // r13
  unsigned __int64 InterruptTimePrecise; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // rax
  bool v15; // bp
  unsigned int v16; // esi
  char v17; // al
  bool v18; // zf
  __int64 v19; // rdx
  volatile signed __int32 v20; // edx
  signed __int32 v21; // eax
  unsigned __int8 v22; // bl
  __int64 SystemTimePrecise; // rdx
  __int64 v25; // rax
  char v26; // r8
  signed __int32 v27; // r8d
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v29; // rcx
  int *v30; // rax
  int v31; // eax
  _DWORD *v32; // r8
  __int64 v33; // rcx
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // rax
  _DWORD *v36; // r9
  int v37; // edx
  char v38; // [rsp+70h] [rbp+8h] BYREF
  char v39; // [rsp+78h] [rbp+10h] BYREF
  __int64 v40; // [rsp+80h] [rbp+18h]
  __int64 v41; // [rsp+88h] [rbp+20h] BYREF

  v41 = 0LL;
  v4 = SchedulerAssist;
  v38 = 0;
  v5 = a3;
  v6 = a2;
  if ( a3 && a3 < (unsigned int)KeMinimumIncrement )
    v5 = (unsigned int)KeMinimumIncrement;
  v8 = *(_BYTE *)(a1 + 129);
  CurrentIrql = KeGetCurrentIrql();
  v40 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    CurrentIrql = (unsigned int)(unsigned __int8)CurrentIrql + 1;
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << CurrentIrql) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  v10 = 0;
  if ( v6 > 0 )
  {
    v10 = 1;
    if ( (v8 & 4) != 0 )
      SystemTimePrecise = RtlGetSystemTimePrecise(CurrentIrql, a2, a3, SchedulerAssist);
    else
      SystemTimePrecise = MEMORY[0xFFFFF78000000014];
    v25 = 0LL;
    if ( v6 > SystemTimePrecise )
      v25 = SystemTimePrecise - v6;
    v6 = v25;
  }
  if ( (v8 & 4) != 0 )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v41);
  else
    InterruptTimePrecise = MEMORY[0xFFFFF78000000008];
  v12 = InterruptTimePrecise - v6;
  if ( InterruptTimePrecise >= v6 || v12 == -1LL )
    v12 = -2LL;
  v13 = v12;
  if ( v4 && *(_BYTE *)(a1 + 130) != 21 )
  {
    v14 = *((_QWORD *)v4 + 1);
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
  v39 = 0;
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
      v17 = *(_BYTE *)(a1 + 1);
      if ( (v17 & 0xF) != 0 )
      {
        v16 = 8;
        v15 = (v17 & 4) == 0;
      }
    }
    v18 = (KiVelocityFlags & 0x2000) == 0;
    *(_QWORD *)(a1 + 72) = v12;
    *(_QWORD *)(a1 + 80) = v13;
    v19 = *(unsigned __int8 *)(a1 + 129);
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 88) = v5;
    *(_BYTE *)(a1 + 128) = v10;
    if ( v18 )
    {
      if ( (v19 & 0x10) == 0 )
      {
LABEL_48:
        *(_BYTE *)(a1 + 129) = v19 | 0x10;
        KiUpdateTimer2Collections(a1);
      }
    }
    else if ( (v19 & 0xE) == 0 )
    {
      if ( !(unsigned __int8)PsTimerResolutionActive(KeGetCurrentThread()->ApcState.Process, v19, v19 & 0x10) )
      {
        if ( v26 )
        {
          *(_BYTE *)(a1 + 129) = v19 & 0xEF;
          KiUpdateTimer2Collections(a1);
        }
        goto LABEL_19;
      }
      if ( !v26 )
        goto LABEL_48;
    }
LABEL_19:
    if ( v16 == 1 )
    {
      KxAcquireSpinLock(&KiTimer2CollectionLock);
      KiInsertTimer2WithCollectionLockHeld(a1, 1LL, &v39, &v38);
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
          v27 = v21;
          v21 = _InterlockedCompareExchange((volatile signed __int32 *)a1, (v16 << 8) | v21 & 0xFFFFF07F, v21);
        }
        while ( v27 != v21 );
      }
      if ( v16 == 1 )
        KxReleaseSpinLock(&KiTimer2CollectionLock);
    }
    if ( v38 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v29 = KiProcessorBlock[(unsigned int)KiClockTimerOwner];
      if ( (KiVelocityFlags & 2) != 0 )
      {
        v30 = *(int **)(v29 + 33976);
        if ( v30 )
        {
          if ( CurrentPrcb->SchedulerAssist )
          {
            if ( CurrentPrcb != (struct _KPRCB *)v29 && KiVpThreadSystemWorkPriority >= 8 )
            {
              v31 = *v30;
              if ( (v31 & 0x100000) != 0 || (v31 & 0x40000) != 0 && (unsigned __int8)v31 < KiVpThreadSystemWorkPriority )
              {
                v18 = HvlpVirtualProcessorsIdentityMapped == 0;
                v32 = CurrentPrcb->SchedulerAssist;
                v32[3] = 2;
                v33 = *(unsigned int *)(v29 + 36);
                if ( v18 )
                  LODWORD(v33) = (unsigned __int8)byte_140D00681[2 * v33] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v33] << 6);
                v32[2] = v33;
                __writemsr(0x400000C2u, (unsigned int)v33);
              }
            }
          }
        }
      }
    }
    if ( !(unsigned __int8)KeIsForceIdleEngaged() )
    {
      if ( v39 )
      {
        KiRequestTimer2Expiration();
      }
      else if ( (v8 & 4) != 0 && (unsigned __int8)KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], v12) )
      {
        KiSendClockInterruptToClockOwner();
      }
    }
  }
  v22 = v40;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v34 = KeGetCurrentIrql();
      if ( v34 <= 0xFu && (unsigned __int8)v40 <= 0xFu && v34 >= 2u )
      {
        v35 = KeGetCurrentPrcb();
        v36 = v35->SchedulerAssist;
        v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v40 + 1));
        v18 = (v37 & v36[5]) == 0;
        v36[5] &= v37;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v35);
      }
    }
  }
  __writecr8(v22);
  return v15;
}
