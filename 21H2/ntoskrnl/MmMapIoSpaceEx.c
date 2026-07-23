/*
 * XREFs of MmMapIoSpaceEx @ 0x140216B10
 * Callers:
 *     HalpAcpiGetRsdt @ 0x140216204 (HalpAcpiGetRsdt.c)
 *     MmMapIoSpace @ 0x1402166B0 (MmMapIoSpace.c)
 *     HalpAcpiCheckAndMapTable @ 0x140216898 (HalpAcpiCheckAndMapTable.c)
 *     BgpFwLibraryEnable @ 0x14039C9D8 (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x1403A7AE8 (HvlEnlightenProcessor.c)
 *     HalInitializeBios @ 0x1403C4EE0 (HalInitializeBios.c)
 *     WmipFirmwareTableHandler @ 0x1403CB140 (WmipFirmwareTableHandler.c)
 *     HvlPhase1Initialize @ 0x1403CFCC8 (HvlPhase1Initialize.c)
 *     HalpMcaExtendedLogInitialize @ 0x1404BA6A0 (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1404C7218 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpReadGenericErrorInfo @ 0x1404CFD38 (HalpReadGenericErrorInfo.c)
 *     HalpSignalRAS @ 0x1404CFE68 (HalpSignalRAS.c)
 *     HvlpEnableNextLogicalProcessor @ 0x1404F2D84 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F931C (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x1404FF7E0 (BgkNotifyDisplayOwnershipLost.c)
 *     MiHugePageOperation @ 0x1405331B8 (MiHugePageOperation.c)
 *     InbvPortInitialize @ 0x1405C9F68 (InbvPortInitialize.c)
 *     WmipGetSMBiosTableData @ 0x1405E4738 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x1407D0094 (ExpGetSystemPlatformBinary.c)
 *     MiMapNewPfns @ 0x1408C5E34 (MiMapNewPfns.c)
 *     WmipFindSMBiosStructure @ 0x140931958 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x140931A9C (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x140931B94 (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x14093204C (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x14095DB34 (WheapClearPoison.c)
 *     PopGetHwConfigurationSignature @ 0x140997EE4 (PopGetHwConfigurationSignature.c)
 *     HalpMapNvsArea @ 0x140999E28 (HalpMapNvsArea.c)
 *     HalpInitGenericErrorSourceEntry @ 0x1409A8610 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x1409A88A8 (HalpInitGenericErrorSourceEntryV2.c)
 *     HalpInitializeGenericErrorSource @ 0x1409A8C64 (HalpInitializeGenericErrorSource.c)
 *     VerifierMmMapIoSpace @ 0x1409E79A0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapIoSpaceEx @ 0x1409E7AB0 (VerifierMmMapIoSpaceEx.c)
 *     KiVerifyXcpt15 @ 0x140A1C320 (KiVerifyXcpt15.c)
 *     PipInitComputerIds @ 0x140A5C730 (PipInitComputerIds.c)
 *     HalpAuditQuerySlicAddresses @ 0x140A664C8 (HalpAuditQuerySlicAddresses.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140A666CC (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditGetExtendedBiosDataArea @ 0x140A6686C (HalpAuditGetExtendedBiosDataArea.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A66B2C (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140A6A67C (HalpPowerInitFwPerformanceTableMappings.c)
 * Callees:
 *     MiMapContiguousMemory @ 0x1402174E4 (MiMapContiguousMemory.c)
 *     MiMakeProtectionMask @ 0x1402BF320 (MiMakeProtectionMask.c)
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
