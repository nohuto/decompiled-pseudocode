/*
 * XREFs of MiChangePageAttribute @ 0x14030EF34
 * Callers:
 *     MiCopySinglePage @ 0x140232D74 (MiCopySinglePage.c)
 *     MiFinalizePageAttribute @ 0x14025C3D4 (MiFinalizePageAttribute.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140295330 (MiPageAttributeBatchChangeNeeded.c)
 *     MiZeroPhysicalPage @ 0x1402976D0 (MiZeroPhysicalPage.c)
 *     MiCompletePrivateZeroFault @ 0x1402B5150 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x1402B7610 (MiGetPageChain.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiMigratePfn @ 0x1402BCEF0 (MiMigratePfn.c)
 *     MiMapPagesToZero @ 0x1402D88C0 (MiMapPagesToZero.c)
 *     MiCoalesceFreePages @ 0x1402DA4F0 (MiCoalesceFreePages.c)
 *     MiSetPfnOwnedAndActive @ 0x1402E0490 (MiSetPfnOwnedAndActive.c)
 *     MiInitializeHardFaultPfn @ 0x1402E2DF0 (MiInitializeHardFaultPfn.c)
 *     MiAllocateKernelStackPages @ 0x1402E3050 (MiAllocateKernelStackPages.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     MiCopyPage @ 0x1402E4A70 (MiCopyPage.c)
 *     MiInitializePfn @ 0x1402E6250 (MiInitializePfn.c)
 *     MiInitializeReadInProgressPfn @ 0x140306C80 (MiInitializeReadInProgressPfn.c)
 *     MiDeleteClusterSection @ 0x14030B130 (MiDeleteClusterSection.c)
 *     MiMakePageAvoidRead @ 0x14032EDC0 (MiMakePageAvoidRead.c)
 *     MiDeleteClusterPage @ 0x140336580 (MiDeleteClusterPage.c)
 *     MiFillCombinePage @ 0x14036B1BC (MiFillCombinePage.c)
 *     MiAddExpansionNonPagedPool @ 0x1403B63A4 (MiAddExpansionNonPagedPool.c)
 *     MiIncrementAweMapCount @ 0x14054C8B4 (MiIncrementAweMapCount.c)
 *     MiBuildForkPageTable @ 0x14055820C (MiBuildForkPageTable.c)
 *     MiDuplicateCloneLeaf @ 0x14055A474 (MiDuplicateCloneLeaf.c)
 *     MiComputeOptimalZeroPath @ 0x140A558A8 (MiComputeOptimalZeroPath.c)
 * Callees:
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiAbortCombineScan @ 0x14030E4C0 (MiAbortCombineScan.c)
 *     MiPageCombiningActive @ 0x14030E570 (MiPageCombiningActive.c)
 *     MiFlushCacheForAttributeChange @ 0x14030E598 (MiFlushCacheForAttributeChange.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14030F0DC (MiFlushEntireTbDueToAttributeChange.c)
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
  __int64 v12; // r9
  unsigned int v13; // eax
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v18; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  signed __int32 v26[14]; // [rsp+0h] [rbp-38h] BYREF

  v4 = a3;
  v5 = a2;
  if ( (a3 & 1) != 0 || (struct _KTHREAD *)qword_140C4E748 == KeGetCurrentThread() )
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
          _InterlockedOr(v26, 0),
          v13 = ((_BYTE)KiTbFlushTimeStamp - (_BYTE)v10) & 0xF,
          v13 <= 2)
      && ((v10 & 1) != 0 || v13 < 2) )
    {
      LOBYTE(v13) = MiFlushEntireTbDueToAttributeChange(v10, 2LL, v11, v12);
    }
    if ( v8 == 1 )
    {
      ++dword_140C4DF48;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      MiFlushCacheForAttributeChange((a1 + 0x58000000000LL) / 48, 1LL, v5);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v16 = KeGetCurrentIrql();
          if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v18 = CurrentPrcb->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v20 = (v19 & v18[5]) == 0;
            v18[5] &= v19;
            if ( v20 )
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
        v21 = KeGetCurrentIrql();
        if ( v21 <= 0xFu && v7 <= 0xFu && v21 >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = v22->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (v7 + 1));
          v20 = (v24 & v23[5]) == 0;
          v23[5] &= v24;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
    }
    LOBYTE(v13) = v7;
    __writecr8(v7);
  }
  return v13;
}
