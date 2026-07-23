/*
 * XREFs of MiDereferenceControlAreaPfnList @ 0x140284F70
 * Callers:
 *     MiRestoreTransitionPte @ 0x140220210 (MiRestoreTransitionPte.c)
 *     MiReleaseInPageRefs @ 0x140248D4C (MiReleaseInPageRefs.c)
 *     MiGatherMappedPages @ 0x140277138 (MiGatherMappedPages.c)
 *     MiDeleteTransitionPte @ 0x1402DD080 (MiDeleteTransitionPte.c)
 *     MiCopyDataPageToImagePage @ 0x14030F138 (MiCopyDataPageToImagePage.c)
 *     MiPurgeImageSection @ 0x1403A5514 (MiPurgeImageSection.c)
 *     MiPurgeSubsection @ 0x14052A4F0 (MiPurgeSubsection.c)
 *     MiSplitDirectMapPage @ 0x14054237C (MiSplitDirectMapPage.c)
 * Callees:
 *     MiInsertUnusedSubsection @ 0x14022A08C (MiInsertUnusedSubsection.c)
 *     MiCheckForControlAreaDeletion @ 0x1402850C8 (MiCheckForControlAreaDeletion.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusive @ 0x1402C1A70 (ExpAcquireSpinLockExclusive.c)
 *     MiRemoveUnusedSubsection @ 0x140303854 (MiRemoveUnusedSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055532C (MiReturnCrossPartitionSectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5DD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5FBC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall MiDereferenceControlAreaPfnList(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v7; // r13
  __int64 v9; // rdi
  volatile LONG *v10; // r14
  BOOL v11; // r12d
  volatile LONG *v12; // rcx
  unsigned __int8 v13; // bp
  __int64 inserted; // rax
  bool v15; // zf
  __int64 v16; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r9
  int v22; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 64);
  v7 = a2;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 || !v5 )
    v9 = 0LL;
  else
    v9 = a2;
  v10 = (volatile LONG *)(a1 + 72);
  v11 = v5 != 0;
  v12 = (volatile LONG *)(a1 + 72);
  if ( (a4 & 2) != 0 )
  {
    v13 = 17;
    LOBYTE(a2) = -1;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      LOBYTE(inserted) = ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v12, a2);
    else
      LOBYTE(inserted) = ExpAcquireSpinLockExclusive(v12, a2);
  }
  else
  {
    LOBYTE(inserted) = ExAcquireSpinLockExclusive(v12);
    v13 = inserted;
  }
  if ( v9 )
  {
    v15 = (*(_DWORD *)(v9 + 104))-- == 1;
    if ( v15 && !*(_QWORD *)(v9 + 96) && (*(_BYTE *)(v7 + 34) & 1) == 0 && (*(_BYTE *)(v9 + 34) & 8) != 0 )
    {
      MiRemoveUnusedSubsection(v9);
      inserted = MiInsertUnusedSubsection((_QWORD *)v9);
      v4 = inserted;
    }
  }
  --*(_QWORD *)(a1 + 32);
  if ( (a4 & 1) != 0 )
    LOBYTE(inserted) = MiCheckForControlAreaDeletion(a1);
  if ( v4 )
  {
    LOBYTE(inserted) = qword_140C4E688;
    v16 = *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  }
  else
  {
    v16 = 0LL;
  }
  if ( v13 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      LOBYTE(inserted) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v10, retaddr);
    else
      *v10 = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        LODWORD(inserted) = SchedulerAssist[6] - 1;
        SchedulerAssist[6] = inserted;
        if ( !(_DWORD)inserted )
          LOBYTE(inserted) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v13 <= 0xFu && CurrentIrql >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << (v13 + 1));
          v15 = (v22 & v21[5]) == 0;
          v21[5] &= v22;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
    }
    LOBYTE(inserted) = v13;
    __writecr8(v13);
  }
  if ( v4 )
    LOBYTE(inserted) = MiReturnCrossPartitionSectionCharges(v16, v11, v4);
  return inserted;
}
