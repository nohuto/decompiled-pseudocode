/*
 * XREFs of MiVadDeleted @ 0x1402A4680
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405ED060 (MiAllocateVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x1406339B8 (MmCleanProcessAddressSpace.c)
 *     MmQueryVirtualMemory @ 0x140634A10 (MmQueryVirtualMemory.c)
 *     MiCleanVad @ 0x1406357F0 (MiCleanVad.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140635840 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiLockVadRange @ 0x140637338 (MiLockVadRange.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140639628 (MiAllocateFromSubAllocatedRegion.c)
 *     MiPrepareVadDelete @ 0x14063AD6C (MiPrepareVadDelete.c)
 *     MiPopulateCfgBitMap @ 0x14063C7A0 (MiPopulateCfgBitMap.c)
 *     MiMarkSharedImageCfgBits @ 0x14063D3A8 (MiMarkSharedImageCfgBits.c)
 *     MiReturnPageTablePageCommitment @ 0x14063D620 (MiReturnPageTablePageCommitment.c)
 *     NtAreMappedFilesTheSame @ 0x1406E74A0 (NtAreMappedFilesTheSame.c)
 *     MiHotPatchImage @ 0x1408C59E4 (MiHotPatchImage.c)
 *     MiHotPatchProcess @ 0x1408C5D08 (MiHotPatchProcess.c)
 *     MiPerformImageHotPatch @ 0x1408C8574 (MiPerformImageHotPatch.c)
 *     MiSetImageHotPatchAllowed @ 0x1408C9BB4 (MiSetImageHotPatchAllowed.c)
 *     MmIsFileMapped @ 0x1408CC6D0 (MmIsFileMapped.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408CEC20 (MiLoadSectionIntoVsmEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408D3A38 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) >> 2) & 1;
}
