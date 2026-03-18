/*
 * XREFs of MiStartingOffset @ 0x14029EDC0
 * Callers:
 *     MiIdentifyPfn @ 0x14025F2A0 (MiIdentifyPfn.c)
 *     MiStartingOffsetNeedLock @ 0x14027D718 (MiStartingOffsetNeedLock.c)
 *     MiReadyFlushMdlToWrite @ 0x140280AEC (MiReadyFlushMdlToWrite.c)
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MiMakeSystemCacheRangeValid @ 0x140286080 (MiMakeSystemCacheRangeValid.c)
 *     MiLogPageAccess @ 0x14029E790 (MiLogPageAccess.c)
 *     MiCompleteRestrictedImageFault @ 0x1402B4EE0 (MiCompleteRestrictedImageFault.c)
 *     MiPickClusterForMappedFileFault @ 0x1402B7D6C (MiPickClusterForMappedFileFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x1402B807C (MiFinishMdlForMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x1402B988C (MiCopyDataPageToImagePage.c)
 *     MiMakeSystemCachePteValid @ 0x1402BB58C (MiMakeSystemCachePteValid.c)
 *     MiTrimSection @ 0x1402CE300 (MiTrimSection.c)
 *     MiViewMayContainPage @ 0x1402CE59C (MiViewMayContainPage.c)
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 *     MiAdvanceVadView @ 0x140311C08 (MiAdvanceVadView.c)
 *     MiInitializeImageProtos @ 0x14034BA9C (MiInitializeImageProtos.c)
 *     MiGatherMappedPages @ 0x14035131C (MiGatherMappedPages.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053A258 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x14053A614 (MiCopyImageExtentContents.c)
 *     MiPfPrepareSequentialReadList @ 0x14062E990 (MiPfPrepareSequentialReadList.c)
 *     MiCfgMarkValidEntries @ 0x14063C194 (MiCfgMarkValidEntries.c)
 *     MiPfAllocateMdls @ 0x14063E600 (MiPfAllocateMdls.c)
 *     MiFillMapFileInfo @ 0x1408BFC1C (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x1408CABC0 (MiAllocateFileExtents.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x1402BCD40 (MiGetSubsectionDriverProtos.c)
 *     MiGetSharedProtos @ 0x1403A2DE8 (MiGetSharedProtos.c)
 */

unsigned __int64 __fastcall MiStartingOffset(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  __int64 v7; // rbx
  unsigned __int64 v9; // rbx
  __int64 SharedProtos; // rax

  v3 = *a1;
  v5 = a1[1];
  v6 = a2;
  if ( (*(_DWORD *)(v3 + 56) & 0x20) != 0 )
  {
    if ( a2 < v5 || (a2 = v5 + 8LL * *((unsigned int *)a1 + 11), v6 >= a2) )
    {
      if ( (*((_BYTE *)a1 + 34) & 2) != 0 )
        SharedProtos = MiGetSharedProtos(v3, (unsigned int)a3, a1);
      else
        SharedProtos = MiGetSubsectionDriverProtos(a1, a2, a3, v3);
      v9 = v6 - *(_QWORD *)(SharedProtos + 72);
    }
    else
    {
      v9 = v6 - v5;
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
