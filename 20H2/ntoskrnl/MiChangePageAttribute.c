/*
 * XREFs of MiChangePageAttribute @ 0x14023DCD0
 * Callers:
 *     MiInitializeReadInProgressPfn @ 0x14024D760 (MiInitializeReadInProgressPfn.c)
 *     MiCopySinglePage @ 0x1402516D4 (MiCopySinglePage.c)
 *     MiCompletePrivateZeroFault @ 0x140271B70 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x140274030 (MiGetPageChain.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiMigratePfn @ 0x140279DD0 (MiMigratePfn.c)
 *     MiInitializePfn @ 0x14028E040 (MiInitializePfn.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MiCopyPage @ 0x1402907D0 (MiCopyPage.c)
 *     MiInitializeHardFaultPfn @ 0x14029C7F0 (MiInitializeHardFaultPfn.c)
 *     MiMakePageAvoidRead @ 0x1402A77C0 (MiMakePageAvoidRead.c)
 *     MiDeleteClusterPage @ 0x1402AEC40 (MiDeleteClusterPage.c)
 *     MiMapPagesToZero @ 0x1402C2890 (MiMapPagesToZero.c)
 *     MiCoalesceFreePages @ 0x1402C44C0 (MiCoalesceFreePages.c)
 *     MiSetPfnOwnedAndActive @ 0x1402CA460 (MiSetPfnOwnedAndActive.c)
 *     MiZeroPhysicalPage @ 0x1403332D4 (MiZeroPhysicalPage.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140334EC0 (MiPageAttributeBatchChangeNeeded.c)
 *     MiAllocateKernelStackPages @ 0x140348E30 (MiAllocateKernelStackPages.c)
 *     MiDeleteClusterSection @ 0x14034A680 (MiDeleteClusterSection.c)
 *     MiFinalizePageAttribute @ 0x140350B14 (MiFinalizePageAttribute.c)
 *     MiFillCombinePage @ 0x14036AD5C (MiFillCombinePage.c)
 *     MiAddExpansionNonPagedPool @ 0x1403B4BB4 (MiAddExpansionNonPagedPool.c)
 *     MiIncrementAweMapCount @ 0x14054AB74 (MiIncrementAweMapCount.c)
 *     MiBuildForkPageTable @ 0x1405564FC (MiBuildForkPageTable.c)
 *     MiDuplicateCloneLeaf @ 0x140558764 (MiDuplicateCloneLeaf.c)
 *     MiComputeOptimalZeroPath @ 0x140A532A0 (MiComputeOptimalZeroPath.c)
 * Callees:
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402E9FB8 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiAbortCombineScan @ 0x140349794 (MiAbortCombineScan.c)
 *     MiPageCombiningActive @ 0x140349844 (MiPageCombiningActive.c)
 *     MiFlushCacheForAttributeChange @ 0x14034986C (MiFlushCacheForAttributeChange.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiChangePageAttribute(__int64 a1, unsigned int a2, char a3)
{
  char v3; // si
  unsigned __int8 v6; // bl
  int v7; // r14d
  __int64 v8; // rcx
  char v9; // r8
  unsigned int v10; // eax
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
  if ( (a3 & 1) != 0 || (struct _KTHREAD *)qword_140C4E588 == KeGetCurrentThread() )
    v6 = 17;
  else
    v6 = MiLockPageInline(a1);
  v7 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( (unsigned int)MiPageCombiningActive(0LL) )
  {
    MiAbortCombineScan(a1);
    v9 = *(_BYTE *)(a1 + 34);
    v3 = -5;
  }
  LOBYTE(v10) = (_BYTE)a2 << 6;
  *(_BYTE *)(a1 + 34) = ((_BYTE)a2 << 6) | v9 & 0x3F;
  if ( v7 != 3 && (v3 & 4) == 0 )
  {
    if ( (v3 & 2) != 0
      || (v8 = *(_BYTE *)(a1 + 31) & 0xF,
          _InterlockedOr(v23, 0),
          v10 = ((_BYTE)KiTbFlushTimeStamp - (_BYTE)v8) & 0xF,
          v10 <= 2)
      && ((v8 & 1) != 0 || v10 < 2) )
    {
      LOBYTE(v10) = MiFlushEntireTbDueToAttributeChange(v8, 2LL);
    }
    if ( v7 == 1 )
    {
      ++dword_140C4DD88;
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
      LOBYTE(v10) = CurrentIrql;
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
    LOBYTE(v10) = v6;
    __writecr8(v6);
  }
  return v10;
}
