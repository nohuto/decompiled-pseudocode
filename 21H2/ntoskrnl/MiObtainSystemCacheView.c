/*
 * XREFs of MiObtainSystemCacheView @ 0x140286210
 * Callers:
 *     MmMapViewInSystemCache @ 0x140285D90 (MmMapViewInSystemCache.c)
 *     MmReserveViewInSystemCache @ 0x14084D698 (MmReserveViewInSystemCache.c)
 * Callees:
 *     MiReturnSystemCacheRegionsToKva @ 0x1402426F4 (MiReturnSystemCacheRegionsToKva.c)
 *     MiExpandSystemCache @ 0x14024280C (MiExpandSystemCache.c)
 *     MiConsumeSystemCachePde @ 0x140243FB0 (MiConsumeSystemCachePde.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x14024DA80 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiReleaseSystemCacheView @ 0x1402864A0 (MiReleaseSystemCacheView.c)
 *     MiRebalanceSystemCacheFreedViews @ 0x140286630 (MiRebalanceSystemCacheFreedViews.c)
 *     MiGetSystemCacheRegionsToFree @ 0x140287B4C (MiGetSystemCacheRegionsToFree.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1403119F0 (KxAcquireQueuedSpinLock.c)
 *     MiLateInitializeSystemCache @ 0x1403C3BF8 (MiLateInitializeSystemCache.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     CcUnmapInactiveViews @ 0x14053B3F8 (CcUnmapInactiveViews.c)
 *     MiReadyReservedView @ 0x14059219C (MiReadyReservedView.c)
 */

__int64 __fastcall MiObtainSystemCacheView(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  int v4; // r15d
  unsigned __int8 CurrentIrql; // r10
  __int64 v6; // r12
  __int64 v7; // r8
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v14; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v18; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // eax
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  __int64 v29; // rcx
  signed __int32 v30[8]; // [rsp+0h] [rbp-70h] BYREF
  _QWORD *v31[2]; // [rsp+20h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-40h] BYREF
  __int128 v33; // [rsp+48h] [rbp-28h]
  __int128 v34; // [rsp+58h] [rbp-18h]
  unsigned __int64 v35; // [rsp+68h] [rbp-8h]
  __int64 v36; // [rsp+A0h] [rbp+30h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v1 = a1 + 1912;
  v2 = 0LL;
  v31[1] = v31;
  LockHandle.LockQueue.Lock = &qword_140C51C30;
  v31[0] = v31;
  v4 = 0;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = LOBYTE(LockHandle.LockQueue.Next) - 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ((_DWORD)v6 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.OldIrql = CurrentIrql;
  KxAcquireQueuedSpinLock(&LockHandle);
  if ( !*(_BYTE *)(a1 + 16732) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && LockHandle.OldIrql <= 0xFu && v16 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(v6 << (LockHandle.OldIrql + 1));
          v20 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( !(unsigned int)MiLateInitializeSystemCache(a1) )
      return 0LL;
    KeAcquireInStackQueuedSpinLock(&qword_140C51C30, &LockHandle);
  }
  _InterlockedOr(v30, 0);
  MiRebalanceSystemCacheFreedViews(a1, (unsigned int)KiTbFlushTimeStamp, 0LL);
  if ( *(_QWORD *)(v1 + 16) != v7 )
  {
    v8 = *(__int64 **)v1;
    v9 = **(_QWORD **)v1;
    if ( *(_QWORD *)(*(_QWORD *)v1 + 8LL) != v1 || *(__int64 **)(v9 + 8) != v8 )
      __fastfail(3u);
    *(_QWORD *)v1 = v9;
    *(_QWORD *)(v9 + 8) = v1;
    v35 = v8[4] & 0x3FFFFFFFFFFFFFFFLL | 0x8000000000000000uLL;
    v33 = 0LL;
    v34 = 0LL;
    v8[4] = v35;
    --*(_QWORD *)(v1 + 16);
LABEL_7:
    MiGetSystemCacheRegionsToFree(a1, v31);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v11 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && LockHandle.OldIrql <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = v26->SchedulerAssist;
          v28 = ~(unsigned __int16)(v6 << (LockHandle.OldIrql + 1));
          v20 = (v28 & v27[5]) == 0;
          v10 = (unsigned int)v28 & v27[5];
          v27[5] = v10;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
    }
    __writecr8(v11);
    if ( !v8 )
      goto LABEL_10;
    goto LABEL_9;
  }
  v8 = MiConsumeSystemCachePde(a1);
  if ( v8 )
    goto LABEL_7;
  v8 = MiConsumeSystemCacheTbFlushNeededView(a1, 0x400uLL);
  if ( v8 )
    goto LABEL_7;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v14 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v21 = KeGetCurrentIrql();
      if ( v21 <= 0xFu && LockHandle.OldIrql <= 0xFu && v21 >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = v22->SchedulerAssist;
        v24 = ~(unsigned __int16)(v6 << (LockHandle.OldIrql + 1));
        v20 = (v24 & v23[5]) == 0;
        v23[5] &= v24;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
  }
  __writecr8(v14);
  v8 = MiExpandSystemCache((__int16 *)a1);
  if ( !v8 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C51C30, &LockHandle);
    v4 = 1;
    v8 = MiConsumeSystemCacheTbFlushNeededView(a1, 1uLL);
    goto LABEL_7;
  }
LABEL_9:
  v2 = v8[2];
LABEL_10:
  if ( v4 )
  {
    v29 = *(_QWORD *)(a1 + 176);
    v36 = 0LL;
    if ( (unsigned int)CcUnmapInactiveViews(v29, v10, 0LL, &v36) )
    {
      if ( v2 )
        MiReleaseSystemCacheView(0LL, v2);
      v2 = v36;
      MiReadyReservedView(v36);
    }
  }
  if ( v31[0] != v31 )
    MiReturnSystemCacheRegionsToKva(a1, v31);
  return v2;
}
