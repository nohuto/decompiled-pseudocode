/*
 * XREFs of MiStartingOffset @ 0x1402A1B60
 * Callers:
 *     MiIdentifyPfn @ 0x14021F300 (MiIdentifyPfn.c)
 *     MiPickClusterForMappedFileFault @ 0x1402323EC (MiPickClusterForMappedFileFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x1402326FC (MiFinishMdlForMappedFileFault.c)
 *     MiAdvanceVadView @ 0x140250914 (MiAdvanceVadView.c)
 *     MiReadyFlushMdlToWrite @ 0x14029F6FC (MiReadyFlushMdlToWrite.c)
 *     MiStartingOffsetNeedLock @ 0x1402A0754 (MiStartingOffsetNeedLock.c)
 *     MiCompleteRestrictedImageFault @ 0x1402A07F0 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x1402A22E0 (MiMakeSystemCacheRangeValid.c)
 *     MiLogPageAccess @ 0x1402BDB30 (MiLogPageAccess.c)
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     MiGatherMappedPages @ 0x140344824 (MiGatherMappedPages.c)
 *     MiCopyDataPageToImagePage @ 0x14034EC44 (MiCopyDataPageToImagePage.c)
 *     MiInitializeImageProtos @ 0x140350EE8 (MiInitializeImageProtos.c)
 *     MiTrimSection @ 0x1403545B0 (MiTrimSection.c)
 *     MiViewMayContainPage @ 0x14035484C (MiViewMayContainPage.c)
 *     MiTrimSharedPageFromViews @ 0x140354B14 (MiTrimSharedPageFromViews.c)
 *     MiMakeSystemCachePteValid @ 0x140356A3C (MiMakeSystemCachePteValid.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053E278 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x14053E634 (MiCopyImageExtentContents.c)
 *     MiPfPrepareSequentialReadList @ 0x1406253C0 (MiPfPrepareSequentialReadList.c)
 *     MiCfgMarkValidEntries @ 0x140629948 (MiCfgMarkValidEntries.c)
 *     MiPfAllocateMdls @ 0x1406585B0 (MiPfAllocateMdls.c)
 *     MiFillMapFileInfo @ 0x1408C6DAC (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x1408D1D50 (MiAllocateFileExtents.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x14024EC00 (MiGetSubsectionDriverProtos.c)
 *     MiGetSharedProtos @ 0x1403A5948 (MiGetSharedProtos.c)
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
