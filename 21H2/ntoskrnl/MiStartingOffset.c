/*
 * XREFs of MiStartingOffset @ 0x140329160
 * Callers:
 *     MiInitializeImageProtos @ 0x14025BF1C (MiInitializeImageProtos.c)
 *     MiGatherMappedPages @ 0x140277138 (MiGatherMappedPages.c)
 *     MiMakeSystemCachePteValid @ 0x1402A384C (MiMakeSystemCachePteValid.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiTrimSection @ 0x1402FA430 (MiTrimSection.c)
 *     MiViewMayContainPage @ 0x1402FA6CC (MiViewMayContainPage.c)
 *     MiTrimSharedPageFromViews @ 0x1402FA994 (MiTrimSharedPageFromViews.c)
 *     MiAdvanceVadView @ 0x140309344 (MiAdvanceVadView.c)
 *     MiCopyDataPageToImagePage @ 0x14030F138 (MiCopyDataPageToImagePage.c)
 *     MiPickClusterForMappedFileFault @ 0x1403249C0 (MiPickClusterForMappedFileFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x1403251BC (MiFinishMdlForMappedFileFault.c)
 *     MiReadyFlushMdlToWrite @ 0x1403270F8 (MiReadyFlushMdlToWrite.c)
 *     MiStartingOffsetNeedLock @ 0x140327D54 (MiStartingOffsetNeedLock.c)
 *     MiCompleteRestrictedImageFault @ 0x140327DF0 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x1403298E0 (MiMakeSystemCacheRangeValid.c)
 *     MiLogPageAccess @ 0x1403453A0 (MiLogPageAccess.c)
 *     MiIdentifyPfn @ 0x140353FA0 (MiIdentifyPfn.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FFB8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x140540374 (MiCopyImageExtentContents.c)
 *     MiCfgMarkValidEntries @ 0x1406BE004 (MiCfgMarkValidEntries.c)
 *     MiPfAllocateMdls @ 0x140700080 (MiPfAllocateMdls.c)
 *     MiPfPrepareSequentialReadList @ 0x1407051B0 (MiPfPrepareSequentialReadList.c)
 *     MiFillMapFileInfo @ 0x1408C46CC (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x1408CF670 (MiAllocateFileExtents.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x140307B30 (MiGetSubsectionDriverProtos.c)
 *     MiGetSharedProtos @ 0x1403A6358 (MiGetSharedProtos.c)
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
