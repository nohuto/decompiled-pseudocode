/*
 * XREFs of MiGetNextSession @ 0x1402872F8
 * Callers:
 *     ExpHpCompactSessionPools @ 0x140286B94 (ExpHpCompactSessionPools.c)
 *     MmGetNextSession @ 0x1402872E0 (MmGetNextSession.c)
 *     MiEmptyAccessLogs @ 0x1403A3580 (MiEmptyAccessLogs.c)
 *     PsQueryCpuQuotaInformation @ 0x1403D0124 (PsQueryCpuQuotaInformation.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsGetThreadServerSilo @ 0x1402AAE70 (PsGetThreadServerSilo.c)
 *     MiSelectSessionAttachProcess @ 0x1402AAEAC (MiSelectSessionAttachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2D74 (KeIsExecutingInArbitraryThreadContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

struct _DMA_ADAPTER *__fastcall MiGetNextSession(PADAPTER_OBJECT DmaAdapter, __int64 a2)
{
  __int64 ThreadServerSilo; // rbp
  struct _DMA_ADAPTER *v4; // rdi
  _DMA_OPERATIONS *DmaOperations; // rbx
  __int64 *GetDmaAdapterInfo; // rbx
  unsigned __int64 v7; // rbx
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r10
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf
  struct _DMA_ADAPTER *v14; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v19; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext(DmaAdapter, a2) )
    ThreadServerSilo = 0LL;
  else
    ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
  v4 = 0LL;
  if ( DmaAdapter )
    DmaOperations = DmaAdapter[85].DmaOperations;
  else
    DmaOperations = 0LL;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  if ( DmaOperations )
  {
    GetDmaAdapterInfo = (__int64 *)DmaOperations->GetDmaAdapterInfo;
LABEL_24:
    while ( GetDmaAdapterInfo != &qword_140C4EF40 )
    {
      v14 = (struct _DMA_ADAPTER *)MiSelectSessionAttachProcess(GetDmaAdapterInfo - 16);
      v4 = v14;
      if ( v14 )
      {
        if ( !ThreadServerSilo || GetDmaAdapterInfo[115] == ThreadServerSilo )
          break;
        HalPutDmaAdapter(v14);
        v4 = 0LL;
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
          v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v12 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( DmaAdapter )
      HalPutDmaAdapter(DmaAdapter);
    return v4;
  }
  else
  {
    GetDmaAdapterInfo = (__int64 *)qword_140C4EF40;
    if ( qword_140C4EF40 )
      goto LABEL_24;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v7 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v8 = KeGetCurrentIrql();
        if ( v8 <= 0xFu && LockHandle.OldIrql <= 0xFu && v8 >= 2u )
        {
          v9 = KeGetCurrentPrcb();
          v10 = v9->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v12 = (v11 & v10[5]) == 0;
          v10[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(v9);
        }
      }
    }
    __writecr8(v7);
    return 0LL;
  }
}
