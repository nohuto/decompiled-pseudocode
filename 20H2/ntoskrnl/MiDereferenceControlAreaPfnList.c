/*
 * XREFs of MiDereferenceControlAreaPfnList @ 0x140300800
 * Callers:
 *     MiDeleteTransitionPte @ 0x1402C7050 (MiDeleteTransitionPte.c)
 *     MiReleaseInPageRefs @ 0x140328D28 (MiReleaseInPageRefs.c)
 *     MiGatherMappedPages @ 0x140344824 (MiGatherMappedPages.c)
 *     MiRestoreTransitionPte @ 0x140346AA0 (MiRestoreTransitionPte.c)
 *     MiCopyDataPageToImagePage @ 0x14034EC44 (MiCopyDataPageToImagePage.c)
 *     MiPurgeImageSection @ 0x1403A4B04 (MiPurgeImageSection.c)
 *     MiPurgeSubsection @ 0x1405287D0 (MiPurgeSubsection.c)
 *     MiSplitDirectMapPage @ 0x14054063C (MiSplitDirectMapPage.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14027F330 (ExpAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiCheckForControlAreaDeletion @ 0x140300958 (MiCheckForControlAreaDeletion.c)
 *     MiInsertUnusedSubsection @ 0x140300AC0 (MiInsertUnusedSubsection.c)
 *     MiRemoveUnusedSubsection @ 0x140300DB4 (MiRemoveUnusedSubsection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055361C (MiReturnCrossPartitionSectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B4374 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall MiDereferenceControlAreaPfnList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  char v6; // r15
  __int64 v9; // rdi
  volatile LONG *v10; // r14
  BOOL v11; // r12d
  volatile signed __int32 *v12; // rcx
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
  v6 = a4;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 || !v5 )
    v9 = 0LL;
  else
    v9 = a2;
  v10 = (volatile LONG *)(a1 + 72);
  v11 = v5 != 0;
  v12 = (volatile signed __int32 *)(a1 + 72);
  if ( (a4 & 2) != 0 )
  {
    v13 = 17;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      LOBYTE(inserted) = ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v12, -1);
    else
      LOBYTE(inserted) = ExpAcquireSpinLockExclusive(v12, 0xFFu, a3, a4);
  }
  else
  {
    LOBYTE(inserted) = ExAcquireSpinLockExclusive(v12);
    v13 = inserted;
  }
  if ( v9 )
  {
    v15 = (*(_DWORD *)(v9 + 104))-- == 1;
    if ( v15 && !*(_QWORD *)(v9 + 96) && (*(_BYTE *)(a2 + 34) & 1) == 0 && (*(_BYTE *)(v9 + 34) & 8) != 0 )
    {
      MiRemoveUnusedSubsection(v9);
      inserted = MiInsertUnusedSubsection(v9);
      v4 = inserted;
    }
  }
  --*(_QWORD *)(a1 + 32);
  if ( (v6 & 1) != 0 )
    LOBYTE(inserted) = MiCheckForControlAreaDeletion(a1);
  if ( v4 )
  {
    LOBYTE(inserted) = qword_140C4E4C8;
    v16 = *(_QWORD *)(qword_140C4E4C8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
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
