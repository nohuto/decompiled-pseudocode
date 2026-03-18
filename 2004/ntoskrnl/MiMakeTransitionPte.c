/*
 * XREFs of MiMakeTransitionPte @ 0x140234290
 * Callers:
 *     MiDecrementAndInsertStandbyPages @ 0x140236A50 (MiDecrementAndInsertStandbyPages.c)
 *     MmProtectPool @ 0x1402704BC (MmProtectPool.c)
 *     MiInsertProtectedStandbyPage @ 0x140278FC0 (MiInsertProtectedStandbyPage.c)
 *     MmOutSwapProcess @ 0x140280DDC (MmOutSwapProcess.c)
 *     MiCompletePrivateZeroFault @ 0x1402A2830 (MiCompletePrivateZeroFault.c)
 *     MiTrimSystemImagePages @ 0x1402E00CC (MiTrimSystemImagePages.c)
 *     MiOutPageSingleKernelStack @ 0x1402F5850 (MiOutPageSingleKernelStack.c)
 *     MiInitializeTransitionPfn @ 0x14031CA0C (MiInitializeTransitionPfn.c)
 *     MiDeleteParentDecayNode @ 0x14033A264 (MiDeleteParentDecayNode.c)
 *     MiCreateDecayPfn @ 0x14033BC68 (MiCreateDecayPfn.c)
 *     MiMakeVaRangeNoAccess @ 0x140356C84 (MiMakeVaRangeNoAccess.c)
 *     MiConvertStandbyToProto @ 0x140364CE8 (MiConvertStandbyToProto.c)
 *     MiInitializeUnusablePfns @ 0x1403A86F0 (MiInitializeUnusablePfns.c)
 *     MiMakeOutswappedPageResident @ 0x1405265F0 (MiMakeOutswappedPageResident.c)
 *     MmProtectMdlSystemAddress @ 0x14052CCE0 (MmProtectMdlSystemAddress.c)
 *     MiSwitchToTransition @ 0x140534A44 (MiSwitchToTransition.c)
 *     MiClearDriverHotPatchPtes @ 0x140538F58 (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x140539FE0 (MmMapHotPatchTablePage.c)
 *     MiProtectAweRegion @ 0x140547E94 (MiProtectAweRegion.c)
 *     MiBuildForkPageTable @ 0x140552B2C (MiBuildForkPageTable.c)
 *     MiDuplicateCloneLeaf @ 0x140554D94 (MiDuplicateCloneLeaf.c)
 *     MiMakeProtoTransition @ 0x1405572C8 (MiMakeProtoTransition.c)
 *     MmFreeLoaderBlock @ 0x140A44F90 (MmFreeLoaderBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeTransitionPte(__int64 a1, char a2)
{
  __int64 v2; // rcx

  v2 = 32 * (a2 & 0x1F | ((a1 & 0xFFFFFFFFFLL) << 7) | 0x40);
  if ( qword_140C4DD40 )
  {
    if ( (qword_140C4DD40 & v2) == 0 )
      return v2 | qword_140C4DD40;
    return v2 | 0x10;
  }
  return v2;
}
