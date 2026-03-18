/*
 * XREFs of KeCancelTimer2 @ 0x1402754B0
 * Callers:
 *     ExCancelTimer @ 0x140275200 (ExCancelTimer.c)
 *     ExpShutdownWorkerFactory @ 0x140275348 (ExpShutdownWorkerFactory.c)
 *     ExpSetTimerObject2 @ 0x14027ED1C (ExpSetTimerObject2.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14037F914 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14038B138 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1403ABA48 (PopThermalUpdateTelemetryClientCount.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x14056369C (PopDirectedDripsStartDisengageTimer.c)
 *     EtwpCoverageFlushPending @ 0x14070F780 (EtwpCoverageFlushPending.c)
 *     EtwpDisableKernelTrace @ 0x1407807AC (EtwpDisableKernelTrace.c)
 *     PdcPoNetworkResiliency @ 0x1408EC480 (PdcPoNetworkResiliency.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x1408EECA0 (PopNetWnfLowPowerEpochCallback.c)
 *     ExpPartitionDestroy @ 0x1409528E4 (ExpPartitionDestroy.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KiUpdateTimer2Flags @ 0x1402757B4 (KiUpdateTimer2Flags.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x14027F15C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x14027F1AC (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiRemoveTimer2 @ 0x14027F880 (KiRemoveTimer2.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceCancelTimer2 @ 0x14051E614 (KiTraceCancelTimer2.c)
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
