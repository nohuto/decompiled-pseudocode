/*
 * XREFs of __security_check_cookie @ 0x1C00050E0
 * Callers:
 *     ScsiToNVMe @ 0x1C0003A60 (ScsiToNVMe.c)
 *     SrbAssignQueueId @ 0x1C0004370 (SrbAssignQueueId.c)
 *     __GSHandlerCheckCommon @ 0x1C000518C (__GSHandlerCheckCommon.c)
 *     NVMeHwFindAdapter @ 0x1C0009230 (NVMeHwFindAdapter.c)
 *     GetInterruptMessageInformation @ 0x1C000A164 (GetInterruptMessageInformation.c)
 *     GetProcessorInformation @ 0x1C000A544 (GetProcessorInformation.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000D424 (NVMeFreeHostMemoryBuffer.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000D5C8 (NVMeInitHostMemoryBuffer.c)
 *     NVMeInitStreams @ 0x1C000D840 (NVMeInitStreams.c)
 *     NVMeLogTelemetry @ 0x1C000DD98 (NVMeLogTelemetry.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C00108A4 (FormInquiryDeviceIdentifiersData.c)
 *     FormInquirySerialNumberData @ 0x1C0010AE8 (FormInquirySerialNumberData.c)
 *     FormInquiryStandardData @ 0x1C0010CF0 (FormInquiryStandardData.c)
 *     GetStreamId @ 0x1C0011030 (GetStreamId.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C0012150 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C0012304 (IoctlStorageStreamsGetParameters.c)
 *     NVMeGetCloudSSDErrorRecoveryLogPageCompletion @ 0x1C0017AD0 (NVMeGetCloudSSDErrorRecoveryLogPageCompletion.c)
 *     GetRegistrySettings @ 0x1C001BDB8 (GetRegistrySettings.c)
 *     GetRegistrySettingsForSpecificKey @ 0x1C001CDD0 (GetRegistrySettingsForSpecificKey.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
