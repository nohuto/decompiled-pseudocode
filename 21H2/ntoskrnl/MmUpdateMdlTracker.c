/*
 * XREFs of MmUpdateMdlTracker @ 0x1405314B0
 * Callers:
 *     IopProbeAndLockPages @ 0x140240264 (IopProbeAndLockPages.c)
 *     IopProbeAndLockPages_0 @ 0x140298DA0 (IopProbeAndLockPages_0.c)
 *     IopProbeAndLockPages_1 @ 0x1402ACAF0 (IopProbeAndLockPages_1.c)
 *     IopProbeAndLockPages_2 @ 0x140508A5C (IopProbeAndLockPages_2.c)
 *     IopProbeAndLockPages_3 @ 0x140508ABC (IopProbeAndLockPages_3.c)
 *     NtWriteFileGather @ 0x1405F97E0 (NtWriteFileGather.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

_BOOL8 __fastcall MmUpdateMdlTracker(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  PEPROCESS v3; // r9
  unsigned __int64 i; // rbx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(PEPROCESS *)(a1 + 16);
  LockHandle.LockQueue = 0LL;
  if ( !v3 )
    v3 = PsInitialSystemProcess;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  i = v3[1].ActiveProcessors.Bitmap[11];
  if ( !i )
    return 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(i + 24), &LockHandle);
LABEL_5:
  for ( i = *(_QWORD *)i; i; i = *(_QWORD *)(i + 8) )
  {
    if ( a1 < *(_QWORD *)(i + 24) )
      goto LABEL_5;
    if ( a1 <= *(_QWORD *)(i + 24) )
    {
      if ( a2 || a3 )
      {
        *(_QWORD *)(i + 72) = a2;
        *(_QWORD *)(i + 80) = a3;
        *(_OWORD *)(i + 88) = 0LL;
        *(_OWORD *)(i + 104) = 0LL;
        *(_OWORD *)(i + 120) = 0LL;
      }
      break;
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
  return i != 0;
}
