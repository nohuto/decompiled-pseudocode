/*
 * XREFs of MiReleaseFreshPage @ 0x140297AC4
 * Callers:
 *     MiResolvePageFileFault @ 0x140208108 (MiResolvePageFileFault.c)
 *     MiFreePageChain @ 0x140209074 (MiFreePageChain.c)
 *     MiPrivateFixup @ 0x140209BC8 (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x14024483C (MiSwapStackPage.c)
 *     MiTradeTransitionPage @ 0x140259688 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402944B4 (MiCreateUltraThreadContextHelper.c)
 *     MiGetPageTablePages @ 0x140296CF0 (MiGetPageTablePages.c)
 *     MiDeleteUltraMapContext @ 0x140297984 (MiDeleteUltraMapContext.c)
 *     MiMakeDriverPagesPrivate @ 0x140298244 (MiMakeDriverPagesPrivate.c)
 *     MiFinalizeImageHeaderPage @ 0x140298F3C (MiFinalizeImageHeaderPage.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiFinishHardFault @ 0x1402DE0E0 (MiFinishHardFault.c)
 *     MiAllocateKernelStackPages @ 0x1402E3050 (MiAllocateKernelStackPages.c)
 *     MiFreeLargeZeroPages @ 0x1403080A4 (MiFreeLargeZeroPages.c)
 *     MiClaimPhysicalRun @ 0x14030B77C (MiClaimPhysicalRun.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x14032E300 (MiLockCode.c)
 *     MiMakePageAvoidRead @ 0x14032EDC0 (MiMakePageAvoidRead.c)
 *     MiAllocateMdlPagesByLists @ 0x140374264 (MiAllocateMdlPagesByLists.c)
 *     MiSwitchToTransition @ 0x14053A154 (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x14053D9AC (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x1405483C4 (MiCompleteSecureProcessFault.c)
 *     MiSwapNumaStandbyPage @ 0x140551610 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x140556054 (MiIdealClusterPage.c)
 *     MiFreeReadListPages @ 0x1406FFF84 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x14070000C (MiFreeReadListPageList.c)
 *     MiInitializeCacheFlushing @ 0x140A55B0C (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiReturnFreeZeroPage @ 0x14030DDA0 (MiReturnFreeZeroPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReleaseFreshPage(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v6; // zf

  v2 = (unsigned __int8)MiLockPageInline(a1);
  MiReturnFreeZeroPage(a1, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v6 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v6 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
