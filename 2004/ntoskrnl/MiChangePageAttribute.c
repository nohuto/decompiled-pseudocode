/*
 * XREFs of MiChangePageAttribute @ 0x1402F4EBC
 * Callers:
 *     MiDeleteClusterSection @ 0x1402273C0 (MiDeleteClusterSection.c)
 *     MiMakePageAvoidRead @ 0x140232510 (MiMakePageAvoidRead.c)
 *     MiDeleteClusterPage @ 0x140234D60 (MiDeleteClusterPage.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiMapPagesToZero @ 0x14023D1E0 (MiMapPagesToZero.c)
 *     MiCoalesceFreePages @ 0x14023EE10 (MiCoalesceFreePages.c)
 *     MiSetPfnOwnedAndActive @ 0x14025F5D0 (MiSetPfnOwnedAndActive.c)
 *     MiInitializeReadInProgressPfn @ 0x140261AC0 (MiInitializeReadInProgressPfn.c)
 *     MiCompletePrivateZeroFault @ 0x1402A2830 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x1402A4CF0 (MiGetPageChain.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiMigratePfn @ 0x1402AAA90 (MiMigratePfn.c)
 *     MiCopyPage @ 0x1402B4680 (MiCopyPage.c)
 *     MiAllocateKernelStackPages @ 0x1402B7180 (MiAllocateKernelStackPages.c)
 *     MiInitializePfn @ 0x1402B8070 (MiInitializePfn.c)
 *     MiInitializeHardFaultPfn @ 0x1402B9C80 (MiInitializeHardFaultPfn.c)
 *     MiZeroPhysicalPage @ 0x1402F50E4 (MiZeroPhysicalPage.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1403161BC (MiPageAttributeBatchChangeNeeded.c)
 *     MiFinalizePageAttribute @ 0x14031CC14 (MiFinalizePageAttribute.c)
 *     MiCopySinglePage @ 0x14033F9B4 (MiCopySinglePage.c)
 *     MiFillCombinePage @ 0x140368D7C (MiFillCombinePage.c)
 *     MiAddExpansionNonPagedPool @ 0x1403B2244 (MiAddExpansionNonPagedPool.c)
 *     MiIncrementAweMapCount @ 0x1405471A4 (MiIncrementAweMapCount.c)
 *     MiBuildForkPageTable @ 0x140552B2C (MiBuildForkPageTable.c)
 *     MiDuplicateCloneLeaf @ 0x140554D94 (MiDuplicateCloneLeaf.c)
 *     MiComputeOptimalZeroPath @ 0x140A52C20 (MiComputeOptimalZeroPath.c)
 * Callees:
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402F4E60 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiAbortCombineScan @ 0x1402F7290 (MiAbortCombineScan.c)
 *     MiPageCombiningActive @ 0x1402F7340 (MiPageCombiningActive.c)
 *     MiFlushCacheForAttributeChange @ 0x1402F7368 (MiFlushCacheForAttributeChange.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiChangePageAttribute(__int64 a1, unsigned int a2, char a3)
{
  char v3; // si
  unsigned __int8 v6; // bl
  int v7; // r14d
  char v8; // r8
  unsigned int v9; // eax
  char v10; // cl
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v15; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax
  signed __int32 v23[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = a3;
  if ( (a3 & 1) != 0 || (struct _KTHREAD *)qword_140C4E508 == KeGetCurrentThread() )
    v6 = 17;
  else
    v6 = MiLockPageInline(a1);
  v7 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( (unsigned int)MiPageCombiningActive(
                       0LL,
                       (unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
                       *(unsigned __int8 *)(a1 + 34)) )
  {
    MiAbortCombineScan(a1);
    v8 = *(_BYTE *)(a1 + 34);
    v3 = -5;
  }
  LOBYTE(v9) = (_BYTE)a2 << 6;
  *(_BYTE *)(a1 + 34) = ((_BYTE)a2 << 6) | v8 & 0x3F;
  if ( v7 != 3 && (v3 & 4) == 0 )
  {
    if ( (v3 & 2) != 0
      || (v10 = *(_BYTE *)(a1 + 31) & 0xF, _InterlockedOr(v23, 0), v9 = ((_BYTE)KiTbFlushTimeStamp - v10) & 0xF, v9 <= 2)
      && ((v10 & 1) != 0 || v9 < 2) )
    {
      LOBYTE(v9) = MiFlushEntireTbDueToAttributeChange();
    }
    if ( v7 == 1 )
    {
      ++dword_140C4DD08;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      MiFlushCacheForAttributeChange((a1 + 0x58000000000LL) / 48, 1LL, a2);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v13 = KeGetCurrentIrql();
          if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v15 = CurrentPrcb->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v17 = (v16 & v15[5]) == 0;
            v15[5] &= v16;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      LOBYTE(v9) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  if ( v6 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && v6 <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = v19->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << (v6 + 1));
          v17 = (v21 & v20[5]) == 0;
          v20[5] &= v21;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
    }
    LOBYTE(v9) = v6;
    __writecr8(v6);
  }
  return v9;
}
