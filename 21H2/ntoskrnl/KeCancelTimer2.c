/*
 * XREFs of KeCancelTimer2 @ 0x1402D3FB0
 * Callers:
 *     ExCancelTimer @ 0x1402D3E10 (ExCancelTimer.c)
 *     ExpShutdownWorkerFactory @ 0x1402D3E44 (ExpShutdownWorkerFactory.c)
 *     ExpSetTimerObject2 @ 0x1402D594C (ExpSetTimerObject2.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140369100 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopThermalEventTransitionEnableDeepSleep @ 0x14038B744 (PopThermalEventTransitionEnableDeepSleep.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140399104 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1403C0F80 (PopThermalUpdateTelemetryClientCount.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x1405C9E88 (PopDirectedDripsStartDisengageTimer.c)
 *     EtwpDisableKernelTrace @ 0x1406D56D0 (EtwpDisableKernelTrace.c)
 *     EtwpCoverageFlushPending @ 0x1406E7E90 (EtwpCoverageFlushPending.c)
 *     PopUpdatePdcSystemIdleState @ 0x140752ECC (PopUpdatePdcSystemIdleState.c)
 *     SshpAlpcOpenTraceSessionUnsafe @ 0x14081B21C (SshpAlpcOpenTraceSessionUnsafe.c)
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x1408630F0 (PopPowerRequestExecutionRequiredSettingCallback.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x140989CF0 (PopPowerRequestDebounceTimerWorker.c)
 *     PdcPoNetworkResiliency @ 0x140996B90 (PdcPoNetworkResiliency.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140998940 (PopNetWnfLowPowerEpochCallback.c)
 *     ExpPartitionDestroy @ 0x140A01F78 (ExpPartitionDestroy.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiUpdateTimer2Flags @ 0x1402D4358 (KiUpdateTimer2Flags.c)
 *     KiRemoveTimer2 @ 0x1402F2AD0 (KiRemoveTimer2.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1403542DC (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x14035432C (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceCancelTimer2 @ 0x14057AA60 (KiTraceCancelTimer2.c)
 */

char __fastcall KeCancelTimer2(__int64 a1)
{
  unsigned int v1; // r14d
  char v3; // si
  unsigned int v4; // ebp
  char v5; // r15
  __int64 v6; // r13
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf

  v1 = 0;
  v3 = 0;
  v4 = 2;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 96);
    v5 = 1;
  }
  else
  {
    v5 = 0;
    v6 = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( !(unsigned __int8)KiAcquireTimer2LockUnlessDisabled(a1) )
  {
    if ( (unsigned __int8)KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1);
      KxReleaseSpinLock(&KiTimer2CollectionLock);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 1) & 0xA) == 0 )
        goto LABEL_8;
      v1 = 4;
    }
    v4 = 0;
    v3 = 1;
LABEL_8:
    KiUpdateTimer2Flags(a1, v1, v4);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v10 = KeGetCurrentIrql();
      if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v5 && v3 )
    KiTraceCancelTimer2(a1, KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v6 ^ KiWaitNever, KiWaitNever)));
  return v3;
}
