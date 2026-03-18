/*
 * XREFs of MiAttachThreadDone @ 0x14027D8DC
 * Callers:
 *     MmQueryCommitReleaseState @ 0x14024DC34 (MmQueryCommitReleaseState.c)
 *     MiTrimSharedPageFromViews @ 0x14027B820 (MiTrimSharedPageFromViews.c)
 *     MiUnlockStealVm @ 0x1402EA5E4 (MiUnlockStealVm.c)
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MmReleaseCommitForMemResetPages @ 0x140581748 (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     KeSignalGate @ 0x14024B0B4 (KeSignalGate.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1403119F0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiAttachThreadDone(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r11
  _DWORD *v3; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  _DWORD *SchedulerAssist; // r10
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v8; // r8
  bool v9; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+50h] [rbp+8h]

  LockHandle.LockQueue.Next = 0LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  LockHandle.LockQueue.Lock = &SpinLock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.OldIrql = CurrentIrql;
  KxAcquireQueuedSpinLock(&LockHandle);
  v11 = *(_DWORD *)(a1 + 184);
  BYTE1(v11) = BYTE1(v11) & 0xF | (16 * ((BYTE1(v11) >> 4) - 1));
  *(_WORD *)(a1 + 184) = v11;
  v3 = *(_DWORD **)(a1 + 104);
  if ( v3 )
    KeSignalGate(v3, 1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v9 = ((unsigned int)result & v8[5]) == 0;
        v8[5] &= result;
        if ( v9 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
