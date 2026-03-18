/*
 * XREFs of MiReleaseFreshPage @ 0x1402E1668
 * Callers:
 *     MiClaimPhysicalRun @ 0x140224DD8 (MiClaimPhysicalRun.c)
 *     MiFinishHardFault @ 0x14022AA00 (MiFinishHardFault.c)
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x140231A50 (MiLockCode.c)
 *     MiMakePageAvoidRead @ 0x140232510 (MiMakePageAvoidRead.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiAllocateKernelStackPages @ 0x1402B7180 (MiAllocateKernelStackPages.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E0360 (MiMakeDriverPagesPrivate.c)
 *     MiFinalizeImageHeaderPage @ 0x1402E0BD8 (MiFinalizeImageHeaderPage.c)
 *     MiFreeLargeZeroPages @ 0x1402E13CC (MiFreeLargeZeroPages.c)
 *     MiDeleteUltraMapContext @ 0x1402E1528 (MiDeleteUltraMapContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402E1DB8 (MiCreateUltraThreadContextHelper.c)
 *     MiGetPageTablePages @ 0x1402E2D70 (MiGetPageTablePages.c)
 *     MiFreePageChain @ 0x140312420 (MiFreePageChain.c)
 *     MiResolvePageFileFault @ 0x140313F9C (MiResolvePageFileFault.c)
 *     MiPrivateFixup @ 0x140314F08 (MiPrivateFixup.c)
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x14031D0D8 (MiTradeTransitionPage.c)
 *     MiSwapStackPage @ 0x140354AAC (MiSwapStackPage.c)
 *     MiAllocateMdlPagesByLists @ 0x140372634 (MiAllocateMdlPagesByLists.c)
 *     MiSwitchToTransition @ 0x140534A44 (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x14053829C (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x140542CB4 (MiCompleteSecureProcessFault.c)
 *     MiSwapNumaStandbyPage @ 0x14054BF30 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x140550974 (MiIdealClusterPage.c)
 *     MiFreeReadListPages @ 0x1406093AC (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x140609434 (MiFreeReadListPageList.c)
 *     MiInitializeCacheFlushing @ 0x140A52E84 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiReturnFreeZeroPage @ 0x14031C568 (MiReturnFreeZeroPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
