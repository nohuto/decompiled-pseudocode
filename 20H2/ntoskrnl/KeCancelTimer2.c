/*
 * XREFs of KeCancelTimer2 @ 0x14033C240
 * Callers:
 *     ExpSetTimerObject2 @ 0x1402E0A4C (ExpSetTimerObject2.c)
 *     ExCancelTimer @ 0x14033BF90 (ExCancelTimer.c)
 *     ExpShutdownWorkerFactory @ 0x14033C0D8 (ExpShutdownWorkerFactory.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140381644 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x14038D438 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x1403AE018 (PopThermalUpdateTelemetryClientCount.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x14056707C (PopDirectedDripsStartDisengageTimer.c)
 *     EtwpCoverageFlushPending @ 0x1406E1FC0 (EtwpCoverageFlushPending.c)
 *     EtwpDisableKernelTrace @ 0x14078DD44 (EtwpDisableKernelTrace.c)
 *     PdcPoNetworkResiliency @ 0x1408F2090 (PdcPoNetworkResiliency.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x1408F48B0 (PopNetWnfLowPowerEpochCallback.c)
 *     ExpPartitionDestroy @ 0x1409586A4 (ExpPartitionDestroy.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1402E0E8C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1402E0EDC (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiUpdateTimer2Flags @ 0x14033C544 (KiUpdateTimer2Flags.c)
 *     KiRemoveTimer2 @ 0x14033C6F0 (KiRemoveTimer2.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceCancelTimer2 @ 0x140521FE4 (KiTraceCancelTimer2.c)
 */

char __fastcall KeCancelTimer2(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned int v4; // r14d
  char v6; // si
  char v7; // r15
  __int64 v8; // r13
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf

  v4 = 0;
  v6 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 96);
    v7 = 1;
  }
  else
  {
    v7 = 0;
    v8 = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  if ( !KiAcquireTimer2LockUnlessDisabled(a1, a2, a3, (__int64)SchedulerAssist) )
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
      v4 = 4;
    }
    v6 = 1;
LABEL_8:
    KiUpdateTimer2Flags(a1, v4);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v15 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v7 && v6 )
    KiTraceCancelTimer2(a1, KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v8 ^ KiWaitNever, KiWaitNever)));
  return v6;
}
