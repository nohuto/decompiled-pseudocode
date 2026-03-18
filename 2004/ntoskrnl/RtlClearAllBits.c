/*
 * XREFs of RtlClearAllBits @ 0x140271930
 * Callers:
 *     MiInitializePrivateFixupBitmap @ 0x1405FC5E0 (MiInitializePrivateFixupBitmap.c)
 *     SepAddLuidToIndexEntry @ 0x140614528 (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140631C0C (SepGetLowBoxNumberEntry.c)
 *     HvStoreModifiedData @ 0x14063B818 (HvStoreModifiedData.c)
 *     CmCheckRegistry @ 0x14063BE80 (CmCheckRegistry.c)
 *     HvResetDirtyData @ 0x14063C05C (HvResetDirtyData.c)
 *     MiCaptureImageExceptionValues @ 0x1407489CC (MiCaptureImageExceptionValues.c)
 *     PopAllocateHiberContext @ 0x140764C64 (PopAllocateHiberContext.c)
 *     MiSessionCreateInternal @ 0x140774830 (MiSessionCreateInternal.c)
 *     SepInitializeLowBoxNumberTable @ 0x14077C188 (SepInitializeLowBoxNumberTable.c)
 *     MmStoreRegister @ 0x1407A23D0 (MmStoreRegister.c)
 *     HalpIrtExtendRemappingRange @ 0x1408626F8 (HalpIrtExtendRemappingRange.c)
 *     HvpPerformLogFileRecovery @ 0x140870C80 (HvpPerformLogFileRecovery.c)
 *     MiPrepareToHotPatchImage @ 0x1408CA038 (MiPrepareToHotPatchImage.c)
 *     MiExpandPartitionIds @ 0x1408D7858 (MiExpandPartitionIds.c)
 *     SmcStoreResize @ 0x14092AA80 (SmcStoreResize.c)
 *     EtwpUpdateStackTracing @ 0x14093238C (EtwpUpdateStackTracing.c)
 *     HalpIommuInitializeAll @ 0x140997E14 (HalpIommuInitializeAll.c)
 *     HalpCheckLowMemoryPreSleep @ 0x1409A526C (HalpCheckLowMemoryPreSleep.c)
 *     ViAllocateContiguousMemory @ 0x1409CA39C (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x1409F05B8 (BgpFwInitializeReservePool.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
