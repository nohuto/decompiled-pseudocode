/*
 * XREFs of MiGetControlAreaPartition @ 0x14025B3A4
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x14061E930 (MmQueryVirtualMemory.c)
 *     MiChargeSegmentCommit @ 0x14061FED0 (MiChargeSegmentCommit.c)
 *     MiExtendSection @ 0x140689798 (MiExtendSection.c)
 *     MiAllocatePerSessionProtos @ 0x1406BCA38 (MiAllocatePerSessionProtos.c)
 *     MiRelocateImage @ 0x1406D54B0 (MiRelocateImage.c)
 *     MiSegmentDelete @ 0x1406E8110 (MiSegmentDelete.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EDDD0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1406EF910 (MiPfPrepareReadList.c)
 *     MiCreateImageOrDataSection @ 0x140706F10 (MiCreateImageOrDataSection.c)
 *     MiMapImageInSystemSpace @ 0x140715730 (MiMapImageInSystemSpace.c)
 *     MiFreeInitializationCode @ 0x14075EC6C (MiFreeInitializationCode.c)
 *     MiAllocateFileExtents @ 0x1408CF510 (MiAllocateFileExtents.c)
 *     MiFillPerSessionProtos @ 0x1408D7FE0 (MiFillPerSessionProtos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
}
