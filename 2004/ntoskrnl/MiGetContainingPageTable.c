/*
 * XREFs of MiGetContainingPageTable @ 0x1402B9DD0
 * Callers:
 *     MiDeletePteList @ 0x14023A990 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x14023FDD0 (MiDeletePteRun.c)
 *     MmUnmapViewInSystemCache @ 0x140247350 (MmUnmapViewInSystemCache.c)
 *     MiCompleteRestrictedImageFault @ 0x14025BEB0 (MiCompleteRestrictedImageFault.c)
 *     MiAssignNonPagedPoolPte @ 0x14025F380 (MiAssignNonPagedPoolPte.c)
 *     MiWsleFree @ 0x1402B3AB0 (MiWsleFree.c)
 *     MiLinkPoolCommitChain @ 0x1402B4FA0 (MiLinkPoolCommitChain.c)
 *     MiDeleteValidSystemPage @ 0x1402B6220 (MiDeleteValidSystemPage.c)
 *     MiInitializeHardFaultPfn @ 0x1402B9C80 (MiInitializeHardFaultPfn.c)
 *     MiTrimSystemImagePages @ 0x1402E00CC (MiTrimSystemImagePages.c)
 *     MiInitializeSystemPageTable @ 0x1402E28D4 (MiInitializeSystemPageTable.c)
 *     MiInitializeTransitionPfn @ 0x14031CA0C (MiInitializeTransitionPfn.c)
 *     MiDeleteNonPagedPoolPte @ 0x14032DE00 (MiDeleteNonPagedPoolPte.c)
 *     MiConvertStandbyToProto @ 0x140364CE8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140367DC0 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x1403688A4 (MiResolveProtoCombine.c)
 *     MiDecommitLargePoolVa @ 0x14036E6A0 (MiDecommitLargePoolVa.c)
 *     MiInitializeUnusablePfns @ 0x1403A86F0 (MiInitializeUnusablePfns.c)
 *     MiPfnRangeIsZero @ 0x1403B6748 (MiPfnRangeIsZero.c)
 *     PnprCopyReservedMapping @ 0x140509CE0 (PnprCopyReservedMapping.c)
 *     PnprRecopyMappingReserve @ 0x14050A3B8 (PnprRecopyMappingReserve.c)
 *     MiSwitchToTransition @ 0x140534A44 (MiSwitchToTransition.c)
 *     MiMakeLargePageTable @ 0x140538544 (MiMakeLargePageTable.c)
 *     MmMapHotPatchTablePage @ 0x140539FE0 (MmMapHotPatchTablePage.c)
 *     MiMapRetpolineStubs @ 0x14053EB6C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x14053ED78 (MiUnmapRetpolineStubs.c)
 * Callees:
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
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
