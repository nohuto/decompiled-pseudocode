/*
 * XREFs of MmMapIoSpaceEx @ 0x14025FEE0
 * Callers:
 *     HalpAcpiGetRsdt @ 0x14025EE38 (HalpAcpiGetRsdt.c)
 *     MmMapIoSpace @ 0x14025F990 (MmMapIoSpace.c)
 *     HalpAcpiCheckAndMapTable @ 0x14025FC74 (HalpAcpiCheckAndMapTable.c)
 *     BgpFwLibraryEnable @ 0x14039BFB8 (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x1403A70D8 (HvlEnlightenProcessor.c)
 *     HalInitializeBios @ 0x1403C4350 (HalInitializeBios.c)
 *     WmipFirmwareTableHandler @ 0x1403CA600 (WmipFirmwareTableHandler.c)
 *     HvlPhase1Initialize @ 0x1403CF1E8 (HvlPhase1Initialize.c)
 *     HalpMcaExtendedLogInitialize @ 0x1404B8AA0 (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1404C5608 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpReadGenericErrorInfo @ 0x1404CE128 (HalpReadGenericErrorInfo.c)
 *     HalpSignalRAS @ 0x1404CE258 (HalpSignalRAS.c)
 *     HvlpEnableNextLogicalProcessor @ 0x1404F1264 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F77FC (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x1404FDCC0 (BgkNotifyDisplayOwnershipLost.c)
 *     MiHugePageOperation @ 0x140531478 (MiHugePageOperation.c)
 *     InbvPortInitialize @ 0x1405C8508 (InbvPortInitialize.c)
 *     WmipGetSMBiosTableData @ 0x14065C898 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x1407CBC64 (ExpGetSystemPlatformBinary.c)
 *     MiMapNewPfns @ 0x1408C8514 (MiMapNewPfns.c)
 *     WmipFindSMBiosStructure @ 0x140934028 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x14093416C (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x140934264 (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x14093471C (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x1409600D4 (WheapClearPoison.c)
 *     PopGetHwConfigurationSignature @ 0x140999CF4 (PopGetHwConfigurationSignature.c)
 *     HalpMapNvsArea @ 0x14099BC38 (HalpMapNvsArea.c)
 *     HalpInitGenericErrorSourceEntry @ 0x1409AA810 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x1409AAAA8 (HalpInitGenericErrorSourceEntryV2.c)
 *     HalpInitializeGenericErrorSource @ 0x1409AAE64 (HalpInitializeGenericErrorSource.c)
 *     VerifierMmMapIoSpace @ 0x1409E99A0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapIoSpaceEx @ 0x1409E9AB0 (VerifierMmMapIoSpaceEx.c)
 *     KiVerifyXcpt15 @ 0x140A1E320 (KiVerifyXcpt15.c)
 *     PipInitComputerIds @ 0x140A5ABC4 (PipInitComputerIds.c)
 *     HalpAuditQuerySlicAddresses @ 0x140A63EA8 (HalpAuditQuerySlicAddresses.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140A640AC (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditGetExtendedBiosDataArea @ 0x140A6424C (HalpAuditGetExtendedBiosDataArea.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A6450C (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140A6C244 (HalpPowerInitFwPerformanceTableMappings.c)
 * Callees:
 *     MiMapContiguousMemory @ 0x1402608B4 (MiMapContiguousMemory.c)
 *     MiMakeProtectionMask @ 0x14027C200 (MiMakeProtectionMask.c)
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
