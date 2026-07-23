/*
 * XREFs of ZwQuerySystemInformation @ 0x1403F8830
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x14025CFD4 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1403CEBC4 (RtlpInitializeNonVolatileFlush.c)
 *     HvlpProcessIommu @ 0x1404F7C38 (HvlpProcessIommu.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140597920 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreTerminateWorker @ 0x14059C7B0 (SmKmStoreTerminateWorker.c)
 *     ExpInitExpCheckTestSigningInfo @ 0x1405B5330 (ExpInitExpCheckTestSigningInfo.c)
 *     PfpPrivSourceEnum @ 0x1406593DC (PfpPrivSourceEnum.c)
 *     sub_140689640 @ 0x140689640 (sub_140689640.c)
 *     PspDetectComplusILImage @ 0x1406CFFE4 (PspDetectComplusILImage.c)
 *     SiGetSystemDeviceName @ 0x1406D6AD8 (SiGetSystemDeviceName.c)
 *     AslEnvGetProcessWowInfo @ 0x14074D604 (AslEnvGetProcessWowInfo.c)
 *     RtlCreateHeap @ 0x1407658C0 (RtlCreateHeap.c)
 *     PopAllocateHiberContext @ 0x140773C94 (PopAllocateHiberContext.c)
 *     BiGetFirmwareType @ 0x140780BFC (BiGetFirmwareType.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x140782128 (BiGetCurrentBootEntryIdentifier.c)
 *     SiQuerySystemInformationString @ 0x140782274 (SiQuerySystemInformationString.c)
 *     RtlQueryModuleInformation @ 0x1407843B0 (RtlQueryModuleInformation.c)
 *     PoInitHiberServices @ 0x140791508 (PoInitHiberServices.c)
 *     KsepGetLoadedModulesList @ 0x1407B9604 (KsepGetLoadedModulesList.c)
 *     RtlSystemTimeToLocalTime @ 0x1407C9860 (RtlSystemTimeToLocalTime.c)
 *     ExpCloudbookHardwareLockedProvider @ 0x1407CD1E0 (ExpCloudbookHardwareLockedProvider.c)
 *     PiIsHVCIEnabled @ 0x1407D064C (PiIsHVCIEnabled.c)
 *     PnpGetStableSystemBootTime @ 0x1408A48B0 (PnpGetStableSystemBootTime.c)
 *     PopCheckTestsigningEnabled @ 0x1408E38DC (PopCheckTestsigningEnabled.c)
 *     RtlLocalTimeToSystemTime @ 0x1409128C0 (RtlLocalTimeToSystemTime.c)
 *     EtwpLogMemInfoWs @ 0x14093923C (EtwpLogMemInfoWs.c)
 *     EtwpTiQueryCodeIntegrityOptions @ 0x14093EE28 (EtwpTiQueryCodeIntegrityOptions.c)
 *     ExpCloudbookHardwareIDProvider @ 0x14094FCD0 (ExpCloudbookHardwareIDProvider.c)
 *     ExpFindDiskSignature @ 0x140952A30 (ExpFindDiskSignature.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x140966DCC (SdbpCheckMatchingRegistryEntry.c)
 *     PopGetHwConfigurationSignature @ 0x140999CF4 (PopGetHwConfigurationSignature.c)
 *     HdlspAddLogEntry @ 0x1409F1AE0 (HdlspAddLogEntry.c)
 *     MiInitializeCacheFlushing @ 0x140A53504 (MiInitializeCacheFlushing.c)
 *     SepInitializeDebugOptions @ 0x140A73878 (SepInitializeDebugOptions.c)
 *     PopInitPlatformSettings @ 0x140A743B4 (PopInitPlatformSettings.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&SystemInformationClass);
}
