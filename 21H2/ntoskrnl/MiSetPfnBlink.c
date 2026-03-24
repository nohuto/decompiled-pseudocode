/*
 * XREFs of MiSetPfnBlink @ 0x140318130
 * Callers:
 *     MiGetPageChain @ 0x140212D10 (MiGetPageChain.c)
 *     MiUnlinkPageFromList @ 0x1402178B0 (MiUnlinkPageFromList.c)
 *     MiBuildMdlForMappedFileFault @ 0x14023DDD0 (MiBuildMdlForMappedFileFault.c)
 *     MiReplaceTransitionPage @ 0x14026D370 (MiReplaceTransitionPage.c)
 *     MiResolvePageFileFault @ 0x14028AF68 (MiResolvePageFileFault.c)
 *     MiGetHardFaultPages @ 0x1402E7D84 (MiGetHardFaultPages.c)
 *     MiReplenishPageSlist @ 0x140318700 (MiReplenishPageSlist.c)
 *     MiReInitializeFreeSlabPfn @ 0x1403759EC (MiReInitializeFreeSlabPfn.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385120 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDiscardTransitionPteEx @ 0x140388E94 (MiDiscardTransitionPteEx.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F5C28 (MiConvertEntireLargePageToSmall.c)
 *     MiSwitchToTransition @ 0x140539F14 (MiSwitchToTransition.c)
 *     MiGetEnclavePage @ 0x14054A6D8 (MiGetEnclavePage.c)
 *     MiReturnEnclavePage @ 0x14054B420 (MiReturnEnclavePage.c)
 *     MiUnlinkPageFromBadList @ 0x14054F540 (MiUnlinkPageFromBadList.c)
 *     MiSwapNumaStandbyPage @ 0x1405513D0 (MiSwapNumaStandbyPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EDDD0 (MiPfPrepareSequentialReadList.c)
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
