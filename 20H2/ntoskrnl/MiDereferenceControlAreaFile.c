/*
 * XREFs of MiDereferenceControlAreaFile @ 0x1402A039C
 * Callers:
 *     MiFlushSectionInternal @ 0x14027B590 (MiFlushSectionInternal.c)
 *     MiCompleteRestrictedImageFault @ 0x1402A07F0 (MiCompleteRestrictedImageFault.c)
 *     MiGatherMappedPages @ 0x140344824 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x140346420 (MiWriteComplete.c)
 *     MmFlushSection @ 0x1403542A0 (MmFlushSection.c)
 *     MiMakeSystemCachePteValid @ 0x140356A3C (MiMakeSystemCachePteValid.c)
 *     MiCreateSystemSection @ 0x140371DF4 (MiCreateSystemSection.c)
 *     MiDeprioritizeVad @ 0x140381794 (MiDeprioritizeVad.c)
 *     MiDeleteCachedSubsection @ 0x1405272CC (MiDeleteCachedSubsection.c)
 *     MiSetPagesModified @ 0x1405335B0 (MiSetPagesModified.c)
 *     MiAllowImageMap @ 0x140627820 (MiAllowImageMap.c)
 *     MiCreateSectionCommon @ 0x14067F1A0 (MiCreateSectionCommon.c)
 *     MiUnmapViewOfSection @ 0x140685830 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x140685B60 (MiUnmapVad.c)
 *     MmCreateSpecialImageSection @ 0x14068FA78 (MmCreateSpecialImageSection.c)
 *     MmFlushVirtualMemory @ 0x1406D2554 (MmFlushVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x1406F0FC0 (NtAreMappedFilesTheSame.c)
 *     MmExtendSection @ 0x140708C5C (MmExtendSection.c)
 *     MiParseComAndCetHeaders @ 0x14070C690 (MiParseComAndCetHeaders.c)
 *     MiLogRelocationFaults @ 0x14070D684 (MiLogRelocationFaults.c)
 *     MiParseImageLoadConfig @ 0x14070DC30 (MiParseImageLoadConfig.c)
 *     MiMapImageInSystemSpace @ 0x14070E1EC (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x140754C1C (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x140755764 (MiDriverLoadSucceeded.c)
 *     MiLoadUserSymbols @ 0x1407CCB5C (MiLoadUserSymbols.c)
 *     MmGetFileNameForSection @ 0x1408C699C (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x1408C6DAC (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x1408D1D50 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x1408D3860 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x1408D39F0 (MmSectionToSectionObjectPointers.c)
 *     MiMapImageForEnclaveUse @ 0x1408D61FC (MiMapImageForEnclaveUse.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140219220 (ObDereferenceObjectDeferDelete.c)
 */

void __fastcall MiDereferenceControlAreaFile(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 64));
  v2 = *(_QWORD *)(a1 + 64);
  if ( (a2 ^ v2) >= 0xF )
  {
LABEL_4:
    ObDereferenceObjectDeferDelete((PVOID)a2);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v2 + 1, v2);
      if ( v3 == v2 )
        break;
      if ( (a2 ^ v2) >= 0xF )
        goto LABEL_4;
    }
  }
}
