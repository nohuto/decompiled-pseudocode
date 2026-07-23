/*
 * XREFs of MiGetContainingPageTable @ 0x1402E2CA0
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x14021ADB0 (MiDeleteNonPagedPoolPte.c)
 *     MiTrimSystemImagePages @ 0x14023CB80 (MiTrimSystemImagePages.c)
 *     MiInitializeTransitionPfn @ 0x14025C1CC (MiInitializeTransitionPfn.c)
 *     MiInitializeSystemPageTable @ 0x1402967D4 (MiInitializeSystemPageTable.c)
 *     MiDeletePteList @ 0x1402D6070 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402DB4B0 (MiDeletePteRun.c)
 *     MiAssignNonPagedPoolPte @ 0x1402E0240 (MiAssignNonPagedPoolPte.c)
 *     MiInitializeHardFaultPfn @ 0x1402E2DF0 (MiInitializeHardFaultPfn.c)
 *     MiLinkPoolCommitChain @ 0x140316290 (MiLinkPoolCommitChain.c)
 *     MmUnmapViewInSystemCache @ 0x14031E830 (MmUnmapViewInSystemCache.c)
 *     MiCompleteRestrictedImageFault @ 0x140327DF0 (MiCompleteRestrictedImageFault.c)
 *     MiWsleFree @ 0x140332C20 (MiWsleFree.c)
 *     MiDeleteValidSystemPage @ 0x140333B70 (MiDeleteValidSystemPage.c)
 *     MiConvertStandbyToProto @ 0x140367128 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14036A200 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x14036ACE4 (MiResolveProtoCombine.c)
 *     MiDecommitLargePoolVa @ 0x140370830 (MiDecommitLargePoolVa.c)
 *     MiInitializeUnusablePfns @ 0x1403B1150 (MiInitializeUnusablePfns.c)
 *     MiPfnRangeIsZero @ 0x1403B9D58 (MiPfnRangeIsZero.c)
 *     PnprCopyReservedMapping @ 0x14050F380 (PnprCopyReservedMapping.c)
 *     PnprRecopyMappingReserve @ 0x14050FA58 (PnprRecopyMappingReserve.c)
 *     MiSwitchToTransition @ 0x14053A154 (MiSwitchToTransition.c)
 *     MiMakeLargePageTable @ 0x14053DC54 (MiMakeLargePageTable.c)
 *     MmMapHotPatchTablePage @ 0x14053F6F0 (MmMapHotPatchTablePage.c)
 *     MiMapRetpolineStubs @ 0x14054427C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140544488 (MiUnmapRetpolineStubs.c)
 * Callees:
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 */

__int64 __fastcall MiGetContainingPageTable(unsigned __int64 a1)
{
  unsigned __int64 *v1; // r8
  unsigned __int64 v2; // r10
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r8
  struct _LIST_ENTRY *Flink; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  struct _LIST_ENTRY *v9; // r8
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v1 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v2 = 0xFFFFF6FB7DBED000uLL;
  v3 = *v1;
  v4 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)v1 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v1 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v7 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
      v8 = v3 | 0x20;
      if ( (v7 & 0x20) == 0 )
        v8 = v3;
      v3 = v8;
      if ( (v7 & 0x42) != 0 )
        v3 = v8 | 0x42;
    }
  }
  v13 = v3;
  if ( (unsigned __int64)&v13 >= v2
    && (unsigned __int64)&v13 <= v4
    && (unsigned int)MiPteHasShadow()
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    v9 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v9 )
    {
      v10 = *((_QWORD *)&v9->Flink + (((unsigned __int64)&v13 >> 3) & 0x1FF));
      v11 = v3 | 0x20;
      if ( (v10 & 0x20) == 0 )
        v11 = v3;
      v3 = v11;
      if ( (v10 & 0x42) != 0 )
        v3 = v11 | 0x42;
    }
  }
  return (v3 >> 12) & 0xFFFFFFFFFLL;
}
