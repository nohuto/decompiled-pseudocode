/*
 * XREFs of MiChangePageAttribute @ 0x1403041E4
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x140210850 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x140212D10 (MiGetPageChain.c)
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiMigratePfn @ 0x1402185F0 (MiMigratePfn.c)
 *     MiMapPagesToZero @ 0x140234070 (MiMapPagesToZero.c)
 *     MiCoalesceFreePages @ 0x140235CA0 (MiCoalesceFreePages.c)
 *     MiSetPfnOwnedAndActive @ 0x14023BC40 (MiSetPfnOwnedAndActive.c)
 *     MiInitializeHardFaultPfn @ 0x14023E5A0 (MiInitializeHardFaultPfn.c)
 *     MiAllocateKernelStackPages @ 0x14023E800 (MiAllocateKernelStackPages.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     MiCopyPage @ 0x140240220 (MiCopyPage.c)
 *     MiInitializePfn @ 0x140241A00 (MiInitializePfn.c)
 *     MiFinalizePageAttribute @ 0x14026E434 (MiFinalizePageAttribute.c)
 *     MiCopySinglePage @ 0x1402B4BC4 (MiCopySinglePage.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1402E3FE0 (MiPageAttributeBatchChangeNeeded.c)
 *     MiZeroPhysicalPage @ 0x1402E6380 (MiZeroPhysicalPage.c)
 *     MiInitializeReadInProgressPfn @ 0x1402FBF30 (MiInitializeReadInProgressPfn.c)
 *     MiDeleteClusterSection @ 0x1403003E0 (MiDeleteClusterSection.c)
 *     MiMakePageAvoidRead @ 0x140324070 (MiMakePageAvoidRead.c)
 *     MiDeleteClusterPage @ 0x14032B830 (MiDeleteClusterPage.c)
 *     MiFillCombinePage @ 0x14036B00C (MiFillCombinePage.c)
 *     MiAddExpansionNonPagedPool @ 0x1403B6234 (MiAddExpansionNonPagedPool.c)
 *     MiIncrementAweMapCount @ 0x14054C674 (MiIncrementAweMapCount.c)
 *     MiBuildForkPageTable @ 0x140557FCC (MiBuildForkPageTable.c)
 *     MiDuplicateCloneLeaf @ 0x14055A234 (MiDuplicateCloneLeaf.c)
 *     MiComputeOptimalZeroPath @ 0x140A548A8 (MiComputeOptimalZeroPath.c)
 * Callees:
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiAbortCombineScan @ 0x140303770 (MiAbortCombineScan.c)
 *     MiPageCombiningActive @ 0x140303820 (MiPageCombiningActive.c)
 *     MiFlushCacheForAttributeChange @ 0x140303848 (MiFlushCacheForAttributeChange.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14030438C (MiFlushEntireTbDueToAttributeChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiChangePageAttribute(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char v4; // si
  int v5; // r15d
  unsigned __int8 v7; // bl
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned int v13; // eax
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v17; // r9
  int v18; // eax
  bool v19; // zf
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  signed __int32 v25[14]; // [rsp+0h] [rbp-38h] BYREF

  v4 = a3;
  v5 = a2;
  if ( (a3 & 1) != 0 || (struct _KTHREAD *)qword_140C4E708 == KeGetCurrentThread() )
    v7 = 17;
  else
    v7 = MiLockPageInline(a1, a2, a3, a4);
  v8 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( MiPageCombiningActive(0LL) )
  {
    MiAbortCombineScan(a1, v9, v11);
    LOBYTE(v11) = *(_BYTE *)(a1 + 34);
    v4 = -5;
  }
  LOBYTE(v13) = (_BYTE)v5 << 6;
  LOBYTE(v11) = ((_BYTE)v5 << 6) | v11 & 0x3F;
  *(_BYTE *)(a1 + 34) = v11;
  if ( v8 != 3 && (v4 & 4) == 0 )
  {
    if ( (v4 & 2) != 0
      || (v10 = *(_BYTE *)(a1 + 31) & 0xF,
          _InterlockedOr(v25, 0),
          v13 = ((_BYTE)KiTbFlushTimeStamp - (_BYTE)v10) & 0xF,
          v13 <= 2)
      && ((v10 & 1) != 0 || v13 < 2) )
    {
      LOBYTE(v13) = MiFlushEntireTbDueToAttributeChange(v10, 2LL, v11, SchedulerAssist);
    }
    if ( v8 == 1 )
    {
      ++dword_140C4DF08;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      MiFlushCacheForAttributeChange((a1 + 0x58000000000LL) / 48, 1LL, v5, (__int64)SchedulerAssist);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v15 = KeGetCurrentIrql();
          if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v17 = CurrentPrcb->SchedulerAssist;
            v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v19 = (v18 & v17[5]) == 0;
            v17[5] &= v18;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      LOBYTE(v13) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  if ( v7 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v20 = KeGetCurrentIrql();
        if ( v20 <= 0xFu && v7 <= 0xFu && v20 >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          v22 = v21->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << (v7 + 1));
          v19 = (v23 & v22[5]) == 0;
          v22[5] &= v23;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
    }
    LOBYTE(v13) = v7;
    __writecr8(v7);
  }
  return v13;
}
