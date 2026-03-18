/*
 * XREFs of RtlClearAllBits @ 0x1402E0FC0
 * Callers:
 *     MiInitializePrivateFixupBitmap @ 0x140631620 (MiInitializePrivateFixupBitmap.c)
 *     SepGetLowBoxNumberEntry @ 0x140678498 (SepGetLowBoxNumberEntry.c)
 *     HvStoreModifiedData @ 0x140689398 (HvStoreModifiedData.c)
 *     CmCheckRegistry @ 0x140689A00 (CmCheckRegistry.c)
 *     HvResetDirtyData @ 0x140689BDC (HvResetDirtyData.c)
 *     SepAddLuidToIndexEntry @ 0x1406F7914 (SepAddLuidToIndexEntry.c)
 *     MiCaptureImageExceptionValues @ 0x140746E4C (MiCaptureImageExceptionValues.c)
 *     PopAllocateHiberContext @ 0x140763244 (PopAllocateHiberContext.c)
 *     MiSessionCreateInternal @ 0x140772420 (MiSessionCreateInternal.c)
 *     SepInitializeLowBoxNumberTable @ 0x140779D78 (SepInitializeLowBoxNumberTable.c)
 *     MmStoreRegister @ 0x14079E3F0 (MmStoreRegister.c)
 *     HalpIrtExtendRemappingRange @ 0x1408613D8 (HalpIrtExtendRemappingRange.c)
 *     HvpPerformLogFileRecovery @ 0x14086F190 (HvpPerformLogFileRecovery.c)
 *     MiPrepareToHotPatchImage @ 0x1408C8CE8 (MiPrepareToHotPatchImage.c)
 *     MiExpandPartitionIds @ 0x1408D6508 (MiExpandPartitionIds.c)
 *     SmcStoreResize @ 0x1409297D0 (SmcStoreResize.c)
 *     EtwpUpdateStackTracing @ 0x1409310DC (EtwpUpdateStackTracing.c)
 *     HalpIommuInitializeAll @ 0x140996A44 (HalpIommuInitializeAll.c)
 *     HalpCheckLowMemoryPreSleep @ 0x1409A442C (HalpCheckLowMemoryPreSleep.c)
 *     ViAllocateContiguousMemory @ 0x1409CA38C (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x1409F05B8 (BgpFwInitializeReservePool.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
