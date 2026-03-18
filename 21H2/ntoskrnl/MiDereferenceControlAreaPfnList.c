/*
 * XREFs of MiDereferenceControlAreaPfnList @ 0x1402206C0
 * Callers:
 *     MiReleaseInPageRefs @ 0x140226D50 (MiReleaseInPageRefs.c)
 *     MiPurgeImageSection @ 0x14025AD28 (MiPurgeImageSection.c)
 *     MiCopyDataPageToImagePage @ 0x14026F180 (MiCopyDataPageToImagePage.c)
 *     MiGatherMappedPages @ 0x14028B330 (MiGatherMappedPages.c)
 *     MiDeleteTransitionPte @ 0x1402C3100 (MiDeleteTransitionPte.c)
 *     MiRestoreTransitionPte @ 0x14033FAA4 (MiRestoreTransitionPte.c)
 *     MiPurgeSubsection @ 0x14058BA98 (MiPurgeSubsection.c)
 *     MiSplitDirectMapPage @ 0x1405A0B10 (MiSplitDirectMapPage.c)
 * Callees:
 *     MiCheckForControlAreaDeletion @ 0x140220944 (MiCheckForControlAreaDeletion.c)
 *     MiInsertUnusedSubsection @ 0x140220AAC (MiInsertUnusedSubsection.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140220C30 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiRemoveUnusedSubsection @ 0x14026EF44 (MiRemoveUnusedSubsection.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405C4B8C (MiReturnCrossPartitionSectionCharges.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14063D8B0 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall MiDereferenceControlAreaPfnList(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rdi
  unsigned __int8 v10; // r14
  __int64 inserted; // rax
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v14; // eax
  _DWORD *v15; // rcx
  int v16; // eax
  int v17; // ecx
  bool v18; // zf
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v27; // [rsp+70h] [rbp+18h]
  int v28; // [rsp+78h] [rbp+20h] BYREF

  v6 = a2;
  v7 = 0LL;
  v8 = 0LL;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 || !*(_QWORD *)(a1 + 64) )
  {
    v9 = 0LL;
    v27 = 0;
    if ( !*(_QWORD *)(a1 + 64) )
      goto LABEL_6;
  }
  else
  {
    v9 = a2;
  }
  v27 = 1;
LABEL_6:
  if ( (a4 & 2) != 0 )
  {
    v10 = 17;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(a2) = -1;
      LOBYTE(inserted) = ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 72, a2);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v28 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v14 = SchedulerAssist[6];
          SchedulerAssist[6] = v14 + 1;
          if ( v14 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 72), 0x1Fu) )
      {
        v15 = CurrentPrcb->SchedulerAssist;
        if ( v15 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v16 = v15[6] - 1;
            v15[6] = v16;
            if ( !v16 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        LOBYTE(a2) = -1;
        v28 = ExpWaitForSpinLockExclusiveAndAcquire(a1 + 72, a2);
      }
      v17 = *(_DWORD *)(a1 + 72);
      for ( LOBYTE(inserted) = v17; (v17 & 0xBFFFFFFF) != 0x80000000; LOBYTE(inserted) = v17 )
      {
        if ( (v17 & 0x40000000) == 0 )
          _InterlockedOr((volatile signed __int32 *)(a1 + 72), 0x40000000u);
        KeYieldProcessorEx(&v28);
        v17 = *(_DWORD *)(a1 + 72);
      }
      v8 = 0LL;
    }
  }
  else
  {
    LOBYTE(inserted) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    v10 = inserted;
  }
  if ( v9 )
  {
    v18 = (*(_DWORD *)(v9 + 104))-- == 1;
    if ( v18 && !*(_QWORD *)(v9 + 96) && (*(_BYTE *)(v6 + 34) & 1) == 0 && (*(_BYTE *)(v9 + 34) & 8) != 0 )
    {
      MiRemoveUnusedSubsection(v9);
      inserted = MiInsertUnusedSubsection(v9);
      v7 = inserted;
    }
  }
  --*(_QWORD *)(a1 + 32);
  if ( (a4 & 1) != 0 )
    LOBYTE(inserted) = MiCheckForControlAreaDeletion(a1);
  if ( v7 )
  {
    LOBYTE(inserted) = qword_140C51F48;
    v8 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  }
  if ( v10 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      LOBYTE(inserted) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
    else
      *(_DWORD *)(a1 + 72) = 0;
    v19 = KeGetCurrentPrcb();
    v20 = v19->SchedulerAssist;
    if ( v20 )
    {
      if ( v19->NestingLevel <= 1u )
      {
        LODWORD(inserted) = v20[6] - 1;
        v20[6] = inserted;
        if ( !(_DWORD)inserted )
          LOBYTE(inserted) = KiRemoveSystemWorkPriorityKick(v19);
      }
    }
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = v22->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (v10 + 1));
          v18 = (v24 & v23[5]) == 0;
          v23[5] &= v24;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
    }
    LOBYTE(inserted) = v10;
    __writecr8(v10);
  }
  if ( v7 )
    LOBYTE(inserted) = MiReturnCrossPartitionSectionCharges(v8, v27, v7);
  return inserted;
}
