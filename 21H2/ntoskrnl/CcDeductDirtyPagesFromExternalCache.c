/*
 * XREFs of CcDeductDirtyPagesFromExternalCache @ 0x140392490
 * Callers:
 *     CcUnregisterExternalCache @ 0x1404EA1E0 (CcUnregisterExternalCache.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     CcPostDeferredWrites @ 0x1404EA530 (CcPostDeferredWrites.c)
 */

_QWORD *__fastcall CcDeductDirtyPagesFromExternalCache(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rsi
  unsigned int v5; // ebp
  unsigned __int64 v6; // rax
  unsigned __int64 OldIrql; // rbx
  _QWORD *result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = *((_QWORD *)PspSystemPartition + 1);
  if ( a2 )
  {
    do
    {
      v5 = v2;
      if ( v2 > 0xFFFFFFFF )
        v5 = -1;
      v2 -= v5;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 128), &LockHandle);
      v6 = *(_QWORD *)(a1 + 8);
      if ( v6 < v5 )
        v5 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v6 - v5;
      *(_QWORD *)(*((_QWORD *)PspSystemPartition + 1) + 640LL) -= v5;
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
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
    while ( v2 );
  }
  result = (_QWORD *)(v4 + 784);
  if ( (_QWORD *)*result != result )
    return (_QWORD *)CcPostDeferredWrites(v4);
  return result;
}
