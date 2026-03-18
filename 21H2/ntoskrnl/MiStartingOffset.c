/*
 * XREFs of MiStartingOffset @ 0x1403342D0
 * Callers:
 *     MiReadyFlushMdlToWrite @ 0x1402394EC (MiReadyFlushMdlToWrite.c)
 *     MiCopyDataPageToImagePage @ 0x14026F180 (MiCopyDataPageToImagePage.c)
 *     MiTrimSharedPageFromViews @ 0x14027B820 (MiTrimSharedPageFromViews.c)
 *     MiTrimSection @ 0x14027E174 (MiTrimSection.c)
 *     MiViewMayContainPage @ 0x14027E474 (MiViewMayContainPage.c)
 *     MiPickClusterForMappedFileFault @ 0x140282D10 (MiPickClusterForMappedFileFault.c)
 *     MiGatherMappedPages @ 0x14028B330 (MiGatherMappedPages.c)
 *     MiIdentifyPfn @ 0x1402B1E40 (MiIdentifyPfn.c)
 *     MiCompleteRestrictedImageFault @ 0x1402CB710 (MiCompleteRestrictedImageFault.c)
 *     MiInitializeImageProtos @ 0x1402E4474 (MiInitializeImageProtos.c)
 *     MiAdvanceVadView @ 0x1402ED77C (MiAdvanceVadView.c)
 *     MiLogPageAccess @ 0x140333040 (MiLogPageAccess.c)
 *     MiMakeSystemCacheRangeValid @ 0x140333AC0 (MiMakeSystemCacheRangeValid.c)
 *     MiStartingOffsetNeedLock @ 0x140334364 (MiStartingOffsetNeedLock.c)
 *     MiEmptyPageAccessLog @ 0x140334400 (MiEmptyPageAccessLog.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiFinishMdlForMappedFileFault @ 0x14033DC30 (MiFinishMdlForMappedFileFault.c)
 *     MiMakeSystemCachePteValid @ 0x140367828 (MiMakeSystemCachePteValid.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14059DB28 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiInitializeCachedExtentWalker @ 0x14059F4C4 (MiInitializeCachedExtentWalker.c)
 *     MiLocateCachedExtent @ 0x14059F874 (MiLocateCachedExtent.c)
 *     MiPfAllocateMdls @ 0x1406F4A80 (MiPfAllocateMdls.c)
 *     MiCfgMarkValidEntries @ 0x140753C58 (MiCfgMarkValidEntries.c)
 *     MiPfPrepareSequentialReadList @ 0x1407BCB30 (MiPfPrepareSequentialReadList.c)
 *     MiFillMapFileInfo @ 0x14096CB14 (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x14096F8CC (MiAllocateFileExtents.c)
 * Callees:
 *     MiGetSharedProtos @ 0x140256DF8 (MiGetSharedProtos.c)
 *     MiGetSubsectionDriverProtos @ 0x14027B234 (MiGetSubsectionDriverProtos.c)
 */

unsigned __int64 __fastcall MiStartingOffset(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  unsigned __int64 v5; // rcx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 SharedProtos; // rax

  v3 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(v3 + 56) & 0x20) != 0 )
  {
    if ( a2 < v5 || a2 >= v5 + 8LL * *(unsigned int *)(a1 + 44) )
    {
      if ( (*(_BYTE *)(a1 + 34) & 2) != 0 )
        SharedProtos = MiGetSharedProtos(v3, a3, a1);
      else
        SharedProtos = MiGetSubsectionDriverProtos((_QWORD *)a1);
      v7 = a2 - *(_QWORD *)(SharedProtos + 72);
    }
    else
    {
      v7 = a2 - v5;
    }
    v8 = (v7 << 9) & 0xFFFFFFFFFFFFF000uLL;
    v9 = (unsigned __int64)*(unsigned int *)(a1 + 36) << 9;
  }
  else
  {
    if ( v5 )
      v8 = (__int64)(a2 - v5) >> 3 << 12;
    else
      v8 = 0LL;
    v9 = (*(unsigned int *)(a1 + 36) | ((unsigned __int64)(*(_WORD *)(a1 + 32) & 0xFFC0) << 26)) << 12;
  }
  return v8 + v9;
}
