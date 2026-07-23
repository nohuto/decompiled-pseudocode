/*
 * XREFs of CcMdlWriteComplete2 @ 0x14024E958
 * Callers:
 *     FsRtlMdlWriteCompleteDev @ 0x14061D960 (FsRtlMdlWriteCompleteDev.c)
 *     CcMdlWriteComplete @ 0x1406208A0 (CcMdlWriteComplete.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     FsRtlIsNtstatusExpected @ 0x1402406E0 (FsRtlIsNtstatusExpected.c)
 *     MmFlushSection @ 0x14026269C (MmFlushSection.c)
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     CcDecrementOpenCount @ 0x14031DE8C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     CcSetDirtyInMask @ 0x1403411C0 (CcSetDirtyInMask.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CcMdlWriteComplete2(__int64 a1, __int64 *a2, struct _MDL *a3, int a4)
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
  char v14; // dl
  char v15; // r8
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
  v11 = *(_QWORD *)(v5 + 8);
  do
  {
    Next = v7->Next;
    if ( v10 )
      MmUnlockPages(v7);
    ByteCount = v7->ByteCount;
    if ( (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
    {
      MmFlushSection(*(_QWORD *)(a1 + 40), (unsigned int)&v30, ByteCount, a4, (__int64)&v28, 1);
      if ( (int)v28 < 0 )
        v9 = v28;
    }
    else
    {
      CcSetDirtyInMask(v11, &v30, ByteCount, 0LL);
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
    Partition = CcGetPartition(v11, v14, v15);
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
