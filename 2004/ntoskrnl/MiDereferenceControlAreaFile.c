/*
 * XREFs of MiDereferenceControlAreaFile @ 0x1402293FC
 * Callers:
 *     MiCompleteRestrictedImageFault @ 0x14025BEB0 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCachePteValid @ 0x14026255C (MiMakeSystemCachePteValid.c)
 *     MiFlushSectionInternal @ 0x1402AC250 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x1402C25C4 (MmFlushSection.c)
 *     MiGatherMappedPages @ 0x1402F5340 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x1402F79F0 (MiWriteComplete.c)
 *     MiCreateSystemSection @ 0x14036FEA4 (MiCreateSystemSection.c)
 *     MiDeprioritizeVad @ 0x14037F9E0 (MiDeprioritizeVad.c)
 *     MiDeleteCachedSubsection @ 0x1405238FC (MiDeleteCachedSubsection.c)
 *     MiSetPagesModified @ 0x14052FBE0 (MiSetPagesModified.c)
 *     MiCreateSectionCommon @ 0x1405FAC40 (MiCreateSectionCommon.c)
 *     MiUnmapViewOfSection @ 0x140600DD0 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x140601100 (MiUnmapVad.c)
 *     MiAllowImageMap @ 0x140601DB0 (MiAllowImageMap.c)
 *     MiMapImageInSystemSpace @ 0x14060C198 (MiMapImageInSystemSpace.c)
 *     MmExtendSection @ 0x14060CAD4 (MmExtendSection.c)
 *     MiParseComAndCetHeaders @ 0x14060FE30 (MiParseComAndCetHeaders.c)
 *     MmCreateSpecialImageSection @ 0x140617E6C (MmCreateSpecialImageSection.c)
 *     MiParseImageLoadConfig @ 0x1406D5F28 (MiParseImageLoadConfig.c)
 *     MiLogRelocationFaults @ 0x1406D68EC (MiLogRelocationFaults.c)
 *     MmFlushVirtualMemory @ 0x1406FF904 (MmFlushVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x14070B3D0 (NtAreMappedFilesTheSame.c)
 *     MmLoadSystemImageEx @ 0x14074603C (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x140746B84 (MiDriverLoadSucceeded.c)
 *     MiLoadUserSymbols @ 0x1407BE2CC (MiLoadUserSymbols.c)
 *     MmGetFileNameForSection @ 0x1408C0B5C (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x1408C0F6C (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x1408CBF10 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x1408CDA20 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x1408CDBB0 (MmSectionToSectionObjectPointers.c)
 *     MiMapImageForEnclaveUse @ 0x1408D03BC (MiMapImageForEnclaveUse.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140286A70 (ObDereferenceObjectDeferDelete.c)
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
