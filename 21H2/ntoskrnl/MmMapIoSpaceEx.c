/*
 * XREFs of MmMapIoSpaceEx @ 0x140294E50
 * Callers:
 *     HalpAcpiGetRsdt @ 0x140294540 (HalpAcpiGetRsdt.c)
 *     MmMapIoSpace @ 0x1402949F0 (MmMapIoSpace.c)
 *     HalpAcpiCheckAndMapTable @ 0x140294BD8 (HalpAcpiCheckAndMapTable.c)
 *     BgpFwLibraryEnable @ 0x14039C888 (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x1403A7998 (HvlEnlightenProcessor.c)
 *     HalInitializeBios @ 0x1403C4AB0 (HalInitializeBios.c)
 *     WmipFirmwareTableHandler @ 0x1403CAFD0 (WmipFirmwareTableHandler.c)
 *     HvlPhase1Initialize @ 0x1403CFB58 (HvlPhase1Initialize.c)
 *     HalpMcaExtendedLogInitialize @ 0x1404BA460 (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1404C6FD8 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpReadGenericErrorInfo @ 0x1404CFAF8 (HalpReadGenericErrorInfo.c)
 *     HalpSignalRAS @ 0x1404CFC28 (HalpSignalRAS.c)
 *     HvlpEnableNextLogicalProcessor @ 0x1404F2E04 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F939C (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x1404FF860 (BgkNotifyDisplayOwnershipLost.c)
 *     MiHugePageOperation @ 0x140532F78 (MiHugePageOperation.c)
 *     InbvPortInitialize @ 0x1405C9D38 (InbvPortInitialize.c)
 *     WmipGetSMBiosTableData @ 0x14068276C (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x1407CFF24 (ExpGetSystemPlatformBinary.c)
 *     MiMapNewPfns @ 0x1408C5CD4 (MiMapNewPfns.c)
 *     WmipFindSMBiosStructure @ 0x1409317F8 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x14093193C (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x140931A34 (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x140931EEC (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x14095D954 (WheapClearPoison.c)
 *     PopGetHwConfigurationSignature @ 0x140996EE4 (PopGetHwConfigurationSignature.c)
 *     HalpMapNvsArea @ 0x140998E28 (HalpMapNvsArea.c)
 *     HalpInitGenericErrorSourceEntry @ 0x1409A76E0 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x1409A7978 (HalpInitGenericErrorSourceEntryV2.c)
 *     HalpInitializeGenericErrorSource @ 0x1409A7D34 (HalpInitializeGenericErrorSource.c)
 *     VerifierMmMapIoSpace @ 0x1409E69A0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapIoSpaceEx @ 0x1409E6AB0 (VerifierMmMapIoSpaceEx.c)
 *     KiVerifyXcpt15 @ 0x140A1B320 (KiVerifyXcpt15.c)
 *     PipInitComputerIds @ 0x140A5B730 (PipInitComputerIds.c)
 *     HalpAuditQuerySlicAddresses @ 0x140A654C8 (HalpAuditQuerySlicAddresses.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140A656CC (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditGetExtendedBiosDataArea @ 0x140A6586C (HalpAuditGetExtendedBiosDataArea.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A65B2C (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140A6967C (HalpPowerInitFwPerformanceTableMappings.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x14021AA20 (MiMakeProtectionMask.c)
 *     MiMapContiguousMemory @ 0x140295824 (MiMapContiguousMemory.c)
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
