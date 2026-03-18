/*
 * XREFs of AlpcpSignalAndWait @ 0x140259F40
 * Callers:
 *     AlpcpReceiveSynchronousReply @ 0x14060CC70 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x1406C861C (AlpcpCompleteDeferSignalRequestAndWait.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     IoSetIoCompletionEx2 @ 0x140246460 (IoSetIoCompletionEx2.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphoreEx @ 0x140330D70 (KeReleaseSemaphoreEx.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     AlpcpLogUnwait @ 0x1408BF520 (AlpcpLogUnwait.c)
 */

__int64 __fastcall AlpcpSignalAndWait(
        __int64 a1,
        void *a2,
        KWAIT_REASON a3,
        KPROCESSOR_MODE a4,
        PLARGE_INTEGER Timeout,
        char a6)
{
  __int64 v7; // rsi
  BOOLEAN v9; // bp
  __int64 v10; // rdi
  char v11; // r15
  unsigned int v12; // eax
  _QWORD *v13; // rcx
  __int64 v14; // r14
  unsigned __int64 OldIrql; // rdi
  unsigned int v16; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v18; // edi
  struct _DMA_ADAPTER *v19; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf
  __int64 v26; // rcx
  int v27; // eax
  unsigned __int64 v28; // rcx
  __int64 v29; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(a1 + 32);
  v9 = (*(_DWORD *)(a1 + 48) & 0x200000) != 0;
  if ( v7 )
  {
    if ( *(_BYTE *)(a1 + 58) )
    {
      v10 = *(_QWORD *)(v7 + 48);
      v11 = *(_BYTE *)(a1 + 59);
      memset(&LockHandle, 0, sizeof(LockHandle));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v10, &LockHandle);
      v12 = *(_DWORD *)(v10 + 12);
      if ( v12 >= *(_DWORD *)(v10 + 8) )
      {
        v14 = 0LL;
        if ( v11 )
          ++*(_DWORD *)(v10 + 20);
        else
          ++*(_DWORD *)(v10 + 16);
      }
      else
      {
        v13 = *(_QWORD **)(v10 + 32);
        if ( v13 )
        {
          *(_QWORD *)(v10 + 32) = *v13;
          v12 = *(_DWORD *)(v10 + 12);
        }
        v14 = v13[1];
        *(_DWORD *)(v10 + 12) = v12 + 1;
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
            v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v25 = (v24 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v24;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 352), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v7 + 352);
      KeAbPostRelease(v7 + 352);
      if ( v14 )
        IoSetIoCompletionEx2(*(_QWORD *)(v7 + 32), *(_QWORD *)(v7 + 40), -(__int64)(v11 != 0), 0LL, 0LL, 0, v14, 1u);
    }
    else
    {
      KeReleaseSemaphoreEx(*(_QWORD *)(v7 + 248), 1, 1, a4, 1);
    }
  }
  else
  {
    v26 = *(_QWORD *)(a1 + 24);
    if ( v26 )
    {
      v27 = 5;
      if ( a6 )
        v27 = 1;
      KeReleaseSemaphoreEx(v26 + 1160, 1, 1, a4, v27);
    }
    else
    {
      v28 = *(_QWORD *)(a1 + 40);
      if ( (v28 & 1) != 0 )
      {
        if ( v28 >= 4 )
        {
          KeSetEvent((PRKEVENT)(v28 & 0xFFFFFFFFFFFFFFFCuLL), 0, 1u);
          v29 = *(_QWORD *)(a1 + 40);
          if ( (v29 & 2) != 0 )
            HalPutDmaAdapter((PADAPTER_OBJECT)(v29 & 0xFFFFFFFFFFFFFFFCuLL));
        }
        *(_QWORD *)(a1 + 40) = 0LL;
      }
    }
  }
  KeLeaveCriticalRegion();
  v16 = KeWaitForSingleObject(a2, a3, a4, v9, Timeout);
  CurrentThread = KeGetCurrentThread();
  v18 = v16;
  --CurrentThread->KernelApcDisable;
  if ( AlpcpLogEnabled )
    AlpcpLogUnwait(v16);
  v19 = *(struct _DMA_ADAPTER **)(a1 + 32);
  if ( v19 )
    HalPutDmaAdapter(v19);
  return v18;
}
