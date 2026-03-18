/*
 * XREFs of MiMakeTransitionPte @ 0x14028D2E0
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x14020FD20 (MiCompletePrivateZeroFault.c)
 *     MmOutSwapProcess @ 0x1402446DC (MmOutSwapProcess.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14028FAA0 (MiDecrementAndInsertStandbyPages.c)
 *     MiInsertProtectedStandbyPage @ 0x1402D9CF0 (MiInsertProtectedStandbyPage.c)
 *     MmProtectPool @ 0x1402DFB44 (MmProtectPool.c)
 *     MiDeleteParentDecayNode @ 0x1402FCF24 (MiDeleteParentDecayNode.c)
 *     MiCreateDecayPfn @ 0x1402FF368 (MiCreateDecayPfn.c)
 *     MiMakeVaRangeNoAccess @ 0x140319094 (MiMakeVaRangeNoAccess.c)
 *     MiTrimSystemImagePages @ 0x1403251CC (MiTrimSystemImagePages.c)
 *     MiInitializeTransitionPfn @ 0x14034BD4C (MiInitializeTransitionPfn.c)
 *     MiOutPageSingleKernelStack @ 0x140351830 (MiOutPageSingleKernelStack.c)
 *     MiConvertStandbyToProto @ 0x140364328 (MiConvertStandbyToProto.c)
 *     MiInitializeUnusablePfns @ 0x1403AEB10 (MiInitializeUnusablePfns.c)
 *     MiMakeOutswappedPageResident @ 0x140525FA0 (MiMakeOutswappedPageResident.c)
 *     MmProtectMdlSystemAddress @ 0x14052C690 (MmProtectMdlSystemAddress.c)
 *     MiSwitchToTransition @ 0x1405343F4 (MiSwitchToTransition.c)
 *     MiClearDriverHotPatchPtes @ 0x140538908 (MiClearDriverHotPatchPtes.c)
 *     MmMapHotPatchTablePage @ 0x140539990 (MmMapHotPatchTablePage.c)
 *     MiProtectAweRegion @ 0x140547844 (MiProtectAweRegion.c)
 *     MiBuildForkPageTable @ 0x1405524DC (MiBuildForkPageTable.c)
 *     MiDuplicateCloneLeaf @ 0x140554744 (MiDuplicateCloneLeaf.c)
 *     MiMakeProtoTransition @ 0x140556C78 (MiMakeProtoTransition.c)
 *     MmFreeLoaderBlock @ 0x140A3F76C (MmFreeLoaderBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeTransitionPte(__int64 a1, char a2)
{
  __int64 v2; // rcx

  v2 = 32 * (a2 & 0x1F | ((a1 & 0xFFFFFFFFFLL) << 7) | 0x40);
  if ( qword_140C4DE80 )
  {
    if ( (qword_140C4DE80 & v2) == 0 )
      return v2 | qword_140C4DE80;
    return v2 | 0x10;
  }
  return v2;
}
