/*
 * XREFs of IopVerifierExAllocatePool @ 0x14020AC94
 * Callers:
 *     IoDeleteDevice @ 0x140203350 (IoDeleteDevice.c)
 *     IopBuildDeviceIoControlRequest @ 0x14020A0F0 (IopBuildDeviceIoControlRequest.c)
 *     IoAllocateWorkItem @ 0x1403120D0 (IoAllocateWorkItem.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140318510 (IopBuildAsynchronousFsdRequest.c)
 *     IoQueryFullDriverPath @ 0x1403A6520 (IoQueryFullDriverPath.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1405057D8 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     NtFlushBuffersFileEx @ 0x1406BCBF0 (NtFlushBuffersFileEx.c)
 *     IopGetDriverNameFromKeyNode @ 0x14073714C (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x1407372E4 (IopGetRegistryValue.c)
 *     IopQueryRegistryKeySystemPath @ 0x140737670 (IopQueryRegistryKeySystemPath.c)
 *     IopLoadDriver @ 0x140737DD0 (IopLoadDriver.c)
 *     IopBuildFullDriverPath @ 0x140738824 (IopBuildFullDriverPath.c)
 *     IopGetRegistryKeyInformation @ 0x140759C04 (IopGetRegistryKeyInformation.c)
 *     IoCreateSystemThread @ 0x140769D50 (IoCreateSystemThread.c)
 *     IopCreateArcName @ 0x14077C538 (IopCreateArcName.c)
 *     IoCreateDriver @ 0x14079A9E0 (IoCreateDriver.c)
 *     IopInitializeBootLogging @ 0x140894150 (IopInitializeBootLogging.c)
 *     IopRaiseHardError @ 0x140894640 (IopRaiseHardError.c)
 *     IopSafebootDriverLoad @ 0x140894964 (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x140894B00 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140894DEC (IopSetEaOrQuotaInformationFile.c)
 *     IopGetBootDiskInformationLite @ 0x140A469F0 (IopGetBootDiskInformationLite.c)
 *     IopCreateArcNamesCd @ 0x140A59EDC (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x140A5A1E8 (IopCreateArcNames.c)
 *     IopCreateUmdfDirectory @ 0x140A5C514 (IopCreateUmdfDirectory.c)
 *     IopStoreArcInformation @ 0x140A5C708 (IopStoreArcInformation.c)
 *     IopInitializeBuiltinDriver @ 0x140A5DAAC (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140211F50 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall IopVerifierExAllocatePool(POOL_TYPE a1, SIZE_T a2)
{
  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFAFFFFF) != 0 || (VfRuleClasses & 0x200000000LL) != 0
                                          || (VfRuleClasses & 0x400000000LL) != 0) )
  {
    return ExAllocatePoolWithTagPriority(a1, a2, 0x20206F49u, (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  }
  else
  {
    return ExAllocatePoolWithTag(a1, a2, 0x20206F49u);
  }
}
