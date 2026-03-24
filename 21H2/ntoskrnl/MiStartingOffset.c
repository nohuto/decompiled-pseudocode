/*
 * XREFs of MiStartingOffset @ 0x14031E410
 * Callers:
 *     MiWalkEntireImage @ 0x14023A4B0 (MiWalkEntireImage.c)
 *     MiGatherMappedPages @ 0x140255BC8 (MiGatherMappedPages.c)
 *     MiInitializeImageProtos @ 0x14026DF7C (MiInitializeImageProtos.c)
 *     MiTrimSection @ 0x1402EF6E0 (MiTrimSection.c)
 *     MiViewMayContainPage @ 0x1402EF97C (MiViewMayContainPage.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC44 (MiTrimSharedPageFromViews.c)
 *     MiAdvanceVadView @ 0x1402FE5F4 (MiAdvanceVadView.c)
 *     MiCopyDataPageToImagePage @ 0x1403043E8 (MiCopyDataPageToImagePage.c)
 *     MiPickClusterForMappedFileFault @ 0x140319C70 (MiPickClusterForMappedFileFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x14031A46C (MiFinishMdlForMappedFileFault.c)
 *     MiReadyFlushMdlToWrite @ 0x14031C3A8 (MiReadyFlushMdlToWrite.c)
 *     MiStartingOffsetNeedLock @ 0x14031D004 (MiStartingOffsetNeedLock.c)
 *     MiCompleteRestrictedImageFault @ 0x14031D0A0 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x14031EB90 (MiMakeSystemCacheRangeValid.c)
 *     MiLogPageAccess @ 0x14033A650 (MiLogPageAccess.c)
 *     MiIdentifyPfn @ 0x140349250 (MiIdentifyPfn.c)
 *     MiMakeSystemCachePteValid @ 0x14035E91C (MiMakeSystemCachePteValid.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FD78 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x140540134 (MiCopyImageExtentContents.c)
 *     MiPfAllocateMdls @ 0x1406E8CA0 (MiPfAllocateMdls.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EDDD0 (MiPfPrepareSequentialReadList.c)
 *     MiCfgMarkValidEntries @ 0x14070F9B4 (MiCfgMarkValidEntries.c)
 *     MiFillMapFileInfo @ 0x1408C456C (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x1408CF510 (MiAllocateFileExtents.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x1402FCDE0 (MiGetSubsectionDriverProtos.c)
 *     MiGetSharedProtos @ 0x1403A6208 (MiGetSharedProtos.c)
 */

unsigned __int64 __fastcall MiStartingOffset(__int64 *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  unsigned __int64 v5; // rcx
  __int64 v7; // rbx
  unsigned __int64 v9; // rbx
  __int64 SharedProtos; // rax

  v3 = *a1;
  v5 = a1[1];
  if ( (*(_DWORD *)(v3 + 56) & 0x20) != 0 )
  {
    if ( a2 < v5 || a2 >= v5 + 8LL * *((unsigned int *)a1 + 11) )
    {
      if ( (*((_BYTE *)a1 + 34) & 2) != 0 )
        SharedProtos = MiGetSharedProtos(v3, a3, a1);
      else
        SharedProtos = MiGetSubsectionDriverProtos(a1);
      v9 = a2 - *(_QWORD *)(SharedProtos + 72);
    }
    else
    {
      v9 = a2 - v5;
    }
    return ((v9 << 9) & 0xFFFFFFFFFFFFF000uLL) + ((unsigned __int64)*((unsigned int *)a1 + 9) << 9);
  }
  else
  {
    if ( v5 )
      v7 = (__int64)(a2 - v5) >> 3 << 12;
    else
      v7 = 0LL;
    return v7 + ((*((unsigned int *)a1 + 9) | ((unsigned __int64)((_WORD)a1[4] & 0xFFC0) << 26)) << 12);
  }
}
