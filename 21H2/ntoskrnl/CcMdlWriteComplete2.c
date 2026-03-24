/*
 * XREFs of CcMdlWriteComplete2 @ 0x1402D05D8
 * Callers:
 *     FsRtlMdlWriteCompleteDev @ 0x1406BE700 (FsRtlMdlWriteCompleteDev.c)
 *     CcMdlWriteComplete @ 0x1406C1C60 (CcMdlWriteComplete.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     MmFlushSection @ 0x1402746FC (MmFlushSection.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlRaiseStatus @ 0x14029AF80 (RtlRaiseStatus.c)
 *     FsRtlIsNtstatusExpected @ 0x1402C2240 (FsRtlIsNtstatusExpected.c)
 *     IoFreeMdl @ 0x1402E9600 (IoFreeMdl.c)
 *     CcDecrementOpenCount @ 0x14031313C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x140313800 (CcGetPartition.c)
 *     CcSetDirtyInMask @ 0x140336470 (CcSetDirtyInMask.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CcMdlWriteComplete2(__int64 a1, __int64 *a2, struct _MDL *a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  CSHORT MdlFlags; // r15
  struct _MDL *v7; // rdi
  NTSTATUS v9; // esi
  __int16 v10; // r15
  __int64 v11; // r13
  struct _MDL *Next; // r12
  __int64 ByteCount; // r8
  __int64 v14; // rax
  PMDL v15; // r14
  __int64 Partition; // rax
  unsigned __int64 OldIrql; // rbx
  struct _MDL *v18; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  bool v23; // zf
  BOOLEAN IsNtstatusExpected; // al
  unsigned int v25; // ecx
  __int128 v26; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+48h] BYREF
  PMDL Mdl; // [rsp+B0h] [rbp+50h]

  Mdl = a3;
  v4 = *a2;
  v28 = *a2;
  v5 = *(_QWORD *)(a1 + 40);
  MdlFlags = a3->MdlFlags;
  v7 = a3;
  v9 = 0;
  v26 = 0LL;
  v10 = MdlFlags & 2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v11 = *(_QWORD *)(v5 + 8);
  do
  {
    Next = v7->Next;
    if ( v10 )
      MmUnlockPages(v7);
    ByteCount = v7->ByteCount;
    if ( (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
    {
      MmFlushSection(*(_QWORD *)(a1 + 40), &v28, ByteCount, a4, &v26, 1u);
      if ( (int)v26 < 0 )
        v9 = v26;
    }
    else
    {
      CcSetDirtyInMask(v11, &v28, ByteCount, 0LL);
    }
    v14 = v7->ByteCount;
    v7 = Next;
    v4 += v14;
    v28 = v4;
  }
  while ( Next );
  v15 = Mdl;
  if ( v10 )
  {
    Partition = CcGetPartition(v11);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    CcDecrementOpenCount(v11);
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
          v22 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v23 = (v22 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v22;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  if ( v9 < 0 )
  {
    IsNtstatusExpected = FsRtlIsNtstatusExpected(v9);
    v25 = -1073741591;
    if ( IsNtstatusExpected )
      v25 = v9;
    RtlRaiseStatus(v25);
  }
  do
  {
    v18 = v15->Next;
    IoFreeMdl(v15);
    v15 = v18;
  }
  while ( v18 );
}
