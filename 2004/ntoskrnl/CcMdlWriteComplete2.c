/*
 * XREFs of CcMdlWriteComplete2 @ 0x14035DDD8
 * Callers:
 *     FsRtlMdlWriteCompleteDev @ 0x14070C570 (FsRtlMdlWriteCompleteDev.c)
 *     CcMdlWriteComplete @ 0x14070F200 (CcMdlWriteComplete.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcSetDirtyInMask @ 0x140222250 (CcSetDirtyInMask.c)
 *     IoFreeMdl @ 0x140267A50 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1402C0EE4 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1402C15A0 (CcGetPartition.c)
 *     MmFlushSection @ 0x1402C25C4 (MmFlushSection.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     FsRtlIsNtstatusExpected @ 0x1403502F0 (FsRtlIsNtstatusExpected.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CcMdlWriteComplete2(__int64 a1, __int64 *a2, struct _MDL *a3, _DWORD *a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  CSHORT MdlFlags; // r15
  struct _MDL *v7; // rdi
  NTSTATUS v9; // esi
  __int16 v10; // r15
  _QWORD *v11; // r13
  struct _MDL *Next; // r12
  __int64 ByteCount; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  PMDL v17; // r14
  __int64 Partition; // rax
  unsigned __int64 OldIrql; // rbx
  struct _MDL *v20; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v27; // ecx
  __int128 v28; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+48h] BYREF
  PMDL Mdl; // [rsp+B0h] [rbp+50h]

  Mdl = a3;
  v4 = *a2;
  v30 = *a2;
  v5 = *(_QWORD *)(a1 + 40);
  MdlFlags = a3->MdlFlags;
  v7 = a3;
  v9 = 0;
  v28 = 0LL;
  v10 = MdlFlags & 2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v11 = *(_QWORD **)(v5 + 8);
  do
  {
    Next = v7->Next;
    if ( v10 )
      MmUnlockPages(v7);
    ByteCount = v7->ByteCount;
    if ( (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
    {
      MmFlushSection(*(_QWORD *)(a1 + 40), &v30, ByteCount, (__int64)a4, &v28, 1u);
      if ( (int)v28 < 0 )
        v9 = v28;
    }
    else
    {
      CcSetDirtyInMask((__int64)v11, &v30, ByteCount, 0LL);
    }
    v16 = v7->ByteCount;
    v7 = Next;
    v4 += v16;
    v30 = v4;
  }
  while ( Next );
  v17 = Mdl;
  if ( v10 )
  {
    Partition = CcGetPartition(v11, v14, v15, a4);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    CcDecrementOpenCount((__int64)v11);
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
          v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v25 = (v24 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v24;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  if ( v9 < 0 )
  {
    IsNtstatusExpected = FsRtlIsNtstatusExpected(v9);
    v27 = -1073741591;
    if ( IsNtstatusExpected )
      v27 = v9;
    RtlRaiseStatus(v27);
  }
  do
  {
    v20 = v17->Next;
    IoFreeMdl(v17);
    v17 = v20;
  }
  while ( v20 );
}
