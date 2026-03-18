/*
 * XREFs of MmGetPhysicalAddress @ 0x1403617D0
 * Callers:
 *     EtwpFreeTraceBuffer @ 0x1402FFAEC (EtwpFreeTraceBuffer.c)
 *     MiAllocateContiguousMemory @ 0x14033602C (MiAllocateContiguousMemory.c)
 *     HalAllocateCommonBufferExV2 @ 0x14037F0C0 (HalAllocateCommonBufferExV2.c)
 *     PopGetNextTable @ 0x140381390 (PopGetNextTable.c)
 *     PoSetHiberRange @ 0x140385760 (PoSetHiberRange.c)
 *     BgpFwLibraryEnable @ 0x140399AF8 (BgpFwLibraryEnable.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14039E464 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpInterruptBuildStartupStub @ 0x14039E7F0 (HalpInterruptBuildStartupStub.c)
 *     HvlEnlightenProcessor @ 0x1403A4CD8 (HvlEnlightenProcessor.c)
 *     HvlpTryConfigureInterface @ 0x1403A63E0 (HvlpTryConfigureInterface.c)
 *     HalpHvStartVirtualProcessor @ 0x1404BDD90 (HalpHvStartVirtualProcessor.c)
 *     HalpDmaAllocateContiguousMemory @ 0x1404C1908 (HalpDmaAllocateContiguousMemory.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C1A0C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaControllerInitializeController @ 0x1404C9878 (HalpDmaControllerInitializeController.c)
 *     HalpInterruptMapParkedPage @ 0x1404CC990 (HalpInterruptMapParkedPage.c)
 *     HalpAcpiAccessSecureAddress @ 0x1404CDC00 (HalpAcpiAccessSecureAddress.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x1404D01D0 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpIommuGetDmarptRootAddress @ 0x1404D6C98 (HalpIommuGetDmarptRootAddress.c)
 *     HalpIommuInitializeDmarPageTable @ 0x1404D6CFC (HalpIommuInitializeDmarPageTable.c)
 *     HalpIommuMapLogical @ 0x1404D6E84 (HalpIommuMapLogical.c)
 *     HalpIommuMapLogicalRange @ 0x1404D726C (HalpIommuMapLogicalRange.c)
 *     HsaGrowPasidTable @ 0x1404DEA90 (HsaGrowPasidTable.c)
 *     HsaUpdateDeviceTableEntry @ 0x1404DF388 (HsaUpdateDeviceTableEntry.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x1404ED250 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     HvlpAcquireHypercallPage @ 0x1404ED430 (HvlpAcquireHypercallPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x1404EEC2C (HvlpSetupCachedHypercallPages.c)
 *     HvlpSetupSchedulerAssist @ 0x1404EECE0 (HvlpSetupSchedulerAssist.c)
 *     HvlpPhase0Enlightenments @ 0x1404F546C (HvlpPhase0Enlightenments.c)
 *     HvlpSetupPageListIteration @ 0x1404F639C (HvlpSetupPageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x1404F6444 (HvlpStartSecurePageListIteration.c)
 *     HvlSetupLiveDumpBuffer @ 0x1404F6580 (HvlSetupLiveDumpBuffer.c)
 *     VslFinalizeLiveDumpInSk @ 0x1404F6E28 (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x1404F6F44 (VslFinishStartSecureProcessor.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1404F880C (VslpAddLiveDumpBufferChunk.c)
 *     IoFreeDumpRange @ 0x1404FCF10 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1404FD580 (IoSetDumpRange.c)
 *     IopWriteTriageDumpToFirmware @ 0x1404FFB00 (IopWriteTriageDumpToFirmware.c)
 *     PnprCopyReservedMapping @ 0x140509CE0 (PnprCopyReservedMapping.c)
 *     PnprRecopyAddress @ 0x14050A360 (PnprRecopyAddress.c)
 *     MiDbgCopyMemory @ 0x1405403D0 (MiDbgCopyMemory.c)
 *     MmStoreLogCorruptionFixed @ 0x14054F660 (MmStoreLogCorruptionFixed.c)
 *     SmEtwLogStoreCorruption @ 0x1405984EC (SmEtwLogStoreCorruption.c)
 *     SmPrepareForFatalHeapCorruption @ 0x14059A7D0 (SmPrepareForFatalHeapCorruption.c)
 *     SmPrepareForFatalPageError @ 0x14059A8D8 (SmPrepareForFatalPageError.c)
 *     HvlInitializeProcessor @ 0x140787B00 (HvlInitializeProcessor.c)
 *     VslStartSecureProcessor @ 0x14088D1D8 (VslStartSecureProcessor.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140894D0C (IopLiveDumpDiscardVirtualAddressRange.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x140944EC4 (EtwpBuildMdlForTraceBuffer.c)
 *     PopWriteHiberPages @ 0x14098DECC (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x140990D44 (PopRequestWrite.c)
 *     PopBuildMemoryImageHeader @ 0x1409934F4 (PopBuildMemoryImageHeader.c)
 *     HalpCommitCR3Worker @ 0x140996038 (HalpCommitCR3Worker.c)
 *     HalpMmBuildTiledMemoryMap @ 0x140996BFC (HalpMmBuildTiledMemoryMap.c)
 *     HalpMapCR3Ex @ 0x140996CE0 (HalpMapCR3Ex.c)
 *     HalpCheckLowMemoryPreSleep @ 0x1409A526C (HalpCheckLowMemoryPreSleep.c)
 *     IvtInitializeIommu @ 0x1409A6B10 (IvtInitializeIommu.c)
 *     HsaInitializeIommu @ 0x1409A7790 (HsaInitializeIommu.c)
 *     PopHiberReadChecksums @ 0x1409AE508 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x1409AE9E4 (PopRequestRead.c)
 *     ViAllocateMapRegisterFile @ 0x1409CA5B4 (ViAllocateMapRegisterFile.c)
 *     BgpFwLibraryInitialize @ 0x1409EF9E8 (BgpFwLibraryInitialize.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 *     IommupHvInitializeLibrary @ 0x140A8ABF4 (IommupHvInitializeLibrary.c)
 *     VslBindNtIum @ 0x140A8C910 (VslBindNtIum.c)
 *     VslpIumPhase0Initialize @ 0x140A8CA68 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiGetPhysicalAddress @ 0x140361804 (MiGetPhysicalAddress.c)
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
