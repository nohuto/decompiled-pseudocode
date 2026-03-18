/*
 * XREFs of MiDereferenceControlAreaPfnList @ 0x1402F1320
 * Callers:
 *     MiDeleteTransitionPte @ 0x14029A9D0 (MiDeleteTransitionPte.c)
 *     MiCopyDataPageToImagePage @ 0x1402B988C (MiCopyDataPageToImagePage.c)
 *     MiReleaseInPageRefs @ 0x14031AF0C (MiReleaseInPageRefs.c)
 *     MiGatherMappedPages @ 0x14035131C (MiGatherMappedPages.c)
 *     MiRestoreTransitionPte @ 0x140352BF0 (MiRestoreTransitionPte.c)
 *     MiPurgeImageSection @ 0x1403A1EA4 (MiPurgeImageSection.c)
 *     MiPurgeSubsection @ 0x1405247B0 (MiPurgeSubsection.c)
 *     MiSplitDirectMapPage @ 0x14053C61C (MiSplitDirectMapPage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14026C5F0 (ExpAcquireSpinLockExclusive.c)
 *     MiInsertUnusedSubsection @ 0x1402A52E0 (MiInsertUnusedSubsection.c)
 *     MiRemoveUnusedSubsection @ 0x1402A5598 (MiRemoveUnusedSubsection.c)
 *     MiCheckForControlAreaDeletion @ 0x1402F1478 (MiCheckForControlAreaDeletion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054F5FC (MiReturnCrossPartitionSectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405AFF18 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B00F4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall MiDereferenceControlAreaPfnList(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  char v6; // r15
  __int64 v7; // r13
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
  v6 = (char)a4;
  v7 = a2;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 || !v5 )
    v9 = 0LL;
  else
    v9 = a2;
  v10 = (volatile LONG *)(a1 + 72);
  v11 = v5 != 0;
  v12 = (volatile signed __int32 *)(a1 + 72);
  if ( ((unsigned __int8)a4 & 2) != 0 )
  {
    v13 = 17;
    LOBYTE(a2) = -1;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      LOBYTE(inserted) = ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v12, a2);
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
    if ( v15 && !*(_QWORD *)(v9 + 96) && (*(_BYTE *)(v7 + 34) & 1) == 0 && (*(_BYTE *)(v9 + 34) & 8) != 0 )
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
    LOBYTE(inserted) = qword_140C4E588;
    v16 = *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
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
