/*
 * XREFs of IoWriteErrorLogEntry @ 0x14037E510
 * Callers:
 *     IopDisassociateThreadIrp @ 0x1404FB2D4 (IopDisassociateThreadIrp.c)
 *     FsRtlLogCcFlushError @ 0x140887D00 (FsRtlLogCcFlushError.c)
 *     IopLogBlockedDriverEvent @ 0x14088EAA4 (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x14089EDFC (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x1408C47A0 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x1408D3CE0 (MiBadMemoryLogger.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __stdcall IoWriteErrorLogEntry(PVOID ElEntry)
{
  char *v1; // rbx
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  bool v5; // zf
  struct _DMA_ADAPTER *v6; // rcx
  struct _DMA_ADAPTER *v7; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax

  v1 = (char *)ElEntry - 48;
  if ( IopErrorLogDisabledThisBoot )
  {
    v6 = (struct _DMA_ADAPTER *)*((_QWORD *)v1 + 3);
    if ( v6 )
      HalPutDmaAdapter(v6);
    v7 = (struct _DMA_ADAPTER *)*((_QWORD *)v1 + 4);
    if ( v7 )
      HalPutDmaAdapter(v7);
    _InterlockedExchangeAdd(&IopErrorLogAllocation, -*((unsigned __int16 *)v1 + 1));
    ExFreePoolWithTag(v1, 0);
  }
  else
  {
    *((_QWORD *)v1 + 5) = MEMORY[0xFFFFF78000000014];
    v2 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
    v3 = (_QWORD *)qword_140C45A78;
    v4 = v1 + 8;
    if ( *(__int64 **)qword_140C45A78 != &IopErrorLogListHead )
      __fastfail(3u);
    v5 = IopErrorLogSessionPending == 0;
    *v4 = &IopErrorLogListHead;
    v4[1] = v3;
    *v3 = v4;
    qword_140C45A78 = (__int64)v4;
    if ( v5 )
    {
      IopErrorLogWorkItem.Parameter = 0LL;
      IopErrorLogWorkItem.List.Flink = 0LL;
      IopErrorLogWorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopErrorLogThread;
      IopErrorLogSessionPending = 1;
      ExQueueWorkItem(&IopErrorLogWorkItem, DelayedWorkQueue);
    }
    KxReleaseSpinLock(&IopErrorLogLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v5 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v5 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
}
