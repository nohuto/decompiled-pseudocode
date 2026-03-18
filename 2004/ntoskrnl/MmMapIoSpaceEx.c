/*
 * XREFs of MmMapIoSpaceEx @ 0x140335F40
 * Callers:
 *     HalpAcpiGetRsdt @ 0x140335638 (HalpAcpiGetRsdt.c)
 *     MmMapIoSpace @ 0x140335AE0 (MmMapIoSpace.c)
 *     HalpAcpiCheckAndMapTable @ 0x140335CC8 (HalpAcpiCheckAndMapTable.c)
 *     BgpFwLibraryEnable @ 0x140399AF8 (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x1403A4CD8 (HvlEnlightenProcessor.c)
 *     HalInitializeBios @ 0x1403C1BE0 (HalInitializeBios.c)
 *     WmipFirmwareTableHandler @ 0x1403C79C0 (WmipFirmwareTableHandler.c)
 *     HvlPhase1Initialize @ 0x1403CC54C (HvlPhase1Initialize.c)
 *     HalpMcaExtendedLogInitialize @ 0x1404B5580 (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1404C20E8 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpReadGenericErrorInfo @ 0x1404CABC8 (HalpReadGenericErrorInfo.c)
 *     HalpSignalRAS @ 0x1404CACF8 (HalpSignalRAS.c)
 *     HvlpEnableNextLogicalProcessor @ 0x1404ED9F8 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F3F8C (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x1404FA430 (BgkNotifyDisplayOwnershipLost.c)
 *     MiHugePageOperation @ 0x14052DAA8 (MiHugePageOperation.c)
 *     InbvPortInitialize @ 0x1405C4878 (InbvPortInitialize.c)
 *     WmipGetSMBiosTableData @ 0x1406DE5D4 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x1407BD3D4 (ExpGetSystemPlatformBinary.c)
 *     MiMapNewPfns @ 0x1408C26D4 (MiMapNewPfns.c)
 *     WmipFindSMBiosStructure @ 0x14092E1F8 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x14092E33C (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x14092E434 (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x14092E8EC (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x14095A314 (WheapClearPoison.c)
 *     PopGetHwConfigurationSignature @ 0x140993B94 (PopGetHwConfigurationSignature.c)
 *     HalpMapNvsArea @ 0x140995AD8 (HalpMapNvsArea.c)
 *     HalpInitGenericErrorSourceEntry @ 0x1409A48B0 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x1409A4B48 (HalpInitGenericErrorSourceEntryV2.c)
 *     HalpInitializeGenericErrorSource @ 0x1409A4F04 (HalpInitializeGenericErrorSource.c)
 *     VerifierMmMapIoSpace @ 0x1409E3980 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapIoSpaceEx @ 0x1409E3A90 (VerifierMmMapIoSpaceEx.c)
 *     KiVerifyXcpt15 @ 0x140A18320 (KiVerifyXcpt15.c)
 *     PipInitComputerIds @ 0x140A4BC28 (PipInitComputerIds.c)
 *     HalpAuditQuerySlicAddresses @ 0x140A5CB48 (HalpAuditQuerySlicAddresses.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140A5CD4C (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditGetExtendedBiosDataArea @ 0x140A5CEEC (HalpAuditGetExtendedBiosDataArea.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A5D1AC (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140A64F74 (HalpPowerInitFwPerformanceTableMappings.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x1402ACEC0 (MiMakeProtectionMask.c)
 *     MiMapContiguousMemory @ 0x140336914 (MiMapContiguousMemory.c)
 */

__int64 __fastcall MmMapIoSpaceEx(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  __int64 v4; // r10
  __int64 v5; // r11

  ProtectionMask = MiMakeProtectionMask(a3);
  if ( (ProtectionMask & 2) != 0 && (ProtectionMask & 0xFFFFFFF8) == 0x18 && (ProtectionMask & 7) != 0 )
    return 0LL;
  else
    return MiMapContiguousMemory(v4, v5, ProtectionMask, 0LL);
}
