/*
 * XREFs of MiAttachThreadDone @ 0x140353D64
 * Callers:
 *     MmQueryCommitReleaseState @ 0x140322E58 (MmQueryCommitReleaseState.c)
 *     MiUnlockStealVm @ 0x140353A68 (MiUnlockStealVm.c)
 *     MiTrimSharedPageFromViews @ 0x140354B14 (MiTrimSharedPageFromViews.c)
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 *     MmReleaseCommitForMemResetPages @ 0x14052B1F4 (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSignalGate @ 0x1403331D0 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiAttachThreadDone(__int64 a1)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+50h] [rbp+8h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C4ECC0, &LockHandle);
  v11 = *(_DWORD *)(a1 + 184);
  BYTE1(v11) = BYTE1(v11) & 0xF | (16 * ((BYTE1(v11) >> 4) - 1));
  *(_WORD *)(a1 + 184) = v11;
  v4 = *(_QWORD *)(a1 + 104);
  if ( v4 )
    KeSignalGate(v4, 1LL, v2, v3);
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
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v9 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
