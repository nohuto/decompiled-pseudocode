/*
 * XREFs of MiFlushControlArea @ 0x1405299D4
 * Callers:
 *     MiDeleteCachedSegment @ 0x140528DF8 (MiDeleteCachedSegment.c)
 *     MiProcessDeleteOnClose @ 0x14052A1D8 (MiProcessDeleteOnClose.c)
 * Callees:
 *     MmIsWriteErrorFatal @ 0x140276E98 (MmIsWriteErrorFatal.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     ObFastReferenceObjectLocked @ 0x1402AAC68 (ObFastReferenceObjectLocked.c)
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     MiDeleteControlArea @ 0x140302834 (MiDeleteControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     MiDecrementModifiedWriteCount @ 0x140362158 (MiDecrementModifiedWriteCount.c)
 *     MiInsertUnusedSegment @ 0x1403622B0 (MiInsertUnusedSegment.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPreventControlAreaDelete @ 0x14052A19C (MiPreventControlAreaDelete.c)
 *     MiRemoveWakeListEntry @ 0x14052AB1C (MiRemoveWakeListEntry.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055532C (MiReturnCrossPartitionSectionCharges.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14063BE14 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14063BFF4 (FsRtlAcquireFileForCcFlushEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFlushControlArea(char *P, unsigned __int8 a2, __int64 *a3, struct _FILE_OBJECT **a4)
{
  unsigned __int64 v4; // rdi
  struct _FILE_OBJECT *v6; // r13
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  struct _WORK_QUEUE_ITEM *Pool; // rdi
  BOOL v13; // r15d
  unsigned __int64 v14; // rsi
  signed __int64 v15; // rdx
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // eax
  NTSTATUS v20; // r15d
  KIRQL v21; // al
  __int64 inserted; // r14
  int v23; // r9d
  __int64 result; // rax
  __int64 v25; // rbx
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  int v32; // eax
  _DWORD *v33; // r8
  volatile LONG *SpinLock; // [rsp+40h] [rbp-29h]
  __int128 v35; // [rsp+48h] [rbp-21h] BYREF
  __int64 v36; // [rsp+58h] [rbp-11h] BYREF
  __int64 v37; // [rsp+60h] [rbp-9h]
  __int64 v38; // [rsp+68h] [rbp-1h]
  _QWORD v39[10]; // [rsp+70h] [rbp+7h] BYREF
  BOOL v40; // [rsp+D0h] [rbp+67h]

  *((_DWORD *)P + 14) |= 0x100u;
  v39[1] = v39;
  v4 = a2;
  v39[0] = v39;
  v36 = *((_QWORD *)P + 10);
  v38 = 393479LL;
  *((_QWORD *)P + 10) = &v36;
  v35 = 0LL;
  *a4 = 0LL;
  *a3 = 0LL;
  v37 = 4LL;
  v6 = (struct _FILE_OBJECT *)MiPreventControlAreaDelete(P);
  SpinLock = (volatile LONG *)(P + 72);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)P + 18);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  Pool = 0LL;
  v13 = (int)FsRtlAcquireFileForCcFlushEx(v6) >= 0;
  v40 = v13;
  v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)P + 18);
  v15 = _InterlockedDecrement64((volatile signed __int64 *)P + 14);
  *(_QWORD *)(*(_QWORD *)(qword_140C4E688 + 8LL * (*((_WORD *)P + 30) & 0x3FF)) + 1688LL) = 0LL;
  if ( !v13 || (*((_DWORD *)P + 14) & 1) != 0 )
  {
    *((_DWORD *)P + 14) &= ~0x100u;
    HIDWORD(v37) = 1;
    if ( !v15 )
    {
      MiRemoveWakeListEntry(P, &v36);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)P + 18);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v30 = KeGetCurrentIrql();
          if ( v30 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v30 >= 2u )
          {
            v31 = KeGetCurrentPrcb();
            v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
            v33 = v31->SchedulerAssist;
            v11 = (v32 & v33[5]) == 0;
            v33[5] &= v32;
            if ( v11 )
              KiRemoveSystemWorkPriorityKick((__int64)v31);
          }
        }
      }
      __writecr8(v14);
      if ( v13 )
        FsRtlReleaseFileForCcFlush(v6);
      MiDeleteControlArea(P);
      ObfDereferenceObjectWithTag(v6, 0x746C6644u);
      return 0LL;
    }
    v20 = 0;
  }
  else
  {
    ++*((_DWORD *)P + 19);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)P + 18);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = v17->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v11 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick((__int64)v17);
        }
      }
    }
    __writecr8(v14);
    KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
    v20 = MiFlushSectionInternal(0LL, 0LL, (__int64 *)P + 16, 0LL, 0LL, 2u, (unsigned int *)&v35);
    KeGetCurrentThread()[1].TrapFrame = 0LL;
    if ( v20 < 0 )
      Pool = (struct _WORK_QUEUE_ITEM *)MiAllocatePool(64, 0x38uLL, 0x70646D4Du);
    v21 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)P + 18);
    *((_DWORD *)P + 14) &= ~0x100u;
    LOBYTE(v14) = v21;
    *a3 = MiDecrementModifiedWriteCount((__int64)P, 1);
  }
  inserted = 0LL;
  MiRemoveWakeListEntry(P, &v36);
  if ( *((_QWORD *)P + 3) | *((_QWORD *)P + 5) | *((_DWORD *)P + 14) & 1LL )
    goto LABEL_34;
  if ( !HIDWORD(v37) || !*((_QWORD *)P + 4) )
  {
    if ( v20 >= 0 || !*((_QWORD *)P + 4) )
      goto LABEL_31;
    if ( v20 != -1073740749 && MmIsWriteErrorFatal(1, v23, v20) )
    {
      if ( Pool )
      {
        Pool[1].List.Flink = (struct _LIST_ENTRY *)ObFastReferenceObjectLocked((_QWORD *)P + 8);
        LOBYTE(Pool[1].WorkerRoutine) = 1;
        LODWORD(Pool[1].List.Blink) = v20;
        Pool->List.Flink = 0LL;
        Pool->WorkerRoutine = (void (__fastcall *)(void *))MiLdwPopupWorker;
        Pool->Parameter = Pool;
        ExQueueWorkItem(Pool, DelayedWorkQueue);
      }
LABEL_31:
      result = 1LL;
      *a4 = v6;
      return result;
    }
  }
  inserted = MiInsertUnusedSegment((__int64)P);
  if ( !inserted )
LABEL_34:
    v25 = 0LL;
  else
    v25 = *(_QWORD *)(qword_140C4E688 + 8LL * (*((_WORD *)P + 30) & 0x3FF));
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v26 = KeGetCurrentIrql();
      if ( v26 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v26 >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v11 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)v27);
      }
    }
  }
  __writecr8((unsigned __int8)v14);
  if ( v40 )
    FsRtlReleaseFileForCcFlush(v6);
  ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(v25, 1LL, inserted);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  return 0LL;
}
