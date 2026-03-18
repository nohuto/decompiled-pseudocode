/*
 * XREFs of MiVadDeleted @ 0x14024B650
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1405FE978 (MmCleanProcessAddressSpace.c)
 *     MmQueryVirtualMemory @ 0x1405FF9D0 (MmQueryVirtualMemory.c)
 *     MiCleanVad @ 0x1406007B0 (MiCleanVad.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140600800 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiLockVadRange @ 0x1406022F8 (MiLockVadRange.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406045E8 (MiAllocateFromSubAllocatedRegion.c)
 *     MiPrepareVadDelete @ 0x140605D2C (MiPrepareVadDelete.c)
 *     MiPopulateCfgBitMap @ 0x140607650 (MiPopulateCfgBitMap.c)
 *     MiMarkSharedImageCfgBits @ 0x140608258 (MiMarkSharedImageCfgBits.c)
 *     MiReturnPageTablePageCommitment @ 0x1406084D0 (MiReturnPageTablePageCommitment.c)
 *     MiAllocateVirtualMemory @ 0x140696560 (MiAllocateVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x14070B3D0 (NtAreMappedFilesTheSame.c)
 *     MiHotPatchImage @ 0x1408C6D34 (MiHotPatchImage.c)
 *     MiHotPatchProcess @ 0x1408C7058 (MiHotPatchProcess.c)
 *     MiPerformImageHotPatch @ 0x1408C98C4 (MiPerformImageHotPatch.c)
 *     MiSetImageHotPatchAllowed @ 0x1408CAF04 (MiSetImageHotPatchAllowed.c)
 *     MmIsFileMapped @ 0x1408CDA20 (MmIsFileMapped.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408CFF70 (MiLoadSectionIntoVsmEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408D4D88 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadDeleted(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) >> 2) & 1;
}
