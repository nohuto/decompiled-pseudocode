/*
 * XREFs of CcUnmapInactiveViews @ 0x1404EB620
 * Callers:
 *     CcGetVacbMiss @ 0x14031B710 (CcGetVacbMiss.c)
 *     MiObtainSystemCacheView @ 0x14031D250 (MiObtainSystemCacheView.c)
 *     MiDereferenceSegmentThread @ 0x1403BD5A0 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x14052A93C (MiRemoveUnusedSegments.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     CcDereferencePartition @ 0x140301A7C (CcDereferencePartition.c)
 *     PsGetNextPartitionUnsafe @ 0x140303A58 (PsGetNextPartitionUnsafe.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404EB784 (CcUnmapInactiveViewsInternal.c)
 */

__int64 __fastcall CcUnmapInactiveViews(_QWORD *a1)
{
  unsigned __int8 v1; // si
  KIRQL v2; // al
  __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  _UNKNOWN **NextPartitionUnsafe; // rdi
  __int64 v12; // rcx

  v1 = 0;
  if ( !CcInitializationComplete || !CcNumberOfMappedVacbs )
    return 0LL;
  if ( a1 )
  {
    v12 = a1[1];
    if ( v12 )
      return CcUnmapInactiveViewsInternal(v12, 64LL);
    return 0LL;
  }
  while ( 1 )
  {
    NextPartitionUnsafe = PsGetNextPartitionUnsafe(a1);
    if ( !NextPartitionUnsafe )
      break;
    v2 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
    v3 = (__int64)NextPartitionUnsafe[1];
    v4 = v2;
    if ( v3 && *(_BYTE *)(v3 + 966) < 2u )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 + 968)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v3 = 0LL;
    }
    KxReleaseSpinLock(&CcGlobalPartitionLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v9 = (v8 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
    if ( v3 )
    {
      v1 |= CcUnmapInactiveViewsInternal(v3, 64LL);
      CcDereferencePartition(v3);
    }
    a1 = NextPartitionUnsafe;
  }
  return v1;
}
