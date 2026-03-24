/*
 * XREFs of MmGetPhysicalAddress @ 0x1402A8700
 * Callers:
 *     MiAllocateContiguousMemory @ 0x140294F3C (MiAllocateContiguousMemory.c)
 *     EtwpFreeTraceBuffer @ 0x1402C7EC4 (EtwpFreeTraceBuffer.c)
 *     HalAllocateCommonBufferExV2 @ 0x140381350 (HalAllocateCommonBufferExV2.c)
 *     PopGetNextTable @ 0x140383660 (PopGetNextTable.c)
 *     PoSetHiberRange @ 0x140388060 (PoSetHiberRange.c)
 *     BgpFwLibraryEnable @ 0x14039C888 (BgpFwLibraryEnable.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x1403A11F4 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpInterruptBuildStartupStub @ 0x1403A1580 (HalpInterruptBuildStartupStub.c)
 *     HvlEnlightenProcessor @ 0x1403A7998 (HvlEnlightenProcessor.c)
 *     HvlpTryConfigureInterface @ 0x1403AE640 (HvlpTryConfigureInterface.c)
 *     HalpHvStartVirtualProcessor @ 0x1404C2C80 (HalpHvStartVirtualProcessor.c)
 *     HalpDmaAllocateContiguousMemory @ 0x1404C67F8 (HalpDmaAllocateContiguousMemory.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C68FC (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaControllerInitializeController @ 0x1404CE7A8 (HalpDmaControllerInitializeController.c)
 *     HalpInterruptMapParkedPage @ 0x1404D1900 (HalpInterruptMapParkedPage.c)
 *     HalpAcpiAccessSecureAddress @ 0x1404D2B70 (HalpAcpiAccessSecureAddress.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404D5140 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpIommuGetDmarptRootAddress @ 0x1404DBC38 (HalpIommuGetDmarptRootAddress.c)
 *     HalpIommuInitializeDmarPageTable @ 0x1404DBC9C (HalpIommuInitializeDmarPageTable.c)
 *     HalpIommuMapLogical @ 0x1404DBE24 (HalpIommuMapLogical.c)
 *     HalpIommuMapLogicalRange @ 0x1404DC20C (HalpIommuMapLogicalRange.c)
 *     HsaGrowPasidTable @ 0x1404E3B10 (HsaGrowPasidTable.c)
 *     HsaUpdateDeviceTableEntry @ 0x1404E43F8 (HsaUpdateDeviceTableEntry.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1404F2660 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpAcquireHypercallPage @ 0x1404F2840 (HvlpAcquireHypercallPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x1404F4028 (HvlpSetupCachedHypercallPages.c)
 *     HvlpSetupSchedulerAssist @ 0x1404F40DC (HvlpSetupSchedulerAssist.c)
 *     HvlpPhase0Enlightenments @ 0x1404FA894 (HvlpPhase0Enlightenments.c)
 *     HvlpSetupPageListIteration @ 0x1404FB7CC (HvlpSetupPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1404FB874 (HvlpStartSecurePageListIteration.c)
 *     HvlSetupLiveDumpBuffer @ 0x1404FB9B0 (HvlSetupLiveDumpBuffer.c)
 *     VslFinalizeLiveDumpInSk @ 0x1404FC258 (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x1404FC374 (VslFinishStartSecureProcessor.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1404FDC3C (VslpAddLiveDumpBufferChunk.c)
 *     IoFreeDumpRange @ 0x140502360 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1405029D0 (IoSetDumpRange.c)
 *     IopWriteTriageDumpToFirmware @ 0x140504F50 (IopWriteTriageDumpToFirmware.c)
 *     PnprCopyReservedMapping @ 0x14050F140 (PnprCopyReservedMapping.c)
 *     PnprRecopyAddress @ 0x14050F7C0 (PnprRecopyAddress.c)
 *     MiDbgCopyMemory @ 0x1405458A4 (MiDbgCopyMemory.c)
 *     MmStoreLogCorruptionFixed @ 0x140554B00 (MmStoreLogCorruptionFixed.c)
 *     SmEtwLogStoreCorruption @ 0x14059D9BC (SmEtwLogStoreCorruption.c)
 *     SmPrepareForFatalHeapCorruption @ 0x14059FCA0 (SmPrepareForFatalHeapCorruption.c)
 *     SmPrepareForFatalPageError @ 0x14059FDA8 (SmPrepareForFatalPageError.c)
 *     HvlInitializeProcessor @ 0x14079FD30 (HvlInitializeProcessor.c)
 *     VslStartSecureProcessor @ 0x1408902F8 (VslStartSecureProcessor.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140897F8C (IopLiveDumpDiscardVirtualAddressRange.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x140948454 (EtwpBuildMdlForTraceBuffer.c)
 *     PopWriteHiberPages @ 0x140990EBC (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x140993DB4 (PopRequestWrite.c)
 *     PopBuildMemoryImageHeader @ 0x140996724 (PopBuildMemoryImageHeader.c)
 *     HalpCommitCR3Worker @ 0x1409995EC (HalpCommitCR3Worker.c)
 *     HalpMmBuildTiledMemoryMap @ 0x14099A1BC (HalpMmBuildTiledMemoryMap.c)
 *     HalpMapCR3Ex @ 0x14099A2A0 (HalpMapCR3Ex.c)
 *     HalpCheckLowMemoryPreSleep @ 0x1409A809C (HalpCheckLowMemoryPreSleep.c)
 *     IvtInitializeIommu @ 0x1409A9950 (IvtInitializeIommu.c)
 *     HsaInitializeIommu @ 0x1409AA5F0 (HsaInitializeIommu.c)
 *     PopHiberReadChecksums @ 0x1409B1378 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x1409B1854 (PopRequestRead.c)
 *     ViAllocateMapRegisterFile @ 0x1409CD5C4 (ViAllocateMapRegisterFile.c)
 *     BgpFwLibraryInitialize @ 0x1409F29E8 (BgpFwLibraryInitialize.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 *     IommupHvInitializeLibrary @ 0x140A8D764 (IommupHvInitializeLibrary.c)
 *     VslBindNtIum @ 0x140A8F470 (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x140A8F5C8 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiGetPhysicalAddress @ 0x1402A8734 (MiGetPhysicalAddress.c)
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
