/*
 * XREFs of MiReleaseFreshPage @ 0x1402E6774
 * Callers:
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiFinishHardFault @ 0x140239890 (MiFinishHardFault.c)
 *     MiAllocateKernelStackPages @ 0x14023E800 (MiAllocateKernelStackPages.c)
 *     MiTradeTransitionPage @ 0x14026B6E8 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 *     MiResolvePageFileFault @ 0x14028AF68 (MiResolvePageFileFault.c)
 *     MiFreePageChain @ 0x14028BED4 (MiFreePageChain.c)
 *     MiPrivateFixup @ 0x14028CA28 (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x1402C605C (MiSwapStackPage.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402E3164 (MiCreateUltraThreadContextHelper.c)
 *     MiGetPageTablePages @ 0x1402E59A0 (MiGetPageTablePages.c)
 *     MiDeleteUltraMapContext @ 0x1402E6634 (MiDeleteUltraMapContext.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E6EF4 (MiMakeDriverPagesPrivate.c)
 *     MiFinalizeImageHeaderPage @ 0x1402E7BEC (MiFinalizeImageHeaderPage.c)
 *     MiFreeLargeZeroPages @ 0x1402FD354 (MiFreeLargeZeroPages.c)
 *     MiClaimPhysicalRun @ 0x140300A2C (MiClaimPhysicalRun.c)
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x1403235B0 (MiLockCode.c)
 *     MiMakePageAvoidRead @ 0x140324070 (MiMakePageAvoidRead.c)
 *     MiAllocateMdlPagesByLists @ 0x140374714 (MiAllocateMdlPagesByLists.c)
 *     MiSwitchToTransition @ 0x140539F14 (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x14053D76C (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x140548184 (MiCompleteSecureProcessFault.c)
 *     MiSwapNumaStandbyPage @ 0x1405513D0 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x140555E14 (MiIdealClusterPage.c)
 *     MiFreeReadListPages @ 0x1406E8BA4 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x1406E8C2C (MiFreeReadListPageList.c)
 *     MiInitializeCacheFlushing @ 0x140A54B0C (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiReturnFreeZeroPage @ 0x140303050 (MiReturnFreeZeroPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
