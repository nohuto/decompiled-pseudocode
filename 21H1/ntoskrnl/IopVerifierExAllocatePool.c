/*
 * XREFs of IopVerifierExAllocatePool @ 0x1402033E4
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x140279670 (IopBuildDeviceIoControlRequest.c)
 *     IoAllocateWorkItem @ 0x140304590 (IoAllocateWorkItem.c)
 *     IoDeleteDevice @ 0x14033F890 (IoDeleteDevice.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1403401B0 (IopBuildAsynchronousFsdRequest.c)
 *     IoQueryFullDriverPath @ 0x1403A39A0 (IoQueryFullDriverPath.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1405018B8 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     NtFlushBuffersFileEx @ 0x1406C76A0 (NtFlushBuffersFileEx.c)
 *     IopBuildFullDriverPath @ 0x140725998 (IopBuildFullDriverPath.c)
 *     IopLoadDriver @ 0x140725EF8 (IopLoadDriver.c)
 *     IopQueryRegistryKeySystemPath @ 0x140726670 (IopQueryRegistryKeySystemPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x140727F90 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x140728128 (IopGetRegistryValue.c)
 *     IopGetRegistryKeyInformation @ 0x1407558A4 (IopGetRegistryKeyInformation.c)
 *     IoCreateSystemThread @ 0x140759660 (IoCreateSystemThread.c)
 *     IopCreateArcName @ 0x14076B368 (IopCreateArcName.c)
 *     IoCreateDriver @ 0x14078C3D0 (IoCreateDriver.c)
 *     IopInitializeBootLogging @ 0x14088D370 (IopInitializeBootLogging.c)
 *     IopRaiseHardError @ 0x14088D860 (IopRaiseHardError.c)
 *     IopSafebootDriverLoad @ 0x14088DB84 (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x14088DD20 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14088E00C (IopSetEaOrQuotaInformationFile.c)
 *     IopGetBootDiskInformationLite @ 0x140A477C0 (IopGetBootDiskInformationLite.c)
 *     IopCreateArcNamesCd @ 0x140A53AE0 (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x140A53DEC (IopCreateArcNames.c)
 *     IopCreateUmdfDirectory @ 0x140A56114 (IopCreateUmdfDirectory.c)
 *     IopStoreArcInformation @ 0x140A56308 (IopStoreArcInformation.c)
 *     IopInitializeBuiltinDriver @ 0x140A576AC (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14024FDE0 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
