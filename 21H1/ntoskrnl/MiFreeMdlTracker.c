/*
 * XREFs of MiFreeMdlTracker @ 0x14052B010
 * Callers:
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x140296CC0 (RtlAvlRemoveNode.c)
 *     ExFreeToNPagedLookasideList @ 0x1402D7298 (ExFreeToNPagedLookasideList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiValidateMdlTracker @ 0x14052B4B8 (MiValidateMdlTracker.c)
 */

__int64 __fastcall MiFreeMdlTracker(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  PEPROCESS v2; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 *v6; // r14
  unsigned __int64 *v7; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(PEPROCESS *)(BugCheckParameter2 + 16);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v2 || (v2 = PsInitialSystemProcess) != 0LL )
  {
    v5 = v2[1].ActiveProcessors.Bitmap[11];
    if ( v5 )
    {
      v6 = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 24), &LockHandle);
      v7 = *(unsigned __int64 **)v5;
      while ( v7 )
      {
        if ( BugCheckParameter2 < v7[3] )
        {
          v7 = (unsigned __int64 *)*v7;
        }
        else
        {
          if ( BugCheckParameter2 <= v7[3] )
          {
            v6 = v7;
            MiValidateMdlTracker((ULONG_PTR)v7);
            RtlAvlRemoveNode((unsigned __int64 *)v5, v7);
            *(_QWORD *)(v5 + 16) -= a2;
            break;
          }
          v7 = (unsigned __int64 *)v7[1];
        }
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
            v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v13 = (v12 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v12;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      if ( v6 )
      {
        ExFreeToNPagedLookasideList(&stru_140C4E980, v6);
      }
      else if ( *(_DWORD *)(v5 + 32) )
      {
        KeBugCheckEx(0x76u, 1uLL, BugCheckParameter2, v2[1].Affinity.Bitmap[14], v2[1].ActiveProcessors.Bitmap[11]);
      }
    }
  }
  return 1LL;
}
