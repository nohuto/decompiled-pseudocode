/*
 * XREFs of MiChangePageAttribute @ 0x140350E98
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x14020FD20 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x1402121E0 (MiGetPageChain.c)
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiMigratePfn @ 0x140217F80 (MiMigratePfn.c)
 *     MiCopyPage @ 0x140221A00 (MiCopyPage.c)
 *     MiAllocateKernelStackPages @ 0x140224500 (MiAllocateKernelStackPages.c)
 *     MiInitializePfn @ 0x1402253F0 (MiInitializePfn.c)
 *     MiInitializeHardFaultPfn @ 0x140227000 (MiInitializeHardFaultPfn.c)
 *     MiDeleteClusterSection @ 0x140280410 (MiDeleteClusterSection.c)
 *     MiMakePageAvoidRead @ 0x14028B560 (MiMakePageAvoidRead.c)
 *     MiDeleteClusterPage @ 0x14028DDB0 (MiDeleteClusterPage.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiMapPagesToZero @ 0x140296210 (MiMapPagesToZero.c)
 *     MiCoalesceFreePages @ 0x140297E40 (MiCoalesceFreePages.c)
 *     MiSetPfnOwnedAndActive @ 0x1402B8600 (MiSetPfnOwnedAndActive.c)
 *     MiInitializeReadInProgressPfn @ 0x1402BAAF0 (MiInitializeReadInProgressPfn.c)
 *     MiCopySinglePage @ 0x140302BB4 (MiCopySinglePage.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1403454FC (MiPageAttributeBatchChangeNeeded.c)
 *     MiFinalizePageAttribute @ 0x14034BF54 (MiFinalizePageAttribute.c)
 *     MiZeroPhysicalPage @ 0x1403510C0 (MiZeroPhysicalPage.c)
 *     MiFillCombinePage @ 0x1403683BC (MiFillCombinePage.c)
 *     MiAddExpansionNonPagedPool @ 0x1403AC5C4 (MiAddExpansionNonPagedPool.c)
 *     MiIncrementAweMapCount @ 0x140546B54 (MiIncrementAweMapCount.c)
 *     MiBuildForkPageTable @ 0x1405524DC (MiBuildForkPageTable.c)
 *     MiDuplicateCloneLeaf @ 0x140554744 (MiDuplicateCloneLeaf.c)
 *     MiComputeOptimalZeroPath @ 0x140A4CF20 (MiComputeOptimalZeroPath.c)
 * Callees:
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140350E3C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiAbortCombineScan @ 0x140353270 (MiAbortCombineScan.c)
 *     MiPageCombiningActive @ 0x140353320 (MiPageCombiningActive.c)
 *     MiFlushCacheForAttributeChange @ 0x140353348 (MiFlushCacheForAttributeChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiChangePageAttribute(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char v4; // si
  unsigned int v5; // r15d
  unsigned __int8 v7; // bl
  int v8; // r14d
  char v9; // r8
  unsigned int v10; // eax
  char v11; // cl
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v16; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  signed __int32 v24[14]; // [rsp+0h] [rbp-38h] BYREF

  v4 = a3;
  v5 = a2;
  if ( (a3 & 1) != 0 || (struct _KTHREAD *)qword_140C4E648 == KeGetCurrentThread() )
    v7 = 17;
  else
    v7 = MiLockPageInline(a1, a2, a3, a4);
  v8 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( (unsigned int)MiPageCombiningActive(
                       0LL,
                       (unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
                       *(unsigned __int8 *)(a1 + 34)) )
  {
    MiAbortCombineScan(a1);
    v9 = *(_BYTE *)(a1 + 34);
    v4 = -5;
  }
  LOBYTE(v10) = (_BYTE)v5 << 6;
  *(_BYTE *)(a1 + 34) = ((_BYTE)v5 << 6) | v9 & 0x3F;
  if ( v8 != 3 && (v4 & 4) == 0 )
  {
    if ( (v4 & 2) != 0
      || (v11 = *(_BYTE *)(a1 + 31) & 0xF,
          _InterlockedOr(v24, 0),
          v10 = ((_BYTE)KiTbFlushTimeStamp - v11) & 0xF,
          v10 <= 2)
      && ((v11 & 1) != 0 || v10 < 2) )
    {
      LOBYTE(v10) = MiFlushEntireTbDueToAttributeChange();
    }
    if ( v8 == 1 )
    {
      ++dword_140C4DE48;
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
          v14 = KeGetCurrentIrql();
          if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v16 = CurrentPrcb->SchedulerAssist;
            v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v18 = (v17 & v16[5]) == 0;
            v16[5] &= v17;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      LOBYTE(v10) = CurrentIrql;
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
        v19 = KeGetCurrentIrql();
        if ( v19 <= 0xFu && v7 <= 0xFu && v19 >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << (v7 + 1));
          v18 = (v22 & v21[5]) == 0;
          v21[5] &= v22;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
    }
    LOBYTE(v10) = v7;
    __writecr8(v7);
  }
  return v10;
}
