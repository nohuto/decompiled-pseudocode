/*
 * XREFs of CcMdlWriteComplete2 @ 0x1402581E0
 * Callers:
 *     FsRtlMdlWriteCompleteDev @ 0x1406E1760 (FsRtlMdlWriteCompleteDev.c)
 *     CcMdlWriteComplete @ 0x1406E7450 (CcMdlWriteComplete.c)
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x140247160 (FsRtlIsNtstatusExpected.c)
 *     CcDecrementOpenCount @ 0x140282AF4 (CcDecrementOpenCount.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmFlushSection @ 0x140283C50 (MmFlushSection.c)
 *     CcSetDirtyInMask @ 0x14029D860 (CcSetDirtyInMask.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 v14; // rax
  PMDL v15; // r14
  unsigned __int64 OldIrql; // rbx
  struct _MDL *v17; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  BOOLEAN IsNtstatusExpected; // al
  __int64 v24; // rcx
  __int128 v25; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+48h] BYREF
  PMDL Mdl; // [rsp+B0h] [rbp+50h]

  Mdl = a3;
  v4 = *a2;
  v27 = *a2;
  v5 = *(_QWORD *)(a1 + 40);
  MdlFlags = a3->MdlFlags;
  v7 = a3;
  v9 = 0;
  v25 = 0LL;
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
      MmFlushSection(*(_QWORD *)(a1 + 40), (unsigned int)&v27, ByteCount, a4, (__int64)&v25, 1);
      if ( (int)v25 < 0 )
        v9 = v25;
    }
    else
    {
      CcSetDirtyInMask(v11, &v27, ByteCount, 0LL);
    }
    v14 = v7->ByteCount;
    v7 = Next;
    v4 += v14;
    v27 = v4;
  }
  while ( Next );
  v15 = Mdl;
  if ( v10 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v11 + 528) + 704LL), &LockHandle);
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
          v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v22 = (v21 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v21;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  if ( v9 < 0 )
  {
    IsNtstatusExpected = FsRtlIsNtstatusExpected(v9);
    v24 = 3221225705LL;
    if ( IsNtstatusExpected )
      v24 = (unsigned int)v9;
    RtlRaiseStatus(v24);
  }
  do
  {
    v17 = v15->Next;
    IoFreeMdl(v15);
    v15 = v17;
  }
  while ( v17 );
}
