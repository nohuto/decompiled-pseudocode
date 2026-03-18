/*
 * XREFs of RtlClearAllBits @ 0x140204890
 * Callers:
 *     HvStoreModifiedData @ 0x1405DEA18 (HvStoreModifiedData.c)
 *     CmCheckRegistry @ 0x1405DF080 (CmCheckRegistry.c)
 *     HvResetDirtyData @ 0x1405DF25C (HvResetDirtyData.c)
 *     MiInitializePrivateFixupBitmap @ 0x140681AF0 (MiInitializePrivateFixupBitmap.c)
 *     SepGetLowBoxNumberEntry @ 0x14068E0C8 (SepGetLowBoxNumberEntry.c)
 *     SepAddLuidToIndexEntry @ 0x14068F8A0 (SepAddLuidToIndexEntry.c)
 *     MiCaptureImageExceptionValues @ 0x1407575AC (MiCaptureImageExceptionValues.c)
 *     PopAllocateHiberContext @ 0x140773C94 (PopAllocateHiberContext.c)
 *     MiSessionCreateInternal @ 0x140782E30 (MiSessionCreateInternal.c)
 *     SepInitializeLowBoxNumberTable @ 0x14078A788 (SepInitializeLowBoxNumberTable.c)
 *     MmStoreRegister @ 0x1407B1700 (MmStoreRegister.c)
 *     HalpIrtExtendRemappingRange @ 0x140868118 (HalpIrtExtendRemappingRange.c)
 *     HvpPerformLogFileRecovery @ 0x1408767D8 (HvpPerformLogFileRecovery.c)
 *     MiPrepareToHotPatchImage @ 0x1408CFE78 (MiPrepareToHotPatchImage.c)
 *     MiExpandPartitionIds @ 0x1408DD698 (MiExpandPartitionIds.c)
 *     SmcStoreResize @ 0x1409308A8 (SmcStoreResize.c)
 *     EtwpUpdateStackTracing @ 0x1409381BC (EtwpUpdateStackTracing.c)
 *     HalpIommuInitializeAll @ 0x14099DE54 (HalpIommuInitializeAll.c)
 *     HalpCheckLowMemoryPreSleep @ 0x1409AB1CC (HalpCheckLowMemoryPreSleep.c)
 *     ViAllocateContiguousMemory @ 0x1409D03BC (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x1409F65B8 (BgpFwInitializeReservePool.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
