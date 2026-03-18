/*
 * XREFs of MiReleaseSystemCacheView @ 0x1402864A0
 * Callers:
 *     MiWorkingSetManager @ 0x140267320 (MiWorkingSetManager.c)
 *     MiObtainSystemCacheView @ 0x140286210 (MiObtainSystemCacheView.c)
 *     MmUnmapViewInSystemCache @ 0x140335870 (MmUnmapViewInSystemCache.c)
 *     MmFreeSystemCacheReserveView @ 0x14096CA00 (MmFreeSystemCacheReserveView.c)
 * Callees:
 *     MiReturnSystemCacheRegionsToKva @ 0x1402426F4 (MiReturnSystemCacheRegionsToKva.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiRebalanceSystemCacheFreedViews @ 0x140286630 (MiRebalanceSystemCacheFreedViews.c)
 *     MiGetSystemCacheRegionsToFree @ 0x140287B4C (MiGetSystemCacheRegionsToFree.c)
 *     MiFreeSystemCacheView @ 0x140287BAC (MiFreeSystemCacheView.c)
 *     KxAcquireQueuedSpinLock @ 0x1403119F0 (KxAcquireQueuedSpinLock.c)
 *     MiGetSystemCacheReverseMap @ 0x1403295C0 (MiGetSystemCacheReverseMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiReleaseSystemCacheView(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 SystemCacheReverseMap; // rdi
  unsigned __int8 CurrentIrql; // r11
  unsigned int v5; // esi
  unsigned __int64 OldIrql; // rdi
  _DWORD *SchedulerAssist; // r10
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf
  signed __int32 v13[8]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD *v14[2]; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 )
  {
    SystemCacheReverseMap = MiGetSystemCacheReverseMap(a2, a2);
    v2 = *(_QWORD *)(qword_140C51F48 + 8LL * ((*(_DWORD *)(SystemCacheReverseMap + 32) >> 6) & 0x3FF));
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 16732) )
      return;
    SystemCacheReverseMap = 0LL;
  }
  v14[1] = v14;
  v14[0] = v14;
  LockHandle.LockQueue.Lock = &qword_140C51C30;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.OldIrql = CurrentIrql;
  KxAcquireQueuedSpinLock(&LockHandle);
  _InterlockedOr(v13, 0);
  v5 = KiTbFlushTimeStamp;
  MiRebalanceSystemCacheFreedViews(v2, (unsigned int)KiTbFlushTimeStamp, 0LL);
  if ( SystemCacheReverseMap )
    MiFreeSystemCacheView(v2, v5, SystemCacheReverseMap);
  else
    MiGetSystemCacheRegionsToFree(v2, v14);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && LockHandle.OldIrql <= 0xFu && v8 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v14[0] != v14 )
    MiReturnSystemCacheRegionsToKva(v2, v14);
}
