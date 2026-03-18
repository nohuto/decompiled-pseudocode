/*
 * XREFs of __security_check_cookie @ 0x1C00050E0
 * Callers:
 *     ScsiToNVMe @ 0x1C0003A60 (ScsiToNVMe.c)
 *     SrbAssignQueueId @ 0x1C0004370 (SrbAssignQueueId.c)
 *     __GSHandlerCheckCommon @ 0x1C000515C (__GSHandlerCheckCommon.c)
 *     NVMeHwFindAdapter @ 0x1C00091E0 (NVMeHwFindAdapter.c)
 *     GetInterruptMessageInformation @ 0x1C000A114 (GetInterruptMessageInformation.c)
 *     GetProcessorInformation @ 0x1C000A4F4 (GetProcessorInformation.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000D3A4 (NVMeFreeHostMemoryBuffer.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000D548 (NVMeInitHostMemoryBuffer.c)
 *     NVMeInitStreams @ 0x1C000D7C0 (NVMeInitStreams.c)
 *     NVMeLogTelemetry @ 0x1C000DD18 (NVMeLogTelemetry.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C001082C (FormInquiryDeviceIdentifiersData.c)
 *     FormInquirySerialNumberData @ 0x1C0010A70 (FormInquirySerialNumberData.c)
 *     FormInquiryStandardData @ 0x1C0010C78 (FormInquiryStandardData.c)
 *     GetStreamId @ 0x1C0010FB8 (GetStreamId.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C00120D8 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C001228C (IoctlStorageStreamsGetParameters.c)
 *     NVMeGetCloudSSDErrorRecoveryLogPageCompletion @ 0x1C0017A50 (NVMeGetCloudSSDErrorRecoveryLogPageCompletion.c)
 *     GetRegistrySettings @ 0x1C001BCE8 (GetRegistrySettings.c)
 *     GetRegistrySettingsForSpecificKey @ 0x1C001CD00 (GetRegistrySettingsForSpecificKey.c)
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
