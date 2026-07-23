/*
 * XREFs of ZwQuerySystemInformation @ 0x1403F29F0
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1402CA9F0 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1403CB1E4 (RtlpInitializeNonVolatileFlush.c)
 *     HvlpProcessIommu @ 0x1404F3D78 (HvlpProcessIommu.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140593790 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreTerminateWorker @ 0x140598620 (SmKmStoreTerminateWorker.c)
 *     ExpInitExpCheckTestSigningInfo @ 0x1405B10B0 (ExpInitExpCheckTestSigningInfo.c)
 *     SPCall2ServerInternal @ 0x1405D6678 (SPCall2ServerInternal.c)
 *     PfpPrivSourceEnum @ 0x1405EEBC8 (PfpPrivSourceEnum.c)
 *     PspDetectComplusILImage @ 0x1406DA1FC (PspDetectComplusILImage.c)
 *     SiGetSystemDeviceName @ 0x1406E0C38 (SiGetSystemDeviceName.c)
 *     AslEnvGetProcessWowInfo @ 0x14073CEA0 (AslEnvGetProcessWowInfo.c)
 *     RtlCreateHeap @ 0x140752DF0 (RtlCreateHeap.c)
 *     PopAllocateHiberContext @ 0x140763244 (PopAllocateHiberContext.c)
 *     BiGetFirmwareType @ 0x1407701EC (BiGetFirmwareType.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x140771718 (BiGetCurrentBootEntryIdentifier.c)
 *     SiQuerySystemInformationString @ 0x140771864 (SiQuerySystemInformationString.c)
 *     RtlQueryModuleInformation @ 0x1407739A0 (RtlQueryModuleInformation.c)
 *     PoInitHiberServices @ 0x14077B118 (PoInitHiberServices.c)
 *     KsepGetLoadedModulesList @ 0x1407A8564 (KsepGetLoadedModulesList.c)
 *     RtlSystemTimeToLocalTime @ 0x1407B7E60 (RtlSystemTimeToLocalTime.c)
 *     ExpCloudbookHardwareLockedProvider @ 0x1407BB8B0 (ExpCloudbookHardwareLockedProvider.c)
 *     PiIsHVCIEnabled @ 0x1407BEB5C (PiIsHVCIEnabled.c)
 *     PnpGetStableSystemBootTime @ 0x14089DA60 (PnpGetStableSystemBootTime.c)
 *     PopCheckTestsigningEnabled @ 0x1408DC72C (PopCheckTestsigningEnabled.c)
 *     RtlLocalTimeToSystemTime @ 0x14090B9E0 (RtlLocalTimeToSystemTime.c)
 *     EtwpLogMemInfoWs @ 0x140932160 (EtwpLogMemInfoWs.c)
 *     EtwpTiQueryCodeIntegrityOptions @ 0x140937D58 (EtwpTiQueryCodeIntegrityOptions.c)
 *     ExpCloudbookHardwareIDProvider @ 0x140948B70 (ExpCloudbookHardwareIDProvider.c)
 *     ExpFindDiskSignature @ 0x14094B8D0 (ExpFindDiskSignature.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14095FC5C (SdbpCheckMatchingRegistryEntry.c)
 *     PopGetHwConfigurationSignature @ 0x140992554 (PopGetHwConfigurationSignature.c)
 *     HdlspAddLogEntry @ 0x1409EBAE0 (HdlspAddLogEntry.c)
 *     MiInitializeCacheFlushing @ 0x140A4D184 (MiInitializeCacheFlushing.c)
 *     SepInitializeDebugOptions @ 0x140A6CCC8 (SepInitializeDebugOptions.c)
 *     PopInitPlatformSettings @ 0x140A6D5EC (PopInitPlatformSettings.c)
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
