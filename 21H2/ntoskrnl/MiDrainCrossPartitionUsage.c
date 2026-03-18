/*
 * XREFs of MiDrainCrossPartitionUsage @ 0x1405BE340
 * Callers:
 *     MiDeletePartition @ 0x14058DDC0 (MiDeletePartition.c)
 * Callees:
 *     MiDecrementControlAreaCount @ 0x140270204 (MiDecrementControlAreaCount.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1402D3100 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     CcExitPartition @ 0x14053E098 (CcExitPartition.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x14058B540 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiDecrementCloneHeaderCount @ 0x1405BA5F0 (MiDecrementCloneHeaderCount.c)
 */

void __fastcall MiDrainCrossPartitionUsage(__int64 a1)
{
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  int v13; // eax
  _DWORD *v14; // r8
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v15; // rcx
  struct _KEVENT Object; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF

  Object.Header.LockNV = 393216;
  Object.Header.SignalState = 0;
  Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
  Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C51F00, &LockHandle);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 1344));
  *(_DWORD *)(a1 + 4) |= 1u;
  *(_QWORD *)(a1 + 2352) = &Object;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1344));
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
        v6 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v7 = (v6 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v6;
        if ( v7 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  MiDecrementControlAreaCount(a1, (volatile signed __int64 *)(a1 + 1360));
  MiDecrementControlAreaCount(a1, (volatile signed __int64 *)(a1 + 1352));
  MiMakeUnusedSegmentDeleteOnClose(a1);
  CcExitPartition(*(_QWORD **)(a1 + 176), 0);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  v9 = (_QWORD *)(a1 + 2280);
  v10 = 7LL;
  while ( !*v9 )
  {
    ++v10;
    v9 += 4;
    if ( v10 >= 9 )
      goto LABEL_13;
  }
  KeResetEvent(&Object);
  *(_QWORD *)(a1 + 2344) = &Object;
LABEL_13:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1344));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v11 >= 2u )
      {
        v12 = KeGetCurrentPrcb();
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v14 = v12->SchedulerAssist;
        v7 = (v13 & v14[5]) == 0;
        v14[5] &= v13;
        if ( v7 )
          KiRemoveSystemWorkPriorityKick((__int64)v12);
      }
    }
  }
  __writecr8(v8);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  KeResetEvent(&Object);
  *(_QWORD *)(a1 + 2360) = &Object;
  MiDecrementCloneHeaderCount(a1);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v15 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 2368);
  if ( v15 )
    ExWaitForRundownProtectionReleaseCacheAware(v15);
}
