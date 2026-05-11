/*
 * XREFs of __security_check_cookie @ 0x1C00121B0
 * Callers:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0001B44 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0001B88 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0zq_EtwWriteTransfer @ 0x1C0001BEC (McTemplateK0zq_EtwWriteTransfer.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C0002744 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1C0002958 (wil_details_GetCurrentFeatureEnabledState.c)
 *     wil_details_StagingConfig_Load @ 0x1C0002D88 (wil_details_StagingConfig_Load.c)
 *     WmiLogEvent @ 0x1C000365C (WmiLogEvent.c)
 *     WmiLogStreamPosition @ 0x1C0003774 (WmiLogStreamPosition.c)
 *     USBD_CreateHandle @ 0x1C00115D4 (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C0011EB4 (USBD_QueryUsbCapability.c)
 *     __GSHandlerCheckCommon @ 0x1C001223C (__GSHandlerCheckCommon.c)
 *     _handle_error @ 0x1C001271C (_handle_error.c)
 *     RaiseException @ 0x1C0012970 (RaiseException.c)
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1C0022270 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 *     IsClassDriverOnly @ 0x1C002255C (IsClassDriverOnly.c)
 *     PinMatchChannelConfigToFormat @ 0x1C00240C0 (PinMatchChannelConfigToFormat.c)
 *     PinCreate @ 0x1C0024500 (PinCreate.c)
 *     PropertyGetAudioPosition @ 0x1C0027F80 (PropertyGetAudioPosition.c)
 *     PropertyDrmAudioStream_SetContentId @ 0x1C0028830 (PropertyDrmAudioStream_SetContentId.c)
 *     RegistryReadNameValue @ 0x1C002AAD8 (RegistryReadNameValue.c)
 *     USBDeviceStart @ 0x1C002C080 (USBDeviceStart.c)
 *     USBHwGetMicArrayDescriptor @ 0x1C002E8D4 (USBHwGetMicArrayDescriptor.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C00360B8 (wil_details_PopulateInitialConfiguredFeatureStates.c)
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
