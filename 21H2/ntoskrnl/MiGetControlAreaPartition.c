/*
 * XREFs of MiGetControlAreaPartition @ 0x14027C914
 * Callers:
 *     MiExtendSection @ 0x1405E8C28 (MiExtendSection.c)
 *     MiAllocatePerSessionProtos @ 0x14061BC08 (MiAllocatePerSessionProtos.c)
 *     MmQueryVirtualMemory @ 0x1406885A0 (MmQueryVirtualMemory.c)
 *     MiChargeSegmentCommit @ 0x140689B40 (MiChargeSegmentCommit.c)
 *     MiRelocateImage @ 0x1406AC790 (MiRelocateImage.c)
 *     MiMapImageInSystemSpace @ 0x1406C3D80 (MiMapImageInSystemSpace.c)
 *     MiAllocateVirtualMemory @ 0x1406E7DB0 (MiAllocateVirtualMemory.c)
 *     MiSegmentDelete @ 0x1406FF4F0 (MiSegmentDelete.c)
 *     MiPfPrepareSequentialReadList @ 0x1407051B0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140706CF0 (MiPfPrepareReadList.c)
 *     MiCreateImageOrDataSection @ 0x14071E2F0 (MiCreateImageOrDataSection.c)
 *     MiFreeInitializationCode @ 0x14075EE2C (MiFreeInitializationCode.c)
 *     MiAllocateFileExtents @ 0x1408CF670 (MiAllocateFileExtents.c)
 *     MiFillPerSessionProtos @ 0x1408D8140 (MiFillPerSessionProtos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
}
