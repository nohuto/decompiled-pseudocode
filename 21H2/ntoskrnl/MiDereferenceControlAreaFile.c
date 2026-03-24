/*
 * XREFs of MiDereferenceControlAreaFile @ 0x1403571E4
 * Callers:
 *     MiFlushSectionInternal @ 0x140219DB0 (MiFlushSectionInternal.c)
 *     MiWriteComplete @ 0x140255170 (MiWriteComplete.c)
 *     MiGatherMappedPages @ 0x140255BC8 (MiGatherMappedPages.c)
 *     MmFlushSection @ 0x1402746FC (MmFlushSection.c)
 *     MiCompleteRestrictedImageFault @ 0x14031D0A0 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCachePteValid @ 0x14035E91C (MiMakeSystemCachePteValid.c)
 *     MiCreateSystemSection @ 0x1403720DC (MiCreateSystemSection.c)
 *     MiDeprioritizeVad @ 0x140381E94 (MiDeprioritizeVad.c)
 *     MiDeleteCachedSubsection @ 0x140528DAC (MiDeleteCachedSubsection.c)
 *     MiSetPagesModified @ 0x1405350B0 (MiSetPagesModified.c)
 *     MmCreateSpecialImageSection @ 0x140608784 (MmCreateSpecialImageSection.c)
 *     MiAllowImageMap @ 0x14061D9F0 (MiAllowImageMap.c)
 *     MiUnmapViewOfSection @ 0x14061E0F0 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x14061E420 (MiUnmapVad.c)
 *     MmFlushVirtualMemory @ 0x140689134 (MmFlushVirtualMemory.c)
 *     MmExtendSection @ 0x1406894BC (MmExtendSection.c)
 *     NtAreMappedFilesTheSame @ 0x1406BD520 (NtAreMappedFilesTheSame.c)
 *     MiParseComAndCetHeaders @ 0x1406D27F4 (MiParseComAndCetHeaders.c)
 *     MiCreateSectionCommon @ 0x140707430 (MiCreateSectionCommon.c)
 *     MiParseImageLoadConfig @ 0x140712E88 (MiParseImageLoadConfig.c)
 *     MiLogRelocationFaults @ 0x14071384C (MiLogRelocationFaults.c)
 *     MiMapImageInSystemSpace @ 0x140715730 (MiMapImageInSystemSpace.c)
 *     MmLoadSystemImageEx @ 0x14075BAFC (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x14075C644 (MiDriverLoadSucceeded.c)
 *     MiLoadUserSymbols @ 0x1407D0E0C (MiLoadUserSymbols.c)
 *     MmGetFileNameForSection @ 0x1408C415C (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x1408C456C (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x1408CF510 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x1408D1020 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x1408D11B0 (MmSectionToSectionObjectPointers.c)
 *     MiMapImageForEnclaveUse @ 0x1408D39BC (MiMapImageForEnclaveUse.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140343540 (ObDereferenceObjectDeferDelete.c)
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
