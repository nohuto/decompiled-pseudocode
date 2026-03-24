/*
 * XREFs of KeSetTimer2 @ 0x14022C550
 * Callers:
 *     ExSetTimer @ 0x140280070 (ExSetTimer.c)
 *     ExpSetTimerObject2 @ 0x14028026C (ExpSetTimerObject2.c)
 *     NtSetInformationWorkerFactory @ 0x140285C70 (NtSetInformationWorkerFactory.c)
 *     KiTriggerForegroundBoostDpc @ 0x1402C09C0 (KiTriggerForegroundBoostDpc.c)
 *     KiProcessPendingForegroundBoosts @ 0x1402E9ED0 (KiProcessPendingForegroundBoosts.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1403A7FC8 (PopThermalUpdateTelemetryClientCount.c)
 *     MiStoreEvictThread @ 0x1403C1000 (MiStoreEvictThread.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x140568B4C (PopDirectedDripsStartDisengageTimer.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1405769B4 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopPowerButtonWorkCallback @ 0x140578850 (PopPowerButtonWorkCallback.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14057C218 (PopIdleArmAoAcDozeS4Timer.c)
 *     ?SmHighMemPriorityTimerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1405992C8 (-SmHighMemPriorityTimerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     EtwpCoverageRecord @ 0x1406B5CE4 (EtwpCoverageRecord.c)
 *     NtCreateWorkerFactory @ 0x1406D3E40 (NtCreateWorkerFactory.c)
 *     PopSleepstudyStartNextSession @ 0x140774CD8 (PopSleepstudyStartNextSession.c)
 *     EtwpEnableKernelTrace @ 0x1407981D8 (EtwpEnableKernelTrace.c)
 *     ExpWorkQueueManagerThread @ 0x1407AF840 (ExpWorkQueueManagerThread.c)
 *     PpmRegisterPerfStates @ 0x1407B9CE0 (PpmRegisterPerfStates.c)
 *     PopThermalWorker @ 0x1407C0270 (PopThermalWorker.c)
 *     EtwpCoverageEnsureContext @ 0x1407CA03C (EtwpCoverageEnsureContext.c)
 *     PopPowerAggregatorSessionSwitchWorker @ 0x1408EEA60 (PopPowerAggregatorSessionSwitchWorker.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1408EF4E4 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopNetArmDsEvaluationTimer @ 0x1408F1BA4 (PopNetArmDsEvaluationTimer.c)
 *     PopNetArmRefreshTimer @ 0x1408F1C00 (PopNetArmRefreshTimer.c)
 *     ExpTimeRefreshWork @ 0x14098FD60 (ExpTimeRefreshWork.c)
 *     HalpBlkInitSystem @ 0x140A39550 (HalpBlkInitSystem.c)
 *     ExInitializeTimeRefresh @ 0x140A5B1EC (ExInitializeTimeRefresh.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402295B0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     RtlGetInterruptTimePrecise @ 0x14022A7B0 (RtlGetInterruptTimePrecise.c)
 *     KiRemoveTimer2 @ 0x14024B3E0 (KiRemoveTimer2.c)
 *     KiShouldActivateHRTimerClock @ 0x14024BB4C (KiShouldActivateHRTimerClock.c)
 *     PsTimerResolutionActive @ 0x140260174 (PsTimerResolutionActive.c)
 *     RtlGetSystemTimePrecise @ 0x140278F20 (RtlGetSystemTimePrecise.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x14027FEE0 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x14027FF0C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiSendClockInterruptToClockOwner @ 0x140292B04 (KiSendClockInterruptToClockOwner.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140292D10 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KeIsForceIdleEngaged @ 0x1402935F4 (KeIsForceIdleEngaged.c)
 *     KiRequestTimer2Expiration @ 0x140293D24 (KiRequestTimer2Expiration.c)
 *     KiUpdateTimer2Collections @ 0x1403A0904 (KiUpdateTimer2Collections.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceSetTimer2 @ 0x140523C90 (KiTraceSetTimer2.c)
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
  _DWORD *SchedulerAssist; // r9
  signed __int32 v28; // r8d
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v30; // rcx
  int *v31; // rax
  int v32; // eax
  _DWORD *v33; // r8
  __int64 v34; // rcx
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // rax
  _DWORD *v37; // r9
  int v38; // edx
  char v39; // [rsp+70h] [rbp+8h] BYREF
  char v40; // [rsp+78h] [rbp+10h] BYREF
  __int64 v41; // [rsp+80h] [rbp+18h]
  LARGE_INTEGER v42; // [rsp+88h] [rbp+20h] BYREF

  v42.QuadPart = 0LL;
  v39 = 0;
  v5 = a3;
  v6 = a2;
  if ( a3 && a3 < (unsigned int)KeMinimumIncrement )
    v5 = (unsigned int)KeMinimumIncrement;
  v8 = *(_BYTE *)(a1 + 129);
  CurrentIrql = KeGetCurrentIrql();
  v41 = CurrentIrql;
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
    v25 = 0LL;
    if ( v6 > SystemTimePrecise )
      v25 = SystemTimePrecise - v6;
    v6 = v25;
  }
  if ( (v8 & 4) != 0 )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v42);
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
  v40 = 0;
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
      KiInsertTimer2WithCollectionLockHeld(a1, 1LL, &v40, &v39);
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
    if ( v39 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v30 = KiProcessorBlock[(unsigned int)KiClockTimerOwner];
      if ( (KiVelocityFlags & 2) != 0 )
      {
        v31 = *(int **)(v30 + 33976);
        if ( v31 )
        {
          if ( CurrentPrcb->SchedulerAssist )
          {
            if ( CurrentPrcb != (struct _KPRCB *)v30 && KiVpThreadSystemWorkPriority >= 8 )
            {
              v32 = *v31;
              if ( (v32 & 0x100000) != 0 || (v32 & 0x40000) != 0 && (unsigned __int8)v32 < KiVpThreadSystemWorkPriority )
              {
                v18 = HvlpVirtualProcessorsIdentityMapped == 0;
                v33 = CurrentPrcb->SchedulerAssist;
                v33[3] = 2;
                v34 = *(unsigned int *)(v30 + 36);
                if ( v18 )
                  LODWORD(v34) = (unsigned __int8)byte_140D006C1[2 * v34] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v34] << 6);
                v33[2] = v34;
                __writemsr(0x400000C2u, (unsigned int)v34);
              }
            }
          }
        }
      }
    }
    if ( !(unsigned __int8)KeIsForceIdleEngaged() )
    {
      if ( v40 )
      {
        KiRequestTimer2Expiration();
      }
      else if ( (v8 & 4) != 0 && (unsigned __int8)KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], v12) )
      {
        KiSendClockInterruptToClockOwner();
      }
    }
  }
  v22 = v41;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v35 = KeGetCurrentIrql();
      if ( v35 <= 0xFu && (unsigned __int8)v41 <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = v36->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v41 + 1));
        v18 = (v38 & v37[5]) == 0;
        v37[5] &= v38;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v36);
      }
    }
  }
  __writecr8(v22);
  return v15;
}
