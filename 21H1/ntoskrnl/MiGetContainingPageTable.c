/*
 * XREFs of MiGetContainingPageTable @ 0x140227150
 * Callers:
 *     MiWsleFree @ 0x140220E30 (MiWsleFree.c)
 *     MiLinkPoolCommitChain @ 0x140222320 (MiLinkPoolCommitChain.c)
 *     MiDeleteValidSystemPage @ 0x1402235A0 (MiDeleteValidSystemPage.c)
 *     MiInitializeHardFaultPfn @ 0x140227000 (MiInitializeHardFaultPfn.c)
 *     MiDeletePteList @ 0x1402939C0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140298E00 (MiDeletePteRun.c)
 *     MmUnmapViewInSystemCache @ 0x1402A0380 (MmUnmapViewInSystemCache.c)
 *     MiCompleteRestrictedImageFault @ 0x1402B4EE0 (MiCompleteRestrictedImageFault.c)
 *     MiAssignNonPagedPoolPte @ 0x1402B83B0 (MiAssignNonPagedPoolPte.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402F2060 (MiDeleteNonPagedPoolPte.c)
 *     MiTrimSystemImagePages @ 0x1403251CC (MiTrimSystemImagePages.c)
 *     MiInitializeSystemPageTable @ 0x140328C34 (MiInitializeSystemPageTable.c)
 *     MiInitializeTransitionPfn @ 0x14034BD4C (MiInitializeTransitionPfn.c)
 *     MiConvertStandbyToProto @ 0x140364328 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x140367EE4 (MiResolveProtoCombine.c)
 *     MiDecommitLargePoolVa @ 0x14036DA70 (MiDecommitLargePoolVa.c)
 *     MiInitializeUnusablePfns @ 0x1403AEB10 (MiInitializeUnusablePfns.c)
 *     MiPfnRangeIsZero @ 0x1403B5918 (MiPfnRangeIsZero.c)
 *     PnprCopyReservedMapping @ 0x140509690 (PnprCopyReservedMapping.c)
 *     PnprRecopyMappingReserve @ 0x140509D68 (PnprRecopyMappingReserve.c)
 *     MiSwitchToTransition @ 0x1405343F4 (MiSwitchToTransition.c)
 *     MiMakeLargePageTable @ 0x140537EF4 (MiMakeLargePageTable.c)
 *     MmMapHotPatchTablePage @ 0x140539990 (MmMapHotPatchTablePage.c)
 *     MiMapRetpolineStubs @ 0x14053E51C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x14053E728 (MiUnmapRetpolineStubs.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 */

__int64 __fastcall MiGetContainingPageTable(unsigned __int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 *v2; // r8
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r8
  struct _LIST_ENTRY *Flink; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  struct _LIST_ENTRY *v10; // r8
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 >> 9;
  v2 = (unsigned __int64 *)((v1 & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v3 = 0xFFFFF6FB7DBED000uLL;
  v4 = *v2;
  v5 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)v2 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v2 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(v1, v4)
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v8 = *((_QWORD *)&Flink->Flink + ((v6 >> 3) & 0x1FF));
      v9 = v4 | 0x20;
      if ( (v8 & 0x20) == 0 )
        v9 = v4;
      v4 = v9;
      if ( (v8 & 0x42) != 0 )
        v4 = v9 | 0x42;
    }
  }
  v14 = v4;
  if ( (unsigned __int64)&v14 >= v3
    && (unsigned __int64)&v14 <= v5
    && (unsigned int)MiPteHasShadow(&v14, v4)
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    v10 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v10 )
    {
      v11 = *((_QWORD *)&v10->Flink + (((unsigned __int64)&v14 >> 3) & 0x1FF));
      v12 = v4 | 0x20;
      if ( (v11 & 0x20) == 0 )
        v12 = v4;
      v4 = v12;
      if ( (v11 & 0x42) != 0 )
        v4 = v12 | 0x42;
    }
  }
  return (v4 >> 12) & 0xFFFFFFFFFLL;
}
