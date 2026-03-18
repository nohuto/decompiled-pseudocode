/*
 * XREFs of KeCancelTimer2 @ 0x14035B660
 * Callers:
 *     ExpSetTimerObject2 @ 0x14024261C (ExpSetTimerObject2.c)
 *     ExCancelTimer @ 0x14035B3B0 (ExCancelTimer.c)
 *     ExpShutdownWorkerFactory @ 0x14035B4F8 (ExpShutdownWorkerFactory.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14037EF24 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14038A0C8 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1403A4980 (PopThermalUpdateTelemetryClientCount.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x14056304C (PopDirectedDripsStartDisengageTimer.c)
 *     EtwpCoverageFlushPending @ 0x1406EBC60 (EtwpCoverageFlushPending.c)
 *     EtwpDisableKernelTrace @ 0x140786B60 (EtwpDisableKernelTrace.c)
 *     PdcPoNetworkResiliency @ 0x1408EB200 (PdcPoNetworkResiliency.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x1408ED9B0 (PopNetWnfLowPowerEpochCallback.c)
 *     ExpPartitionDestroy @ 0x140951544 (ExpPartitionDestroy.c)
 * Callees:
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x140242A5C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x140242AAC (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiRemoveTimer2 @ 0x140243180 (KiRemoveTimer2.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KiUpdateTimer2Flags @ 0x14035B964 (KiUpdateTimer2Flags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceCancelTimer2 @ 0x14051DFC4 (KiTraceCancelTimer2.c)
 */

char __fastcall KeCancelTimer2(__int64 a1)
{
  unsigned int v1; // r14d
  char v3; // si
  char v4; // r15
  __int64 v5; // r13
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf

  v1 = 0;
  v3 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 96);
    v4 = 1;
  }
  else
  {
    v4 = 0;
    v5 = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( !KiAcquireTimer2LockUnlessDisabled(a1) )
  {
    if ( KiAcquireTimer2CollectionLockIfInserted(a1) )
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
    v3 = 1;
LABEL_8:
    KiUpdateTimer2Flags(a1, v1);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & v11[5]) == 0;
        v11[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v4 && v3 )
    KiTraceCancelTimer2(a1, KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v5 ^ KiWaitNever, KiWaitNever)));
  return v3;
}
