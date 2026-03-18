/*
 * XREFs of MiReleaseFreshPage @ 0x140333A30
 * Callers:
 *     MiPrivateFixup @ 0x140239840 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x140239F98 (MiResolvePageFileFault.c)
 *     MiFreePageChain @ 0x14023C1C4 (MiFreePageChain.c)
 *     MiFreeLargeZeroPages @ 0x14024F714 (MiFreeLargeZeroPages.c)
 *     MiMakeDriverPagesPrivate @ 0x14025290C (MiMakeDriverPagesPrivate.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x1402A6D00 (MiLockCode.c)
 *     MiMakePageAvoidRead @ 0x1402A77C0 (MiMakePageAvoidRead.c)
 *     MiFinishHardFault @ 0x1402C80B0 (MiFinishHardFault.c)
 *     MiSwapStackPage @ 0x14032576C (MiSwapStackPage.c)
 *     MiFinalizeImageHeaderPage @ 0x140332CF0 (MiFinalizeImageHeaderPage.c)
 *     MiDeleteUltraMapContext @ 0x1403338F0 (MiDeleteUltraMapContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x14033404C (MiCreateUltraThreadContextHelper.c)
 *     MiGetPageTablePages @ 0x140336880 (MiGetPageTablePages.c)
 *     MiAllocateKernelStackPages @ 0x140348E30 (MiAllocateKernelStackPages.c)
 *     MiClaimPhysicalRun @ 0x14034ACCC (MiClaimPhysicalRun.c)
 *     MiTradeTransitionPage @ 0x140350BC0 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiAllocateMdlPagesByLists @ 0x140374584 (MiAllocateMdlPagesByLists.c)
 *     MiSwitchToTransition @ 0x140538414 (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x14053BC6C (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x140546684 (MiCompleteSecureProcessFault.c)
 *     MiSwapNumaStandbyPage @ 0x14054F900 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x140554344 (MiIdealClusterPage.c)
 *     MiFreeReadListPages @ 0x1406584B4 (MiFreeReadListPages.c)
 *     MiFreeReadListPageList @ 0x14065853C (MiFreeReadListPageList.c)
 *     MiInitializeCacheFlushing @ 0x140A53504 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiReturnFreeZeroPage @ 0x14034D2F0 (MiReturnFreeZeroPage.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
