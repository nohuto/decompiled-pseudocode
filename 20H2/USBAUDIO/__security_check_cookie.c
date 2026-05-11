/*
 * XREFs of __security_check_cookie @ 0x1C0011C50
 * Callers:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0001B44 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0001B88 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0zq_EtwWriteTransfer @ 0x1C0001BEC (McTemplateK0zq_EtwWriteTransfer.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0002748 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1C000291C (wil_details_GetCurrentFeatureEnabledState.c)
 *     wil_details_StagingConfig_Load @ 0x1C0002C58 (wil_details_StagingConfig_Load.c)
 *     WmiLogEvent @ 0x1C0003548 (WmiLogEvent.c)
 *     WmiLogStreamPosition @ 0x1C0003660 (WmiLogStreamPosition.c)
 *     USBD_CreateHandle @ 0x1C0011074 (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C0011954 (USBD_QueryUsbCapability.c)
 *     __GSHandlerCheckCommon @ 0x1C0011CDC (__GSHandlerCheckCommon.c)
 *     _handle_error @ 0x1C00121BC (_handle_error.c)
 *     RaiseException @ 0x1C0012410 (RaiseException.c)
 *     wil_details_OnFeatureConfigurationChange @ 0x1C0022270 (wil_details_OnFeatureConfigurationChange.c)
 *     IsClassDriverOnly @ 0x1C002253C (IsClassDriverOnly.c)
 *     PinMatchChannelConfigToFormat @ 0x1C00240A0 (PinMatchChannelConfigToFormat.c)
 *     PinCreate @ 0x1C00244E0 (PinCreate.c)
 *     PropertyGetAudioPosition @ 0x1C0027F30 (PropertyGetAudioPosition.c)
 *     PropertyDrmAudioStream_SetContentId @ 0x1C00287E0 (PropertyDrmAudioStream_SetContentId.c)
 *     RegistryReadNameValue @ 0x1C002AA88 (RegistryReadNameValue.c)
 *     USBDeviceStart @ 0x1C002BE10 (USBDeviceStart.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C002EE74 (USBParseGetMicArrayDescriptor.c)
 *     wil_InitializeFeatureStaging @ 0x1C0035008 (wil_InitializeFeatureStaging.c)
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
