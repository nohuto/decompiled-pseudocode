/*
 * XREFs of MiMakeTransitionPte @ 0x1402B1DC0
 * Callers:
 *     MmProtectPool @ 0x1402385B4 (MmProtectPool.c)
 *     MiOutPageSingleKernelStack @ 0x140250980 (MiOutPageSingleKernelStack.c)
 *     MiCompletePrivateZeroFault @ 0x140271B70 (MiCompletePrivateZeroFault.c)
 *     MiInsertProtectedStandbyPage @ 0x1402ACBC0 (MiInsertProtectedStandbyPage.c)
 *     MiDecrementAndInsertStandbyPages @ 0x1402AF7F0 (MiDecrementAndInsertStandbyPages.c)
 *     MmOutSwapProcess @ 0x1402DD934 (MmOutSwapProcess.c)
 *     MiTrimSystemImagePages @ 0x14030D320 (MiTrimSystemImagePages.c)
 *     MiDeleteParentDecayNode @ 0x14030F9AC (MiDeleteParentDecayNode.c)
 *     MiMakeVaRangeNoAccess @ 0x140327684 (MiMakeVaRangeNoAccess.c)
 *     MiInitializeTransitionPfn @ 0x14035090C (MiInitializeTransitionPfn.c)
 *     MiCreateDecayPfn @ 0x140351B30 (MiCreateDecayPfn.c)
 *     MiConvertStandbyToProto @ 0x140366CC8 (MiConvertStandbyToProto.c)
 *     MiInitializeUnusablePfns @ 0x1403AB0E0 (MiInitializeUnusablePfns.c)
 *     MiMakeOutswappedPageResident @ 0x140529FC0 (MiMakeOutswappedPageResident.c)
 *     MmProtectMdlSystemAddress @ 0x1405306B0 (MmProtectMdlSystemAddress.c)
 *     MiSwitchToTransition @ 0x140538414 (MiSwitchToTransition.c)
 *     MiClearDriverHotPatchPtes @ 0x14053C928 (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x14053D9B0 (MmMapHotPatchTablePage.c)
 *     MiProtectAweRegion @ 0x14054B864 (MiProtectAweRegion.c)
 *     MiBuildForkPageTable @ 0x1405564FC (MiBuildForkPageTable.c)
 *     MiDuplicateCloneLeaf @ 0x140558764 (MiDuplicateCloneLeaf.c)
 *     MiMakeProtoTransition @ 0x14055AC98 (MiMakeProtoTransition.c)
 *     MmFreeLoaderBlock @ 0x140A4B230 (MmFreeLoaderBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeTransitionPte(__int64 a1, char a2)
{
  __int64 v2; // rcx

  v2 = 32 * (a2 & 0x1F | ((a1 & 0xFFFFFFFFFLL) << 7) | 0x40);
  if ( qword_140C4DDC0 )
  {
    if ( (qword_140C4DDC0 & v2) == 0 )
      return v2 | qword_140C4DDC0;
    return v2 | 0x10;
  }
  return v2;
}
