/*
 * XREFs of IopVerifierExAllocatePool_0 @ 0x14027C6F4
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x140220620 (IopBuildDeviceIoControlRequest.c)
 *     IoDeleteDevice @ 0x14026F700 (IoDeleteDevice.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14033D220 (IopBuildAsynchronousFsdRequest.c)
 *     IoAllocateWorkItem @ 0x140341360 (IoAllocateWorkItem.c)
 *     IoQueryFullDriverPath @ 0x1403A4100 (IoQueryFullDriverPath.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140501F08 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     NtFlushBuffersFileEx @ 0x1406E7FA0 (NtFlushBuffersFileEx.c)
 *     IopGetDriverNameFromKeyNode @ 0x1407286BC (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x140728854 (IopGetRegistryValue.c)
 *     IopQueryRegistryKeySystemPath @ 0x140728BE0 (IopQueryRegistryKeySystemPath.c)
 *     IopLoadDriver @ 0x140729340 (IopLoadDriver.c)
 *     IopBuildFullDriverPath @ 0x140729D94 (IopBuildFullDriverPath.c)
 *     IopGetRegistryKeyInformation @ 0x14074B024 (IopGetRegistryKeyInformation.c)
 *     IoCreateSystemThread @ 0x14075B460 (IoCreateSystemThread.c)
 *     IopCreateArcName @ 0x14076DB08 (IopCreateArcName.c)
 *     IoCreateDriver @ 0x14078E2A0 (IoCreateDriver.c)
 *     IopInitializeBootLogging @ 0x14088E690 (IopInitializeBootLogging.c)
 *     IopRaiseHardError @ 0x14088EB80 (IopRaiseHardError.c)
 *     IopSafebootDriverLoad @ 0x14088EEA4 (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x14088F040 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14088F32C (IopSetEaOrQuotaInformationFile.c)
 *     IopGetBootDiskInformationLite @ 0x140A40750 (IopGetBootDiskInformationLite.c)
 *     IopCreateUmdfDirectory @ 0x140A4D578 (IopCreateUmdfDirectory.c)
 *     IopStoreArcInformation @ 0x140A4D76C (IopStoreArcInformation.c)
 *     IopInitializeBuiltinDriver @ 0x140A4EB10 (IopInitializeBuiltinDriver.c)
 *     IopCreateArcNames @ 0x140A67348 (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x140A675EC (IopCreateArcNamesCd.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14028C680 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall IopVerifierExAllocatePool_0(POOL_TYPE a1, SIZE_T a2)
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
