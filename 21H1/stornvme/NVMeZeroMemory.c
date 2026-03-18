/*
 * XREFs of NVMeZeroMemory @ 0x1C00044E0
 * Callers:
 *     NVMeMapError @ 0x1C0001008 (NVMeMapError.c)
 *     ScsiInquiryRequest @ 0x1C0001254 (ScsiInquiryRequest.c)
 *     QueryProtocolInfoLogPageData @ 0x1C000143C (QueryProtocolInfoLogPageData.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C0001930 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C00036A0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeHwBuildIo @ 0x1C0003960 (NVMeHwBuildIo.c)
 *     ControllerAllocateUncachedExtension @ 0x1C0008E10 (ControllerAllocateUncachedExtension.c)
 *     NVMeHwFindAdapter @ 0x1C0009230 (NVMeHwFindAdapter.c)
 *     AdminQueueInitialize @ 0x1C0009B18 (AdminQueueInitialize.c)
 *     CompletionQueueReInit @ 0x1C0009DA0 (CompletionQueueReInit.c)
 *     GetInterruptMessageInformation @ 0x1C000A164 (GetInterruptMessageInformation.c)
 *     GetProcessorGroupInformation @ 0x1C000A3B4 (GetProcessorGroupInformation.c)
 *     GetProcessorInformation @ 0x1C000A544 (GetProcessorInformation.c)
 *     IoQueuesInitialize @ 0x1C000B334 (IoQueuesInitialize.c)
 *     IoReservedQueuesInitialize @ 0x1C000B878 (IoReservedQueuesInitialize.c)
 *     IoSqToIoCqMapping @ 0x1C000B984 (IoSqToIoCqMapping.c)
 *     NVMeControllerFilterResouceRequirements @ 0x1C000C2CC (NVMeControllerFilterResouceRequirements.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000D5C8 (NVMeInitHostMemoryBuffer.c)
 *     NVMePowerInitialize @ 0x1C000E86C (NVMePowerInitialize.c)
 *     SubmissionQueueReInit @ 0x1C000F9A8 (SubmissionQueueReInit.c)
 *     DiagAllDiagnosticData @ 0x1C000FBE8 (DiagAllDiagnosticData.c)
 *     FirmwareDownload @ 0x1C0010390 (FirmwareDownload.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C00108A4 (FormInquiryDeviceIdentifiersData.c)
 *     IoctlQueryEnduranceInformation @ 0x1C0011A50 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryReservedQueueEntries @ 0x1C0011C08 (IoctlQueryReservedQueueEntries.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0011E38 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0012810 (LogSenseInformationalExceptions.c)
 *     LogSenseSupportedLogPages @ 0x1C001297C (LogSenseSupportedLogPages.c)
 *     LogSenseTemperature @ 0x1C00129F8 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C001310C (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C00132FC (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x1C00135E0 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C00145EC (NVMeWriteBufferFirmwareDownload.c)
 *     ProtocolCommandToNVMe @ 0x1C0014A24 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0014DB4 (QueryProtocolInfoFeatureData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0016120 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0017094 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0017318 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C00175E8 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C0017768 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeReservedCompletionQueueCreate @ 0x1C0019C80 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x1C0019FF4 (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSetSenseData @ 0x1C001AFC8 (NVMeSetSenseData.c)
 *     NVMeSyncHostTime @ 0x1C001B0A8 (NVMeSyncHostTime.c)
 *     GetRegistrySettings @ 0x1C001BDB8 (GetRegistrySettings.c)
 *     GetRegistrySettingsForSpecificKey @ 0x1C001CDD0 (GetRegistrySettingsForSpecificKey.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C001CF34 (ReadMultiSzRegistryValueAndCompareId.c)
 *     WMultiStringToAscii @ 0x1C001D130 (WMultiStringToAscii.c)
 * Callees:
 *     memset @ 0x1C0005500 (memset.c)
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
