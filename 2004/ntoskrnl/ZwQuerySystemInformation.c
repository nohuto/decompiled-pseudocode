/*
 * XREFs of ZwQuerySystemInformation @ 0x1403F3C80
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x14030C624 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1403CBFA4 (RtlpInitializeNonVolatileFlush.c)
 *     HvlpProcessIommu @ 0x1404F43C8 (HvlpProcessIommu.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140593E80 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreTerminateWorker @ 0x140598D10 (SmKmStoreTerminateWorker.c)
 *     ExpInitExpCheckTestSigningInfo @ 0x1405B17D0 (ExpInitExpCheckTestSigningInfo.c)
 *     SPCall2ServerInternal @ 0x14066C0B8 (SPCall2ServerInternal.c)
 *     PfpPrivSourceEnum @ 0x1406980C8 (PfpPrivSourceEnum.c)
 *     PspDetectComplusILImage @ 0x1406FD27C (PspDetectComplusILImage.c)
 *     SiGetSystemDeviceName @ 0x1407039C8 (SiGetSystemDeviceName.c)
 *     AslEnvGetProcessWowInfo @ 0x14073EA20 (AslEnvGetProcessWowInfo.c)
 *     RtlCreateHeap @ 0x140756C80 (RtlCreateHeap.c)
 *     PopAllocateHiberContext @ 0x140764C64 (PopAllocateHiberContext.c)
 *     BiGetFirmwareType @ 0x1407725FC (BiGetFirmwareType.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x140773B28 (BiGetCurrentBootEntryIdentifier.c)
 *     SiQuerySystemInformationString @ 0x140773C74 (SiQuerySystemInformationString.c)
 *     RtlQueryModuleInformation @ 0x140775DB0 (RtlQueryModuleInformation.c)
 *     PoInitHiberServices @ 0x140783B18 (PoInitHiberServices.c)
 *     KsepGetLoadedModulesList @ 0x1407AB6C4 (KsepGetLoadedModulesList.c)
 *     RtlSystemTimeToLocalTime @ 0x1407BAFD0 (RtlSystemTimeToLocalTime.c)
 *     ExpCloudbookHardwareLockedProvider @ 0x1407BEA20 (ExpCloudbookHardwareLockedProvider.c)
 *     PiIsHVCIEnabled @ 0x1407C1E4C (PiIsHVCIEnabled.c)
 *     PnpGetStableSystemBootTime @ 0x14089ED80 (PnpGetStableSystemBootTime.c)
 *     PopCheckTestsigningEnabled @ 0x1408DDA9C (PopCheckTestsigningEnabled.c)
 *     RtlLocalTimeToSystemTime @ 0x14090CC90 (RtlLocalTimeToSystemTime.c)
 *     EtwpLogMemInfoWs @ 0x14093340C (EtwpLogMemInfoWs.c)
 *     EtwpTiQueryCodeIntegrityOptions @ 0x140938FF8 (EtwpTiQueryCodeIntegrityOptions.c)
 *     ExpCloudbookHardwareIDProvider @ 0x140949F10 (ExpCloudbookHardwareIDProvider.c)
 *     ExpFindDiskSignature @ 0x14094CC70 (ExpFindDiskSignature.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x140960FFC (SdbpCheckMatchingRegistryEntry.c)
 *     PopGetHwConfigurationSignature @ 0x140993B94 (PopGetHwConfigurationSignature.c)
 *     HdlspAddLogEntry @ 0x1409EBAE0 (HdlspAddLogEntry.c)
 *     MiInitializeCacheFlushing @ 0x140A52E84 (MiInitializeCacheFlushing.c)
 *     SepInitializeDebugOptions @ 0x140A6CF98 (SepInitializeDebugOptions.c)
 *     PopInitPlatformSettings @ 0x140A6DC94 (PopInitPlatformSettings.c)
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
