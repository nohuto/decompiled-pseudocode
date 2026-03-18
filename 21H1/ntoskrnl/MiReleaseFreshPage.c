/*
 * XREFs of MiReleaseFreshPage @ 0x140326768
 * Callers:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiAllocateKernelStackPages @ 0x140224500 (MiAllocateKernelStackPages.c)
 *     MiClaimPhysicalRun @ 0x14027DE28 (MiClaimPhysicalRun.c)
 *     MiFinishHardFault @ 0x140283A50 (MiFinishHardFault.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x14028AAA0 (MiLockCode.c)
 *     MiMakePageAvoidRead @ 0x14028B560 (MiMakePageAvoidRead.c)
 *     MiSwapStackPage @ 0x140316FFC (MiSwapStackPage.c)
 *     MiMakeDriverPagesPrivate @ 0x140325460 (MiMakeDriverPagesPrivate.c)
 *     MiFinalizeImageHeaderPage @ 0x140325CD8 (MiFinalizeImageHeaderPage.c)
 *     MiFreeLargeZeroPages @ 0x1403264CC (MiFreeLargeZeroPages.c)
 *     MiDeleteUltraMapContext @ 0x140326628 (MiDeleteUltraMapContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x140326FF0 (MiCreateUltraThreadContextHelper.c)
 *     MiGetPageTablePages @ 0x1403290D0 (MiGetPageTablePages.c)
 *     MiFreePageChain @ 0x140341758 (MiFreePageChain.c)
 *     MiResolvePageFileFault @ 0x1403432DC (MiResolvePageFileFault.c)
 *     MiPrivateFixup @ 0x140344248 (MiPrivateFixup.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x14034C418 (MiTradeTransitionPage.c)
 *     MiAllocateMdlPagesByLists @ 0x140371824 (MiAllocateMdlPagesByLists.c)
 *     MiSwitchToTransition @ 0x1405343F4 (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x140537C4C (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x140542664 (MiCompleteSecureProcessFault.c)
 *     MiSwapNumaStandbyPage @ 0x14054B8E0 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x140550324 (MiIdealClusterPage.c)
 *     MiFreeReadListPages @ 0x14063E4FC (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x14063E584 (MiFreeReadListPageList.c)
 *     MiInitializeCacheFlushing @ 0x140A4D184 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiReturnFreeZeroPage @ 0x14034B8A8 (MiReturnFreeZeroPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReleaseFreshPage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf

  v4 = (unsigned __int8)MiLockPageInline(a1, a2, a3);
  MiReturnFreeZeroPage(a1, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v8 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
