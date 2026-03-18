/*
 * XREFs of MmMapIoSpaceEx @ 0x140215340
 * Callers:
 *     HalpCheckAndReportGhes @ 0x14021294C (HalpCheckAndReportGhes.c)
 *     HalpAcpiGetRsdt @ 0x140213908 (HalpAcpiGetRsdt.c)
 *     HalpAcpiCheckAndMapTable @ 0x140215144 (HalpAcpiCheckAndMapTable.c)
 *     MmMapIoSpace @ 0x140215300 (MmMapIoSpace.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x140396A68 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     BgpFwLibraryEnable @ 0x1403AA8D8 (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x1403B6B58 (HvlEnlightenProcessor.c)
 *     HalInitializeBios @ 0x1403D0150 (HalInitializeBios.c)
 *     WmipFirmwareTableHandler @ 0x1403D9B80 (WmipFirmwareTableHandler.c)
 *     HvlPhase1Initialize @ 0x1403DF080 (HvlPhase1Initialize.c)
 *     HalpMcaExtendedLogInitialize @ 0x140506DF0 (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x140512EF0 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpSignalRAS @ 0x14051BEFC (HalpSignalRAS.c)
 *     HvlpEnableNextLogicalProcessor @ 0x14054445C (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeHvCrashdump @ 0x14054B14C (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x1405514D0 (BgkNotifyDisplayOwnershipLost.c)
 *     MiHugePageOperation @ 0x140586E78 (MiHugePageOperation.c)
 *     BgpFwMapFrameBuffer @ 0x14064D6B0 (BgpFwMapFrameBuffer.c)
 *     IpmiHwKcsInit @ 0x1406529D4 (IpmiHwKcsInit.c)
 *     InbvPortInitialize @ 0x14065445C (InbvPortInitialize.c)
 *     WmipGetSMBiosTableData @ 0x140693800 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x14085FAA4 (ExpGetSystemPlatformBinary.c)
 *     MiMapNewPfns @ 0x140969514 (MiMapNewPfns.c)
 *     WmipFindSMBiosStructure @ 0x1409DC350 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1409DC494 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1409DC58C (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x1409DCAD0 (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x140A092FC (WheapClearPoison.c)
 *     PopGetHwConfigurationSignature @ 0x140A52AD8 (PopGetHwConfigurationSignature.c)
 *     HalpMapNvsArea @ 0x140A52CF4 (HalpMapNvsArea.c)
 *     HalpInitializeGenericErrorSource @ 0x140A5AC18 (HalpInitializeGenericErrorSource.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140A5AEB0 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140A61D50 (HalpInitGenericErrorSourceEntryV2.c)
 *     VerifierMmMapIoSpace @ 0x140A9FE70 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapIoSpaceEx @ 0x140A9FFA0 (VerifierMmMapIoSpaceEx.c)
 *     KiVerifyXcpt15 @ 0x140AD6320 (KiVerifyXcpt15.c)
 *     HalpAuditQuerySlicAddresses @ 0x140AF8D68 (HalpAuditQuerySlicAddresses.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140AF8F6C (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditGetExtendedBiosDataArea @ 0x140AF910C (HalpAuditGetExtendedBiosDataArea.c)
 *     PipInitComputerIds @ 0x140B0F20C (PipInitComputerIds.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140B1D9DC (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140B2388C (HalpPowerInitFwPerformanceTableMappings.c)
 * Callees:
 *     MiMapContiguousMemory @ 0x14021538C (MiMapContiguousMemory.c)
 *     MiMakeProtectionMask @ 0x14032BCC0 (MiMakeProtectionMask.c)
 */

__int64 __fastcall MmMapIoSpaceEx(__int64 a1, __int64 a2, unsigned int a3)
{
  int ProtectionMask; // eax
  int v4; // r10d
  int v5; // r11d

  ProtectionMask = MiMakeProtectionMask(a3);
  if ( (ProtectionMask & 2) != 0 && (ProtectionMask & 0xFFFFFFF8) == 0x18 && (ProtectionMask & 7) != 0 )
    return 0LL;
  else
    return MiMapContiguousMemory(v4, v5, v5, ProtectionMask, 0);
}
