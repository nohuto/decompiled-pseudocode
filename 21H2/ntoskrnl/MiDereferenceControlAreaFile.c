/*
 * XREFs of MiDereferenceControlAreaFile @ 0x140280D08
 * Callers:
 *     MmCreateSpecialImageSection @ 0x14066D4BC (MmCreateSpecialImageSection.c)
 *     MmExtendSection @ 0x1406A377C (MmExtendSection.c)
 *     MiMapImageInSystemSpace @ 0x1406F3884 (MiMapImageInSystemSpace.c)
 *     MiAllowImageMap @ 0x1406F884C (MiAllowImageMap.c)
 *     MiUnmapViewOfSection @ 0x1406F8D30 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x1406F9060 (MiUnmapVad.c)
 *     MiCreateSectionCommon @ 0x1406FD140 (MiCreateSectionCommon.c)
 *     MiParseImageLoadConfig @ 0x140706ABC (MiParseImageLoadConfig.c)
 *     MiLogRelocationFaults @ 0x140707460 (MiLogRelocationFaults.c)
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x140761234 (MiDriverLoadSucceeded.c)
 *     MiParseComAndCetHeaders @ 0x1407E4D40 (MiParseComAndCetHeaders.c)
 *     MmFlushVirtualMemory @ 0x1407F0478 (MmFlushVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x1407FAEE0 (NtAreMappedFilesTheSame.c)
 *     MmSectionToSectionObjectPointers @ 0x140881BB6 (MmSectionToSectionObjectPointers.c)
 *     MmGetFileNameForSection @ 0x14096B158 (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x14096CB14 (MiFillMapFileInfo.c)
 *     MiLoadUserSymbols @ 0x14096CCF8 (MiLoadUserSymbols.c)
 *     MiAllocateFileExtents @ 0x14096F8CC (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x1409780D4 (MmIsFileMapped.c)
 *     MiMapImageForEnclaveUse @ 0x14097A9C4 (MiMapImageForEnclaveUse.c)
 * Callees:
 *     ObpTraceObjectDereferenceIfActive @ 0x140347B50 (ObpTraceObjectDereferenceIfActive.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
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
    ObDereferenceObjectDeferDeleteWithTag((PVOID)a2, 0x63536D4Du);
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
    ObpTraceObjectDereferenceIfActive(a2 - 48, 1LL);
  }
}
