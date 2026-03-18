/*
 * XREFs of IoAcquireRemoveLockEx @ 0x140237750
 * Callers:
 *     PopFxProcessWork @ 0x1402367FC (PopFxProcessWork.c)
 *     PopFxAddRefDevice @ 0x140237700 (PopFxAddRefDevice.c)
 *     PoFxPrepareDevice @ 0x14036AC30 (PoFxPrepareDevice.c)
 *     PopFxLockDevice @ 0x14036D3A4 (PopFxLockDevice.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x14037BB20 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PoFxPowerControl @ 0x140389340 (PoFxPowerControl.c)
 *     PopFxAllocatePowerIrp @ 0x140396510 (PopFxAllocatePowerIrp.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x140565144 (PopFxFindAndReferenceAcpiDevice.c)
 *     PopFxPlatformIdleVeto @ 0x140565F00 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x1405662B0 (PopFxProcessorIdleVeto.c)
 *     PopFxUpdatePlatformIdleState @ 0x140567C30 (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x140567D40 (PopFxUpdateProcessorIdleState.c)
 *     PopFxAcpiForwardNotification @ 0x1405782DC (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x140578414 (PopFxAcpiForwardPepWorkRequest.c)
 *     PopFxAcpiUnregisterDevice @ 0x1405786F8 (PopFxAcpiUnregisterDevice.c)
 *     ViFilterDispatchGeneric @ 0x1409E21B0 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x1409E2290 (ViFilterDispatchPnp.c)
 *     ViFilterDispatchPower @ 0x1409E2460 (ViFilterDispatchPower.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoAcquireRemoveLockEx(
        PIO_REMOVE_LOCK RemoveLock,
        PVOID Tag,
        PCSTR File,
        ULONG Line,
        ULONG RemlockSize)
{
  NTSTATUS v9; // esi
  struct _LIST_ENTRY *PoolWithTag; // rax
  struct _LIST_ENTRY *v12; // r14
  unsigned __int64 v13; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v17; // eax
  bool v18; // zf

  _InterlockedIncrement(&RemoveLock->Common.IoCount);
  v9 = 0;
  if ( RemoveLock->Common.Removed )
  {
    if ( _InterlockedExchangeAdd(&RemoveLock->Common.IoCount, 0xFFFFFFFF) == 1 )
      KeSetEvent(&RemoveLock->Common.RemoveEvent, 0, 0);
    return -1073741738;
  }
  else if ( RemlockSize == 120 )
  {
    PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          0x28uLL,
                                          (ULONG)RemoveLock[1].Common.RemoveEvent.Header.WaitListHead.Flink);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag->Flink = 0LL;
      PoolWithTag[1].Flink = 0LL;
      HIDWORD(PoolWithTag[2].Flink) = 0;
      PoolWithTag->Blink = (struct _LIST_ENTRY *)Tag;
      PoolWithTag[1].Blink = (struct _LIST_ENTRY *)File;
      LODWORD(PoolWithTag[2].Flink) = Line;
      PoolWithTag[1].Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
      v12->Flink = RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink;
      RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink = v12;
      KxReleaseSpinLock((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v18 = (v17 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v17;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v13);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead);
    }
  }
  return v9;
}
