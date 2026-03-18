/*
 * XREFs of MiDereferenceControlAreaFile @ 0x14028244C
 * Callers:
 *     MiFlushSectionInternal @ 0x140219740 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x14022F794 (MmFlushSection.c)
 *     MiCompleteRestrictedImageFault @ 0x1402B4EE0 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCachePteValid @ 0x1402BB58C (MiMakeSystemCachePteValid.c)
 *     MiGatherMappedPages @ 0x14035131C (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x1403539D0 (MiWriteComplete.c)
 *     MiCreateSystemSection @ 0x14036F274 (MiCreateSystemSection.c)
 *     MiDeprioritizeVad @ 0x14037F074 (MiDeprioritizeVad.c)
 *     MiDeleteCachedSubsection @ 0x1405232AC (MiDeleteCachedSubsection.c)
 *     MiSetPagesModified @ 0x14052F590 (MiSetPagesModified.c)
 *     MiCreateSectionCommon @ 0x14062FC80 (MiCreateSectionCommon.c)
 *     MiUnmapViewOfSection @ 0x140635E10 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x140636140 (MiUnmapVad.c)
 *     MiAllowImageMap @ 0x140636DF0 (MiAllowImageMap.c)
 *     MiMapImageInSystemSpace @ 0x1406412E8 (MiMapImageInSystemSpace.c)
 *     MmExtendSection @ 0x140641C24 (MmExtendSection.c)
 *     MiParseComAndCetHeaders @ 0x140645060 (MiParseComAndCetHeaders.c)
 *     MmCreateSpecialImageSection @ 0x14066F58C (MmCreateSpecialImageSection.c)
 *     MmFlushVirtualMemory @ 0x1406DC964 (MmFlushVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x1406E74A0 (NtAreMappedFilesTheSame.c)
 *     MiParseImageLoadConfig @ 0x1406EE324 (MiParseImageLoadConfig.c)
 *     MiLogRelocationFaults @ 0x1406EECDC (MiLogRelocationFaults.c)
 *     MmLoadSystemImageEx @ 0x1407444BC (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x140745004 (MiDriverLoadSucceeded.c)
 *     MiLoadUserSymbols @ 0x1407BB15C (MiLoadUserSymbols.c)
 *     MmGetFileNameForSection @ 0x1408BF80C (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x1408BFC1C (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x1408CABC0 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x1408CC6D0 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x1408CC860 (MmSectionToSectionObjectPointers.c)
 *     MiMapImageForEnclaveUse @ 0x1408CF06C (MiMapImageForEnclaveUse.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14024A1D0 (ObDereferenceObjectDeferDelete.c)
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
