/*
 * XREFs of MiSetPfnBlink @ 0x14027AF70
 * Callers:
 *     MiGetPageChain @ 0x1402121E0 (MiGetPageChain.c)
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     MiBuildMdlForMappedFileFault @ 0x1402272A0 (MiBuildMdlForMappedFileFault.c)
 *     MiReplenishPageSlist @ 0x1402EA3B0 (MiReplenishPageSlist.c)
 *     MiGetHardFaultPages @ 0x140325E70 (MiGetHardFaultPages.c)
 *     MiResolvePageFileFault @ 0x1403432DC (MiResolvePageFileFault.c)
 *     MiReplaceTransitionPage @ 0x14034B1EC (MiReplaceTransitionPage.c)
 *     MiReInitializeFreeSlabPfn @ 0x14037230C (MiReInitializeFreeSlabPfn.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140381E20 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDiscardTransitionPteEx @ 0x140385624 (MiDiscardTransitionPteEx.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403EEC18 (MiConvertEntireLargePageToSmall.c)
 *     MiSwitchToTransition @ 0x1405343F4 (MiSwitchToTransition.c)
 *     MiGetEnclavePage @ 0x140544BB8 (MiGetEnclavePage.c)
 *     MiReturnEnclavePage @ 0x140545900 (MiReturnEnclavePage.c)
 *     MiUnlinkPageFromBadList @ 0x140549A20 (MiUnlinkPageFromBadList.c)
 *     MiSwapNumaStandbyPage @ 0x14054B8E0 (MiSwapNumaStandbyPage.c)
 *     MiPfPrepareSequentialReadList @ 0x14062E990 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetPfnBlink(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  unsigned __int64 result; // rax
  signed __int64 v6; // rdx
  signed __int64 v7; // r8
  signed __int64 v8; // rcx

  v3 = a2 & 0xFFFFFFFFFLL;
  if ( a3 == 1 )
  {
    result = v3 | *(_QWORD *)(a1 + 24) & 0xFFFFFFF000000000uLL;
    *(_QWORD *)(a1 + 24) = result;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v3 | v6 & 0xFFFFFFF000000000uLL, v6);
    v7 = result;
    if ( v6 != result )
    {
      do
      {
        v8 = v7;
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(a1 + 24),
                   v3 | v7 & 0xFFFFFFF000000000uLL,
                   v7);
        v7 = result;
      }
      while ( v8 != result );
    }
  }
  return result;
}
