/*
 * XREFs of __security_check_cookie @ 0x1C00125A0
 * Callers:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0001AA4 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0001AE8 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0zq_EtwWriteTransfer @ 0x1C0001B4C (McTemplateK0zq_EtwWriteTransfer.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0001EB8 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1C00020C4 (wil_details_GetCurrentFeatureEnabledState.c)
 *     wil_details_StagingConfig_Load @ 0x1C0002400 (wil_details_StagingConfig_Load.c)
 *     WmiLogEvent @ 0x1C00034D8 (WmiLogEvent.c)
 *     WmiLogStreamPosition @ 0x1C00035F0 (WmiLogStreamPosition.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0009184 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?wil_details_GetCurrentFeatureEnabledState@@YA?ATwil_details_FeatureStateCache@@PEBUwil_details_FeatureDescriptor@@PEAH@Z @ 0x1C0009390 (-wil_details_GetCurrentFeatureEnabledState@@YA-ATwil_details_FeatureStateCache@@PEBUwil_details_.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x1C00096D8 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     USBD_CreateHandle @ 0x1C00119C4 (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x1C00122A4 (USBD_QueryUsbCapability.c)
 *     __GSHandlerCheckCommon @ 0x1C001261C (__GSHandlerCheckCommon.c)
 *     _handle_error @ 0x1C0012AFC (_handle_error.c)
 *     RaiseException @ 0x1C0012D50 (RaiseException.c)
 *     wil_details_OnFeatureConfigurationChange @ 0x1C0022270 (wil_details_OnFeatureConfigurationChange.c)
 *     PinMatchChannelConfigToFormat @ 0x1C0023D70 (PinMatchChannelConfigToFormat.c)
 *     PinCreate @ 0x1C00241B0 (PinCreate.c)
 *     PropertyGetAudioPosition @ 0x1C0027BC0 (PropertyGetAudioPosition.c)
 *     PropertyDrmAudioStream_SetContentId @ 0x1C0028470 (PropertyDrmAudioStream_SetContentId.c)
 *     RegistryReadNameValue @ 0x1C002A628 (RegistryReadNameValue.c)
 *     USBDeviceStart @ 0x1C002B9B0 (USBDeviceStart.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C002E9C4 (USBParseGetMicArrayDescriptor.c)
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
