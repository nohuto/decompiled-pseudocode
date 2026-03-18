/*
 * XREFs of MiGetContainingPageTable @ 0x14029C940
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x14029B2F0 (MmUnmapViewInSystemCache.c)
 *     MiInitializeHardFaultPfn @ 0x14029C7F0 (MiInitializeHardFaultPfn.c)
 *     MiCompleteRestrictedImageFault @ 0x1402A07F0 (MiCompleteRestrictedImageFault.c)
 *     MiWsleFree @ 0x1402AB620 (MiWsleFree.c)
 *     MiDeleteValidSystemPage @ 0x1402AC570 (MiDeleteValidSystemPage.c)
 *     MiDeletePteList @ 0x1402C0040 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402C5480 (MiDeletePteRun.c)
 *     MiAssignNonPagedPoolPte @ 0x1402CA210 (MiAssignNonPagedPoolPte.c)
 *     MiLinkPoolCommitChain @ 0x1402CB030 (MiLinkPoolCommitChain.c)
 *     MiDeleteNonPagedPoolPte @ 0x1403015D0 (MiDeleteNonPagedPoolPte.c)
 *     MiTrimSystemImagePages @ 0x14030D320 (MiTrimSystemImagePages.c)
 *     MiInitializeSystemPageTable @ 0x140336364 (MiInitializeSystemPageTable.c)
 *     MiInitializeTransitionPfn @ 0x14035090C (MiInitializeTransitionPfn.c)
 *     MiConvertStandbyToProto @ 0x140366CC8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140369DA0 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x14036A884 (MiResolveProtoCombine.c)
 *     MiDecommitLargePoolVa @ 0x1403705F0 (MiDecommitLargePoolVa.c)
 *     MiInitializeUnusablePfns @ 0x1403AB0E0 (MiInitializeUnusablePfns.c)
 *     MiPfnRangeIsZero @ 0x1403B91E8 (MiPfnRangeIsZero.c)
 *     PnprCopyReservedMapping @ 0x14050D610 (PnprCopyReservedMapping.c)
 *     PnprRecopyMappingReserve @ 0x14050DCE8 (PnprRecopyMappingReserve.c)
 *     MiSwitchToTransition @ 0x140538414 (MiSwitchToTransition.c)
 *     MiMakeLargePageTable @ 0x14053BF14 (MiMakeLargePageTable.c)
 *     MmMapHotPatchTablePage @ 0x14053D9B0 (MmMapHotPatchTablePage.c)
 *     MiMapRetpolineStubs @ 0x14054253C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140542748 (MiUnmapRetpolineStubs.c)
 * Callees:
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 */

__int64 __fastcall MiGetContainingPageTable(unsigned __int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r9
  struct _LIST_ENTRY *Flink; // rax
  __int64 v7; // rax
  struct _LIST_ENTRY *v8; // r8
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 >> 9;
  v2 = (v1 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = 0xFFFFF6FB7DBED000uLL;
  v4 = *(_QWORD *)v2;
  v5 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL
    && v2 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(v1, v4, v2, 0xFFFFF6FB7DBED7F8uLL)
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v7 = *((_QWORD *)&Flink->Flink + ((v2 >> 3) & 0x1FF));
      v2 = v4 | 0x20;
      if ( (v7 & 0x20) == 0 )
        v2 = v4;
      v4 = v2;
      if ( (v7 & 0x42) != 0 )
        v4 = v2 | 0x42;
    }
  }
  v12 = v4;
  if ( (unsigned __int64)&v12 >= v3
    && (unsigned __int64)&v12 <= v5
    && (unsigned int)MiPteHasShadow(&v12, v4, v2, v5)
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    v8 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v8 )
    {
      v9 = *((_QWORD *)&v8->Flink + (((unsigned __int64)&v12 >> 3) & 0x1FF));
      v10 = v4 | 0x20;
      if ( (v9 & 0x20) == 0 )
        v10 = v4;
      v4 = v10;
      if ( (v9 & 0x42) != 0 )
        v4 = v10 | 0x42;
    }
  }
  return (v4 >> 12) & 0xFFFFFFFFFLL;
}
