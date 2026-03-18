/*
 * XREFs of NVMeZeroMemory @ 0x1C00044E0
 * Callers:
 *     NVMeMapError @ 0x1C0001008 (NVMeMapError.c)
 *     ScsiInquiryRequest @ 0x1C0001254 (ScsiInquiryRequest.c)
 *     QueryProtocolInfoLogPageData @ 0x1C000143C (QueryProtocolInfoLogPageData.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0001930 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C00036A0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeHwBuildIo @ 0x1C0003960 (NVMeHwBuildIo.c)
 *     ControllerAllocateUncachedExtension @ 0x1C0008DD0 (ControllerAllocateUncachedExtension.c)
 *     NVMeHwFindAdapter @ 0x1C00091E0 (NVMeHwFindAdapter.c)
 *     AdminQueueInitialize @ 0x1C0009AC8 (AdminQueueInitialize.c)
 *     CompletionQueueReInit @ 0x1C0009D50 (CompletionQueueReInit.c)
 *     GetInterruptMessageInformation @ 0x1C000A114 (GetInterruptMessageInformation.c)
 *     GetProcessorGroupInformation @ 0x1C000A364 (GetProcessorGroupInformation.c)
 *     GetProcessorInformation @ 0x1C000A4F4 (GetProcessorInformation.c)
 *     IoQueuesInitialize @ 0x1C000B2E4 (IoQueuesInitialize.c)
 *     IoReservedQueuesInitialize @ 0x1C000B828 (IoReservedQueuesInitialize.c)
 *     IoSqToIoCqMapping @ 0x1C000B934 (IoSqToIoCqMapping.c)
 *     NVMeControllerFilterResouceRequirements @ 0x1C000C27C (NVMeControllerFilterResouceRequirements.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000D548 (NVMeInitHostMemoryBuffer.c)
 *     NVMePowerInitialize @ 0x1C000E7EC (NVMePowerInitialize.c)
 *     SubmissionQueueReInit @ 0x1C000F930 (SubmissionQueueReInit.c)
 *     DiagAllDiagnosticData @ 0x1C000FB70 (DiagAllDiagnosticData.c)
 *     FirmwareDownload @ 0x1C0010318 (FirmwareDownload.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C001082C (FormInquiryDeviceIdentifiersData.c)
 *     IoctlQueryEnduranceInformation @ 0x1C00119D8 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryReservedQueueEntries @ 0x1C0011B90 (IoctlQueryReservedQueueEntries.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0011DC0 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0012798 (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x1C0012904 (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x1C0012980 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C001308C (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C001327C (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C0013560 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C001456C (NVMeWriteBufferFirmwareDownload.c)
 *     ProtocolCommandToNVMe @ 0x1C00149A4 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0014D34 (QueryProtocolInfoFeatureData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C00160A0 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0017014 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0017298 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0017568 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C00176E8 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0019BE0 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0019F54 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSetSenseData @ 0x1C001AEF8 (NVMeSetSenseData.c)
 *     NVMeSyncHostTime @ 0x1C001AFD8 (NVMeSyncHostTime.c)
 *     GetRegistrySettings @ 0x1C001BCE8 (GetRegistrySettings.c)
 *     GetRegistrySettingsForSpecificKey @ 0x1C001CD00 (GetRegistrySettingsForSpecificKey.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C001CE64 (ReadMultiSzRegistryValueAndCompareId.c)
 *     WMultiStringToAscii @ 0x1C001D060 (WMultiStringToAscii.c)
 * Callees:
 *     memset @ 0x1C00054C0 (memset.c)
 */

void *__fastcall NVMeZeroMemory(void *a1, unsigned int a2)
{
  unsigned int v2; // edx
  void *result; // rax

  if ( (a2 & 3) != 0 )
  {
    if ( a2 )
      return memset(a1, 0, a2);
  }
  else
  {
    v2 = a2 >> 2;
    if ( v2 )
      return memset(a1, 0, 4LL * v2);
  }
  return result;
}
