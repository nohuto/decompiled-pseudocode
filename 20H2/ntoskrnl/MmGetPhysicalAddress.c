/*
 * XREFs of MmGetPhysicalAddress @ 0x1402FE520
 * Callers:
 *     MiAllocateContiguousMemory @ 0x14025FFCC (MiAllocateContiguousMemory.c)
 *     EtwpFreeTraceBuffer @ 0x1403604A4 (EtwpFreeTraceBuffer.c)
 *     HalAllocateCommonBufferExV2 @ 0x140380DF0 (HalAllocateCommonBufferExV2.c)
 *     PopGetNextTable @ 0x140383070 (PopGetNextTable.c)
 *     PoSetHiberRange @ 0x140387900 (PoSetHiberRange.c)
 *     BgpFwLibraryEnable @ 0x14039BFB8 (BgpFwLibraryEnable.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x1403A0934 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpInterruptBuildStartupStub @ 0x1403A0CC0 (HalpInterruptBuildStartupStub.c)
 *     HvlEnlightenProcessor @ 0x1403A70D8 (HvlEnlightenProcessor.c)
 *     HvlpTryConfigureInterface @ 0x1403A881C (HvlpTryConfigureInterface.c)
 *     HalpHvStartVirtualProcessor @ 0x1404C12B0 (HalpHvStartVirtualProcessor.c)
 *     HalpDmaAllocateContiguousMemory @ 0x1404C4E28 (HalpDmaAllocateContiguousMemory.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C4F2C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaControllerInitializeController @ 0x1404CCDD8 (HalpDmaControllerInitializeController.c)
 *     HalpInterruptMapParkedPage @ 0x1404CFF30 (HalpInterruptMapParkedPage.c)
 *     HalpAcpiAccessSecureAddress @ 0x1404D11A0 (HalpAcpiAccessSecureAddress.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404D3770 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpIommuGetDmarptRootAddress @ 0x1404DA228 (HalpIommuGetDmarptRootAddress.c)
 *     HalpIommuInitializeDmarPageTable @ 0x1404DA28C (HalpIommuInitializeDmarPageTable.c)
 *     HalpIommuMapLogical @ 0x1404DA414 (HalpIommuMapLogical.c)
 *     HalpIommuMapLogicalRange @ 0x1404DA7FC (HalpIommuMapLogicalRange.c)
 *     HsaGrowPasidTable @ 0x1404E2020 (HsaGrowPasidTable.c)
 *     HsaUpdateDeviceTableEntry @ 0x1404E2918 (HsaUpdateDeviceTableEntry.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1404F0AC0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpAcquireHypercallPage @ 0x1404F0CA0 (HvlpAcquireHypercallPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x1404F2488 (HvlpSetupCachedHypercallPages.c)
 *     HvlpSetupSchedulerAssist @ 0x1404F253C (HvlpSetupSchedulerAssist.c)
 *     HvlpPhase0Enlightenments @ 0x1404F8CF4 (HvlpPhase0Enlightenments.c)
 *     HvlpSetupPageListIteration @ 0x1404F9C2C (HvlpSetupPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1404F9CD4 (HvlpStartSecurePageListIteration.c)
 *     HvlSetupLiveDumpBuffer @ 0x1404F9E10 (HvlSetupLiveDumpBuffer.c)
 *     VslFinalizeLiveDumpInSk @ 0x1404FA6B8 (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x1404FA7D4 (VslFinishStartSecureProcessor.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1404FC09C (VslpAddLiveDumpBufferChunk.c)
 *     IoFreeDumpRange @ 0x1405007E0 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x140500E50 (IoSetDumpRange.c)
 *     IopWriteTriageDumpToFirmware @ 0x1405033D0 (IopWriteTriageDumpToFirmware.c)
 *     PnprCopyReservedMapping @ 0x14050D610 (PnprCopyReservedMapping.c)
 *     PnprRecopyAddress @ 0x14050DC90 (PnprRecopyAddress.c)
 *     MiDbgCopyMemory @ 0x140543DA0 (MiDbgCopyMemory.c)
 *     MmStoreLogCorruptionFixed @ 0x140553030 (MmStoreLogCorruptionFixed.c)
 *     SmEtwLogStoreCorruption @ 0x14059BF8C (SmEtwLogStoreCorruption.c)
 *     SmPrepareForFatalHeapCorruption @ 0x14059E270 (SmPrepareForFatalHeapCorruption.c)
 *     SmPrepareForFatalPageError @ 0x14059E378 (SmPrepareForFatalPageError.c)
 *     HvlInitializeProcessor @ 0x140795810 (HvlInitializeProcessor.c)
 *     VslStartSecureProcessor @ 0x140892D28 (VslStartSecureProcessor.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14089A9BC (IopLiveDumpDiscardVirtualAddressRange.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x14094AC84 (EtwpBuildMdlForTraceBuffer.c)
 *     PopWriteHiberPages @ 0x140993EBC (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x140996DB4 (PopRequestWrite.c)
 *     PopBuildMemoryImageHeader @ 0x140999654 (PopBuildMemoryImageHeader.c)
 *     HalpCommitCR3Worker @ 0x14099C070 (HalpCommitCR3Worker.c)
 *     HalpMmBuildTiledMemoryMap @ 0x14099CC3C (HalpMmBuildTiledMemoryMap.c)
 *     HalpMapCR3Ex @ 0x14099CD20 (HalpMapCR3Ex.c)
 *     HalpCheckLowMemoryPreSleep @ 0x1409AB1CC (HalpCheckLowMemoryPreSleep.c)
 *     IvtInitializeIommu @ 0x1409ACA80 (IvtInitializeIommu.c)
 *     HsaInitializeIommu @ 0x1409AD700 (HsaInitializeIommu.c)
 *     PopHiberReadChecksums @ 0x1409B4478 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x1409B4954 (PopRequestRead.c)
 *     ViAllocateMapRegisterFile @ 0x1409D05D4 (ViAllocateMapRegisterFile.c)
 *     BgpFwLibraryInitialize @ 0x1409F59E8 (BgpFwLibraryInitialize.c)
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
 *     IommupHvInitializeLibrary @ 0x140A90904 (IommupHvInitializeLibrary.c)
 *     VslBindNtIum @ 0x140A92610 (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x140A92768 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiGetPhysicalAddress @ 0x1402FE554 (MiGetPhysicalAddress.c)
 */

PHYSICAL_ADDRESS __stdcall MmGetPhysicalAddress(PVOID BaseAddress)
{
  int PhysicalAddress; // eax
  int v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v4 = 0LL;
  PhysicalAddress = MiGetPhysicalAddress(BaseAddress, &v4, &v3);
  return (PHYSICAL_ADDRESS)(v4 & -(__int64)(PhysicalAddress != 0));
}
