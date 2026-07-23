/*
 * XREFs of MmGetPhysicalAddress @ 0x140226840
 * Callers:
 *     MiAllocateContiguousMemory @ 0x140216BFC (MiAllocateContiguousMemory.c)
 *     EtwpFreeTraceBuffer @ 0x140246724 (EtwpFreeTraceBuffer.c)
 *     HalAllocateCommonBufferExV2 @ 0x140380EA0 (HalAllocateCommonBufferExV2.c)
 *     PopGetNextTable @ 0x140383810 (PopGetNextTable.c)
 *     PoSetHiberRange @ 0x1403881B0 (PoSetHiberRange.c)
 *     BgpFwLibraryEnable @ 0x14039C9D8 (BgpFwLibraryEnable.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x1403A1344 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpInterruptBuildStartupStub @ 0x1403A16D0 (HalpInterruptBuildStartupStub.c)
 *     HvlEnlightenProcessor @ 0x1403A7AE8 (HvlEnlightenProcessor.c)
 *     HvlpTryConfigureInterface @ 0x1403AE790 (HvlpTryConfigureInterface.c)
 *     HalpHvStartVirtualProcessor @ 0x1404C2EC0 (HalpHvStartVirtualProcessor.c)
 *     HalpDmaAllocateContiguousMemory @ 0x1404C6A38 (HalpDmaAllocateContiguousMemory.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C6B3C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaControllerInitializeController @ 0x1404CE9E8 (HalpDmaControllerInitializeController.c)
 *     HalpInterruptMapParkedPage @ 0x1404D1B40 (HalpInterruptMapParkedPage.c)
 *     HalpAcpiAccessSecureAddress @ 0x1404D2DB0 (HalpAcpiAccessSecureAddress.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404D5380 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpIommuGetDmarptRootAddress @ 0x1404DBE78 (HalpIommuGetDmarptRootAddress.c)
 *     HalpIommuInitializeDmarPageTable @ 0x1404DBEDC (HalpIommuInitializeDmarPageTable.c)
 *     HalpIommuMapLogical @ 0x1404DC064 (HalpIommuMapLogical.c)
 *     HalpIommuMapLogicalRange @ 0x1404DC44C (HalpIommuMapLogicalRange.c)
 *     HsaGrowPasidTable @ 0x1404E3D50 (HsaGrowPasidTable.c)
 *     HsaUpdateDeviceTableEntry @ 0x1404E4638 (HsaUpdateDeviceTableEntry.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1404F25E0 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpAcquireHypercallPage @ 0x1404F27C0 (HvlpAcquireHypercallPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x1404F3FA8 (HvlpSetupCachedHypercallPages.c)
 *     HvlpSetupSchedulerAssist @ 0x1404F405C (HvlpSetupSchedulerAssist.c)
 *     HvlpPhase0Enlightenments @ 0x1404FA814 (HvlpPhase0Enlightenments.c)
 *     HvlpSetupPageListIteration @ 0x1404FB74C (HvlpSetupPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1404FB7F4 (HvlpStartSecurePageListIteration.c)
 *     HvlSetupLiveDumpBuffer @ 0x1404FB930 (HvlSetupLiveDumpBuffer.c)
 *     VslFinalizeLiveDumpInSk @ 0x1404FC1D8 (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x1404FC2F4 (VslFinishStartSecureProcessor.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1404FDBBC (VslpAddLiveDumpBufferChunk.c)
 *     IoFreeDumpRange @ 0x1405022E0 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x140502950 (IoSetDumpRange.c)
 *     IopWriteTriageDumpToFirmware @ 0x140504ED0 (IopWriteTriageDumpToFirmware.c)
 *     PnprCopyReservedMapping @ 0x14050F380 (PnprCopyReservedMapping.c)
 *     PnprRecopyAddress @ 0x14050FA00 (PnprRecopyAddress.c)
 *     MiDbgCopyMemory @ 0x140545AE4 (MiDbgCopyMemory.c)
 *     MmStoreLogCorruptionFixed @ 0x140554D40 (MmStoreLogCorruptionFixed.c)
 *     SmEtwLogStoreCorruption @ 0x14059DBEC (SmEtwLogStoreCorruption.c)
 *     SmPrepareForFatalHeapCorruption @ 0x14059FED0 (SmPrepareForFatalHeapCorruption.c)
 *     SmPrepareForFatalPageError @ 0x14059FFD8 (SmPrepareForFatalPageError.c)
 *     HvlInitializeProcessor @ 0x14079FF30 (HvlInitializeProcessor.c)
 *     VslStartSecureProcessor @ 0x140890458 (VslStartSecureProcessor.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x1408980EC (IopLiveDumpDiscardVirtualAddressRange.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x140948624 (EtwpBuildMdlForTraceBuffer.c)
 *     PopWriteHiberPages @ 0x140991EBC (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x140994DB4 (PopRequestWrite.c)
 *     PopBuildMemoryImageHeader @ 0x140997724 (PopBuildMemoryImageHeader.c)
 *     HalpCommitCR3Worker @ 0x14099A5EC (HalpCommitCR3Worker.c)
 *     HalpMmBuildTiledMemoryMap @ 0x14099B1BC (HalpMmBuildTiledMemoryMap.c)
 *     HalpMapCR3Ex @ 0x14099B2A0 (HalpMapCR3Ex.c)
 *     HalpCheckLowMemoryPreSleep @ 0x1409A8FCC (HalpCheckLowMemoryPreSleep.c)
 *     IvtInitializeIommu @ 0x1409AA880 (IvtInitializeIommu.c)
 *     HsaInitializeIommu @ 0x1409AB520 (HsaInitializeIommu.c)
 *     PopHiberReadChecksums @ 0x1409B22A8 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x1409B2784 (PopRequestRead.c)
 *     ViAllocateMapRegisterFile @ 0x1409CE5C4 (ViAllocateMapRegisterFile.c)
 *     BgpFwLibraryInitialize @ 0x1409F39E8 (BgpFwLibraryInitialize.c)
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 *     IommupHvInitializeLibrary @ 0x140A8E764 (IommupHvInitializeLibrary.c)
 *     VslBindNtIum @ 0x140A90470 (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x140A905C8 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiGetPhysicalAddress @ 0x140226874 (MiGetPhysicalAddress.c)
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
