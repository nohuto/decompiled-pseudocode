/*
 * XREFs of MiGetContainingPageTable @ 0x14023E450
 * Callers:
 *     MiDeletePteList @ 0x140231820 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140236C60 (MiDeletePteRun.c)
 *     MiAssignNonPagedPoolPte @ 0x14023B9F0 (MiAssignNonPagedPoolPte.c)
 *     MiInitializeHardFaultPfn @ 0x14023E5A0 (MiInitializeHardFaultPfn.c)
 *     MiInitializeTransitionPfn @ 0x14026E22C (MiInitializeTransitionPfn.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402964D0 (MiDeleteNonPagedPoolPte.c)
 *     MiTrimSystemImagePages @ 0x1402BE540 (MiTrimSystemImagePages.c)
 *     MiInitializeSystemPageTable @ 0x1402E5484 (MiInitializeSystemPageTable.c)
 *     MiLinkPoolCommitChain @ 0x14030B540 (MiLinkPoolCommitChain.c)
 *     MmUnmapViewInSystemCache @ 0x140313AE0 (MmUnmapViewInSystemCache.c)
 *     MiCompleteRestrictedImageFault @ 0x14031D0A0 (MiCompleteRestrictedImageFault.c)
 *     MiWsleFree @ 0x140327ED0 (MiWsleFree.c)
 *     MiDeleteValidSystemPage @ 0x140328E20 (MiDeleteValidSystemPage.c)
 *     MiConvertStandbyToProto @ 0x140366F78 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14036A050 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x14036AB34 (MiResolveProtoCombine.c)
 *     MiDecommitLargePoolVa @ 0x140370CE0 (MiDecommitLargePoolVa.c)
 *     MiInitializeUnusablePfns @ 0x1403B0FE0 (MiInitializeUnusablePfns.c)
 *     MiPfnRangeIsZero @ 0x1403B9BE8 (MiPfnRangeIsZero.c)
 *     PnprCopyReservedMapping @ 0x14050F140 (PnprCopyReservedMapping.c)
 *     PnprRecopyMappingReserve @ 0x14050F818 (PnprRecopyMappingReserve.c)
 *     MiSwitchToTransition @ 0x140539F14 (MiSwitchToTransition.c)
 *     MiMakeLargePageTable @ 0x14053DA14 (MiMakeLargePageTable.c)
 *     MmMapHotPatchTablePage @ 0x14053F4B0 (MmMapHotPatchTablePage.c)
 *     MiMapRetpolineStubs @ 0x14054403C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140544248 (MiUnmapRetpolineStubs.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
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
