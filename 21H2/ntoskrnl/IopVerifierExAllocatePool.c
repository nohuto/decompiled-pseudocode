/*
 * XREFs of IopVerifierExAllocatePool @ 0x14022C9E0
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x14022B990 (IopBuildDeviceIoControlRequest.c)
 *     IoAllocateWorkItem @ 0x1402B54E0 (IoAllocateWorkItem.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1402E7890 (IopBuildAsynchronousFsdRequest.c)
 *     IoDeleteDevice @ 0x140360D90 (IoDeleteDevice.c)
 *     IoQueryFullDriverPath @ 0x1403A6DE0 (IoQueryFullDriverPath.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140507358 (IopAdjustFileObjectKeepAliveCount.c)
 *     NtFlushBuffersFileEx @ 0x140698D00 (NtFlushBuffersFileEx.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     IopBuildFullDriverPath @ 0x140740308 (IopBuildFullDriverPath.c)
 *     IopLoadDriver @ 0x140740868 (IopLoadDriver.c)
 *     IopQueryRegistryKeySystemPath @ 0x140740FE0 (IopQueryRegistryKeySystemPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x140742900 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x140742A98 (IopGetRegistryValue.c)
 *     IopGetRegistryKeyInformation @ 0x14076A5E4 (IopGetRegistryKeyInformation.c)
 *     IoCreateSystemThread @ 0x14076DE10 (IoCreateSystemThread.c)
 *     IopCreateArcName @ 0x140780318 (IopCreateArcName.c)
 *     IoCreateDriver @ 0x1407A4F00 (IoCreateDriver.c)
 *     IopInitializeBootLogging @ 0x140891718 (IopInitializeBootLogging.c)
 *     IopRaiseHardError @ 0x140891C00 (IopRaiseHardError.c)
 *     IopSafebootDriverLoad @ 0x140891F24 (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x1408920C0 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1408923AC (IopSetEaOrQuotaInformationFile.c)
 *     IopGetBootDiskInformationLite @ 0x140A45940 (IopGetBootDiskInformationLite.c)
 *     IopCreateUmdfDirectory @ 0x140A5D080 (IopCreateUmdfDirectory.c)
 *     IopStoreArcInformation @ 0x140A5D274 (IopStoreArcInformation.c)
 *     IopInitializeBuiltinDriver @ 0x140A5E618 (IopInitializeBuiltinDriver.c)
 *     IopCreateArcNames @ 0x140A61BAC (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x140A61E50 (IopCreateArcNamesCd.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14033C0E0 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
