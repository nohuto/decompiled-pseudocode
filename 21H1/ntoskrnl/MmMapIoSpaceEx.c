/*
 * XREFs of MmMapIoSpaceEx @ 0x1402F8F10
 * Callers:
 *     HalpAcpiGetRsdt @ 0x1402F8608 (HalpAcpiGetRsdt.c)
 *     MmMapIoSpace @ 0x1402F8AB0 (MmMapIoSpace.c)
 *     HalpAcpiCheckAndMapTable @ 0x1402F8C98 (HalpAcpiCheckAndMapTable.c)
 *     BgpFwLibraryEnable @ 0x140399368 (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x1403A4558 (HvlEnlightenProcessor.c)
 *     HalInitializeBios @ 0x1403C0D20 (HalInitializeBios.c)
 *     WmipFirmwareTableHandler @ 0x1403C6BB0 (WmipFirmwareTableHandler.c)
 *     HalpMcaExtendedLogInitialize @ 0x1404B4EA0 (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1404C1C78 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpReadGenericErrorInfo @ 0x1404CA718 (HalpReadGenericErrorInfo.c)
 *     HalpSignalRAS @ 0x1404CA848 (HalpSignalRAS.c)
 *     HvlpEnableNextLogicalProcessor @ 0x1404ED3A8 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F393C (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x1404F9DE0 (BgkNotifyDisplayOwnershipLost.c)
 *     MiHugePageOperation @ 0x14052D458 (MiHugePageOperation.c)
 *     InbvPortInitialize @ 0x1405C4148 (InbvPortInitialize.c)
 *     WmipGetSMBiosTableData @ 0x1406BD244 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x1407BA264 (ExpGetSystemPlatformBinary.c)
 *     MiMapNewPfns @ 0x1408C1384 (MiMapNewPfns.c)
 *     WmipFindSMBiosStructure @ 0x14092CF48 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x14092D08C (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x14092D184 (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x14092D63C (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x140958F74 (WheapClearPoison.c)
 *     PopGetHwConfigurationSignature @ 0x140992554 (PopGetHwConfigurationSignature.c)
 *     HalpMapNvsArea @ 0x140994498 (HalpMapNvsArea.c)
 *     HalpInitGenericErrorSourceEntry @ 0x1409A3A70 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x1409A3D08 (HalpInitGenericErrorSourceEntryV2.c)
 *     HalpInitializeGenericErrorSource @ 0x1409A40C4 (HalpInitializeGenericErrorSource.c)
 *     VerifierMmMapIoSpace @ 0x1409E3920 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapIoSpaceEx @ 0x1409E3A30 (VerifierMmMapIoSpaceEx.c)
 *     KiVerifyXcpt15 @ 0x140A18320 (KiVerifyXcpt15.c)
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 *     PipInitComputerIds @ 0x140A547C4 (PipInitComputerIds.c)
 *     HalpAuditQuerySlicAddresses @ 0x140A5DAA8 (HalpAuditQuerySlicAddresses.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140A5DCAC (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditGetExtendedBiosDataArea @ 0x140A5DE4C (HalpAuditGetExtendedBiosDataArea.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A5E10C (HalpDmaInitializeMasterAdapter.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140A65594 (HalpPowerInitFwPerformanceTableMappings.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x14021A3B0 (MiMakeProtectionMask.c)
 *     MiMapContiguousMemory @ 0x1402F98E4 (MiMapContiguousMemory.c)
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
