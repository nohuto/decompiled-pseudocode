/*
 * XREFs of MmGetPhysicalAddress @ 0x14033BB60
 * Callers:
 *     MiAllocateContiguousMemory @ 0x1402F8FFC (MiAllocateContiguousMemory.c)
 *     EtwpFreeTraceBuffer @ 0x14033FF1C (EtwpFreeTraceBuffer.c)
 *     HalAllocateCommonBufferExV2 @ 0x14037E6D0 (HalAllocateCommonBufferExV2.c)
 *     PopGetNextTable @ 0x140380B50 (PopGetNextTable.c)
 *     PoSetHiberRange @ 0x1403847F0 (PoSetHiberRange.c)
 *     BgpFwLibraryEnable @ 0x140399368 (BgpFwLibraryEnable.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14039DCD4 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpInterruptBuildStartupStub @ 0x14039E060 (HalpInterruptBuildStartupStub.c)
 *     HvlEnlightenProcessor @ 0x1403A4558 (HvlEnlightenProcessor.c)
 *     HvlpTryConfigureInterface @ 0x1403AA0B0 (HvlpTryConfigureInterface.c)
 *     HalpHvStartVirtualProcessor @ 0x1404BD6B0 (HalpHvStartVirtualProcessor.c)
 *     HalpDmaAllocateContiguousMemory @ 0x1404C1498 (HalpDmaAllocateContiguousMemory.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C159C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaControllerInitializeController @ 0x1404C93C8 (HalpDmaControllerInitializeController.c)
 *     HalpInterruptMapParkedPage @ 0x1404CC4E0 (HalpInterruptMapParkedPage.c)
 *     HalpAcpiAccessSecureAddress @ 0x1404CD750 (HalpAcpiAccessSecureAddress.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404CFD20 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpIommuGetDmarptRootAddress @ 0x1404D6788 (HalpIommuGetDmarptRootAddress.c)
 *     HalpIommuInitializeDmarPageTable @ 0x1404D67EC (HalpIommuInitializeDmarPageTable.c)
 *     HalpIommuMapLogical @ 0x1404D6974 (HalpIommuMapLogical.c)
 *     HalpIommuMapLogicalRange @ 0x1404D6D5C (HalpIommuMapLogicalRange.c)
 *     HsaGrowPasidTable @ 0x1404DE4D0 (HsaGrowPasidTable.c)
 *     HsaUpdateDeviceTableEntry @ 0x1404DEDC8 (HsaUpdateDeviceTableEntry.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1404ECC00 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x1404EE5DC (HvlpSetupCachedHypercallPages.c)
 *     HvlpSetupSchedulerAssist @ 0x1404EE690 (HvlpSetupSchedulerAssist.c)
 *     HvlpPhase0Enlightenments @ 0x1404F4E1C (HvlpPhase0Enlightenments.c)
 *     HvlpSetupPageListIteration @ 0x1404F5D4C (HvlpSetupPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1404F5DF4 (HvlpStartSecurePageListIteration.c)
 *     HvlSetupLiveDumpBuffer @ 0x1404F5F30 (HvlSetupLiveDumpBuffer.c)
 *     VslFinalizeLiveDumpInSk @ 0x1404F67D8 (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x1404F68F4 (VslFinishStartSecureProcessor.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1404F81BC (VslpAddLiveDumpBufferChunk.c)
 *     IoFreeDumpRange @ 0x1404FC8C0 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1404FCF30 (IoSetDumpRange.c)
 *     IopWriteTriageDumpToFirmware @ 0x1404FF4B0 (IopWriteTriageDumpToFirmware.c)
 *     PnprCopyReservedMapping @ 0x140509690 (PnprCopyReservedMapping.c)
 *     PnprRecopyAddress @ 0x140509D10 (PnprRecopyAddress.c)
 *     MiDbgCopyMemory @ 0x14053FD80 (MiDbgCopyMemory.c)
 *     MmStoreLogCorruptionFixed @ 0x14054F010 (MmStoreLogCorruptionFixed.c)
 *     SmEtwLogStoreCorruption @ 0x140597DFC (SmEtwLogStoreCorruption.c)
 *     SmPrepareForFatalHeapCorruption @ 0x14059A0E0 (SmPrepareForFatalHeapCorruption.c)
 *     SmPrepareForFatalPageError @ 0x14059A1E8 (SmPrepareForFatalPageError.c)
 *     HvlInitializeProcessor @ 0x14078217C (HvlInitializeProcessor.c)
 *     VslStartSecureProcessor @ 0x14088BEB8 (VslStartSecureProcessor.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x1408939EC (IopLiveDumpDiscardVirtualAddressRange.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x140943C50 (EtwpBuildMdlForTraceBuffer.c)
 *     PopWriteHiberPages @ 0x14098D6B4 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x14098FFF4 (PopRequestWrite.c)
 *     PopBuildMemoryImageHeader @ 0x140991EB4 (PopBuildMemoryImageHeader.c)
 *     HalpCommitCR3Worker @ 0x140994C5C (HalpCommitCR3Worker.c)
 *     HalpMmBuildTiledMemoryMap @ 0x14099582C (HalpMmBuildTiledMemoryMap.c)
 *     HalpMapCR3Ex @ 0x140995910 (HalpMapCR3Ex.c)
 *     HalpCheckLowMemoryPreSleep @ 0x1409A442C (HalpCheckLowMemoryPreSleep.c)
 *     IvtInitializeIommu @ 0x1409A5CD0 (IvtInitializeIommu.c)
 *     HsaInitializeIommu @ 0x1409A6950 (HsaInitializeIommu.c)
 *     PopHiberReadChecksums @ 0x1409AD6A8 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x1409ADB84 (PopRequestRead.c)
 *     ViAllocateMapRegisterFile @ 0x1409CA5A4 (ViAllocateMapRegisterFile.c)
 *     BgpFwLibraryInitialize @ 0x1409EF9E8 (BgpFwLibraryInitialize.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 *     IommupHvInitializeLibrary @ 0x140A8B664 (IommupHvInitializeLibrary.c)
 *     VslBindNtIum @ 0x140A8D328 (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x140A8D480 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiGetPhysicalAddress @ 0x14033BB94 (MiGetPhysicalAddress.c)
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
