/*
 * XREFs of CcQuickLazyWriteScanForVolume @ 0x14053D730
 * Callers:
 *     <none>
 * Callees:
 *     CcFreeWorkQueueEntry @ 0x1402766A0 (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x140276728 (CcDereferencePartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     CcLazyWriteScanVolume @ 0x140538E4C (CcLazyWriteScanVolume.c)
 */

char __fastcall CcQuickLazyWriteScanForVolume(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v4; // rbp
  __int64 v5; // rdx
  unsigned int v6; // r9d
  _QWORD *v7; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  __int64 v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1[6];
  a1[6] = 0LL;
  v4 = a1[7];
  v5 = a1[9];
  v2 = a1[8];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = *(_DWORD *)(v1 + 16);
  *(_QWORD *)(v1 + 8) = 0LL;
  *(_QWORD *)v1 = 0LL;
  CcLazyWriteScanVolume(v2, v5, v1, v6);
  CcFreeWorkQueueEntry((PSLIST_ENTRY)v1);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 768), &LockHandle);
  v7 = *(_QWORD **)(v2 + 1552);
  if ( *v7 != v2 + 1544 )
    __fastfail(3u);
  a1[1] = v7;
  *a1 = v2 + 1544;
  *v7 = a1;
  *(_QWORD *)(v2 + 1552) = a1;
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
  LOBYTE(v14) = CcDereferencePartition(v4);
  if ( v2 )
  {
    v14 = _InterlockedDecrement64((volatile signed __int64 *)(v2 + 8));
    if ( v14 <= 0 )
    {
      if ( v14 )
        __fastfail(0xEu);
      LOBYTE(v14) = KeSetEvent((PRKEVENT)(v2 + 1200), 0, 0);
    }
  }
  return v14;
}
