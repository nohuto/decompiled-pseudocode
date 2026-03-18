/*
 * XREFs of MiVadDeleted @ 0x14022C150
 * Callers:
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x1406242E8 (MmCleanProcessAddressSpace.c)
 *     MiPrepareVadDelete @ 0x14062649C (MiPrepareVadDelete.c)
 *     MiReturnPageTablePageCommitment @ 0x1406265B0 (MiReturnPageTablePageCommitment.c)
 *     MiPopulateCfgBitMap @ 0x140629B48 (MiPopulateCfgBitMap.c)
 *     MiMarkSharedImageCfgBits @ 0x14062A758 (MiMarkSharedImageCfgBits.c)
 *     MiLockVadRange @ 0x14062E080 (MiLockVadRange.c)
 *     MiAllocateVirtualMemory @ 0x14067B2A0 (MiAllocateVirtualMemory.c)
 *     MiCleanVad @ 0x14068551C (MiCleanVad.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140686200 (MiAllocateFromSubAllocatedRegion.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406F0160 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     NtAreMappedFilesTheSame @ 0x1406F0FC0 (NtAreMappedFilesTheSame.c)
 *     MiHotPatchImage @ 0x1408CCB74 (MiHotPatchImage.c)
 *     MiHotPatchProcess @ 0x1408CCE98 (MiHotPatchProcess.c)
 *     MiPerformImageHotPatch @ 0x1408CF704 (MiPerformImageHotPatch.c)
 *     MiSetImageHotPatchAllowed @ 0x1408D0D44 (MiSetImageHotPatchAllowed.c)
 *     MmIsFileMapped @ 0x1408D3860 (MmIsFileMapped.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D5DB0 (MiLoadSectionIntoVsmEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408DABC8 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) >> 2) & 1;
}
