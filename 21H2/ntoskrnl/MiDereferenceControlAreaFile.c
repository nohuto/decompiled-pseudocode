/*
 * XREFs of MiDereferenceControlAreaFile @ 0x140361F34
 * Callers:
 *     MmFlushSection @ 0x14026269C (MmFlushSection.c)
 *     MiWriteComplete @ 0x1402766E0 (MiWriteComplete.c)
 *     MiGatherMappedPages @ 0x140277138 (MiGatherMappedPages.c)
 *     MiMakeSystemCachePteValid @ 0x1402A384C (MiMakeSystemCachePteValid.c)
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 *     MiCompleteRestrictedImageFault @ 0x140327DF0 (MiCompleteRestrictedImageFault.c)
 *     MiCreateSystemSection @ 0x140371C2C (MiCreateSystemSection.c)
 *     MiDeprioritizeVad @ 0x1403819E4 (MiDeprioritizeVad.c)
 *     MiDeleteCachedSubsection @ 0x140528FEC (MiDeleteCachedSubsection.c)
 *     MiSetPagesModified @ 0x1405352F0 (MiSetPagesModified.c)
 *     MmFlushVirtualMemory @ 0x1405E85C4 (MmFlushVirtualMemory.c)
 *     MmExtendSection @ 0x1405E894C (MmExtendSection.c)
 *     NtAreMappedFilesTheSame @ 0x14061C730 (NtAreMappedFilesTheSame.c)
 *     MiAllowImageMap @ 0x140687660 (MiAllowImageMap.c)
 *     MiUnmapViewOfSection @ 0x140687D60 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x140688090 (MiUnmapVad.c)
 *     MmCreateSpecialImageSection @ 0x140698234 (MmCreateSpecialImageSection.c)
 *     MiParseComAndCetHeaders @ 0x1406A9AD4 (MiParseComAndCetHeaders.c)
 *     MiParseImageLoadConfig @ 0x1406C14D8 (MiParseImageLoadConfig.c)
 *     MiLogRelocationFaults @ 0x1406C1E9C (MiLogRelocationFaults.c)
 *     MiMapImageInSystemSpace @ 0x1406C3D80 (MiMapImageInSystemSpace.c)
 *     MiCreateSectionCommon @ 0x14071E810 (MiCreateSectionCommon.c)
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x14075C804 (MiDriverLoadSucceeded.c)
 *     MiLoadUserSymbols @ 0x1407D0F7C (MiLoadUserSymbols.c)
 *     MmGetFileNameForSection @ 0x1408C42BC (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x1408C46CC (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x1408CF670 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x1408D1180 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x1408D1310 (MmSectionToSectionObjectPointers.c)
 *     MiMapImageForEnclaveUse @ 0x1408D3B1C (MiMapImageForEnclaveUse.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14034E290 (ObDereferenceObjectDeferDelete.c)
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
