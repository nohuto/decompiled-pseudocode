/*
 * XREFs of MiGetNextSession @ 0x14035D938
 * Callers:
 *     ExpHpCompactSessionPools @ 0x14035D7BC (ExpHpCompactSessionPools.c)
 *     MmGetNextSession @ 0x14035D920 (MmGetNextSession.c)
 *     MiEmptyAccessLogs @ 0x14039FF10 (MiEmptyAccessLogs.c)
 *     PsQueryCpuQuotaInformation @ 0x1403CBB94 (PsQueryCpuQuotaInformation.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x14022BC80 (PsGetThreadServerSilo.c)
 *     MiSelectSessionAttachProcess @ 0x14022BCBC (MiSelectSessionAttachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

struct _DMA_ADAPTER *__fastcall MiGetNextSession(PADAPTER_OBJECT DmaAdapter)
{
  struct _DMA_ADAPTER *v2; // rdi
  __int64 ThreadServerSilo; // r14
  _DMA_OPERATIONS *DmaOperations; // rbx
  __int64 *GetDmaAdapterInfo; // rbx
  struct _DMA_ADAPTER *v6; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v9; // rbx
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v18; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  if ( DmaAdapter )
    DmaOperations = DmaAdapter[85].DmaOperations;
  else
    DmaOperations = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_140C4ED80, &LockHandle);
  if ( DmaOperations )
  {
    GetDmaAdapterInfo = (__int64 *)DmaOperations->GetDmaAdapterInfo;
    goto LABEL_5;
  }
  GetDmaAdapterInfo = (__int64 *)qword_140C4EE40;
  if ( qword_140C4EE40 )
  {
LABEL_5:
    while ( GetDmaAdapterInfo != &qword_140C4EE40 )
    {
      v6 = (struct _DMA_ADAPTER *)MiSelectSessionAttachProcess((__int64)(GetDmaAdapterInfo - 16));
      v2 = v6;
      if ( v6 )
      {
        if ( !ThreadServerSilo || GetDmaAdapterInfo[115] == ThreadServerSilo )
          break;
        HalPutDmaAdapter(v6);
        v2 = 0LL;
      }
      GetDmaAdapterInfo = (__int64 *)*GetDmaAdapterInfo;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v14 = (v18 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v18;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( DmaAdapter )
      HalPutDmaAdapter(DmaAdapter);
    return v2;
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v9 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v10 = KeGetCurrentIrql();
        if ( v10 <= 0xFu && LockHandle.OldIrql <= 0xFu && v10 >= 2u )
        {
          v11 = KeGetCurrentPrcb();
          v12 = v11->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v14 = (v13 & v12[5]) == 0;
          v12[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(v11);
        }
      }
    }
    __writecr8(v9);
    return 0LL;
  }
}
