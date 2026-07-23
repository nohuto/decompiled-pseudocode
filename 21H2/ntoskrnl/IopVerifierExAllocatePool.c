/*
 * XREFs of IopVerifierExAllocatePool @ 0x1402336E0
 * Callers:
 *     IoAllocateWorkItem @ 0x140233690 (IoAllocateWorkItem.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140298BE0 (IopBuildAsynchronousFsdRequest.c)
 *     IoDeleteDevice @ 0x1402A5DF0 (IoDeleteDevice.c)
 *     IopBuildDeviceIoControlRequest @ 0x1402D0240 (IopBuildDeviceIoControlRequest.c)
 *     IoQueryFullDriverPath @ 0x1403A6F30 (IoQueryFullDriverPath.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1405072D8 (IopAdjustFileObjectKeepAliveCount.c)
 *     NtFlushBuffersFileEx @ 0x1405F79F0 (NtFlushBuffersFileEx.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     IopBuildFullDriverPath @ 0x1407404C8 (IopBuildFullDriverPath.c)
 *     IopLoadDriver @ 0x140740A28 (IopLoadDriver.c)
 *     IopQueryRegistryKeySystemPath @ 0x1407411A0 (IopQueryRegistryKeySystemPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x140742AC0 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     IopGetRegistryKeyInformation @ 0x14076A7A4 (IopGetRegistryKeyInformation.c)
 *     IoCreateSystemThread @ 0x14076DFD0 (IoCreateSystemThread.c)
 *     IopCreateArcName @ 0x1407804D8 (IopCreateArcName.c)
 *     IoCreateDriver @ 0x1407A5100 (IoCreateDriver.c)
 *     IopInitializeBootLogging @ 0x140891878 (IopInitializeBootLogging.c)
 *     IopRaiseHardError @ 0x140891D60 (IopRaiseHardError.c)
 *     IopSafebootDriverLoad @ 0x140892084 (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x140892220 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14089250C (IopSetEaOrQuotaInformationFile.c)
 *     IopGetBootDiskInformationLite @ 0x140A46940 (IopGetBootDiskInformationLite.c)
 *     IopCreateUmdfDirectory @ 0x140A5E080 (IopCreateUmdfDirectory.c)
 *     IopStoreArcInformation @ 0x140A5E274 (IopStoreArcInformation.c)
 *     IopInitializeBuiltinDriver @ 0x140A5F618 (IopInitializeBuiltinDriver.c)
 *     IopCreateArcNames @ 0x140A62BAC (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x140A62E50 (IopCreateArcNamesCd.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140346E30 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
