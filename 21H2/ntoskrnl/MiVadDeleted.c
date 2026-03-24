/*
 * XREFs of MiVadDeleted @ 0x14025B330
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     MiLockVadRange @ 0x14061DC20 (MiLockVadRange.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14061E590 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiCleanVad @ 0x14061E898 (MiCleanVad.c)
 *     MmQueryVirtualMemory @ 0x14061E930 (MmQueryVirtualMemory.c)
 *     MiPopulateCfgBitMap @ 0x14061FDB8 (MiPopulateCfgBitMap.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x14064C180 (MiAllocateFromSubAllocatedRegion.c)
 *     NtAreMappedFilesTheSame @ 0x1406BD520 (NtAreMappedFilesTheSame.c)
 *     MiMarkSharedImageCfgBits @ 0x1406E9604 (MiMarkSharedImageCfgBits.c)
 *     MmCleanProcessAddressSpace @ 0x1406EB24C (MmCleanProcessAddressSpace.c)
 *     MiPrepareVadDelete @ 0x1406EE878 (MiPrepareVadDelete.c)
 *     MiReturnPageTablePageCommitment @ 0x1406EE990 (MiReturnPageTablePageCommitment.c)
 *     MiHotPatchImage @ 0x1408CA334 (MiHotPatchImage.c)
 *     MiHotPatchProcess @ 0x1408CA658 (MiHotPatchProcess.c)
 *     MiPerformImageHotPatch @ 0x1408CCEC4 (MiPerformImageHotPatch.c)
 *     MiSetImageHotPatchAllowed @ 0x1408CE504 (MiSetImageHotPatchAllowed.c)
 *     MmIsFileMapped @ 0x1408D1020 (MmIsFileMapped.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D3570 (MiLoadSectionIntoVsmEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408D8388 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) >> 2) & 1;
}
