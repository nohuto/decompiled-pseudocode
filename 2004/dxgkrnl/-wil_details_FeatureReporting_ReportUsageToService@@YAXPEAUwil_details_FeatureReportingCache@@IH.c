/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428
 * Callers:
 *     ??0MOCKDRIVERSTATE@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00212F8 (--0MOCKDRIVERSTATE@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C0024918 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_WSL2AppsBroken_35674161__private_IsEnabled@@YAHXZ @ 0x1C0025944 (-Feature_Servicing_WSL2AppsBroken_35674161__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_Brightness_SDR_33524664__private_IsEnabled@@YAHXZ @ 0x1C0026BA8 (-Feature_Servicing_Brightness_SDR_33524664__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_Servicing_33388776__private_IsEnabled@@YAHXZ @ 0x1C0026E70 (-Feature_Servicing_33388776__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_MonitorIoctlTesting__private_IsEnabled@@YAHXZ @ 0x1C0026EF4 (-Feature_MonitorIoctlTesting__private_IsEnabled@@YAHXZ.c)
 *     ?Feature_HoldAdapterLockEscape__private_IsEnabledPreCheck@@YAHXZ @ 0x1C0045468 (-Feature_HoldAdapterLockEscape__private_IsEnabledPreCheck@@YAHXZ.c)
 *     NtDxgkDisplayPortOperation @ 0x1C004F020 (NtDxgkDisplayPortOperation.c)
 *     _lambda_30de2fb5eb4f6d1d827b6d0e4acdd9ca_::operator() @ 0x1C00D6C68 (_lambda_30de2fb5eb4f6d1d827b6d0e4acdd9ca_--operator().c)
 *     DxgkGetMonitorInternalInfo @ 0x1C01192D0 (DxgkGetMonitorInternalInfo.c)
 *     ?_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C013960C (-_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z.c)
 *     MonitorAreSpecializedDisplaysSupported @ 0x1C013ABAC (MonitorAreSpecializedDisplaysSupported.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C0153160 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z.c)
 *     DxgkNotifySessionStateChange @ 0x1C0169F30 (DxgkNotifySessionStateChange.c)
 *     DpiFdoHandleSystemPower @ 0x1C017209C (DpiFdoHandleSystemPower.c)
 *     DpiPdoAddPdo @ 0x1C017539C (DpiPdoAddPdo.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C017B218 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C017ED4C (-DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C017EECC (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiAddDevice @ 0x1C017EFC0 (DpiAddDevice.c)
 *     DpiFdoStartAdapter @ 0x1C0182794 (DpiFdoStartAdapter.c)
 *     ?_InitMipiDsiCaps@DXGMONITOR@@AEAAJXZ @ 0x1C01870AC (-_InitMipiDsiCaps@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C01889A4 (-_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018BCBC (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     DpiInitializeEx @ 0x1C019314C (DpiInitializeEx.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C0222940 (DxgkAdjustFullscreenGamma.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C022F10C (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@.c)
 *     ?VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0244D10 (-VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C025AE4C (DxgkIddHandleSetDisplayConfig.c)
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C02618A0 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 *     NtDxgkDuplicateHandle @ 0x1C0279A50 (NtDxgkDuplicateHandle.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C02B538C (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 *     ?IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C02B53EC (-IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02B9F30 (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ @ 0x1C02BC350 (-EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ.c)
 *     ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x1C02BCEA0 (-UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD.c)
 *     NtDxgkCreateTrackedWorkload @ 0x1C02BD140 (NtDxgkCreateTrackedWorkload.c)
 *     DpIsFeatureEnabled @ 0x1C02C5C80 (DpIsFeatureEnabled.c)
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z @ 0x1C02D1068 (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C02D1540 (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?_DsiReset@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z @ 0x1C02FB488 (-_DsiReset@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z.c)
 *     ?_DsiTransmission@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z @ 0x1C02FB730 (-_DsiTransmission@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z.c)
 *     ?_QueryMipiDsiCaps@DXGMONITOR@@AEAAJKPEAXPEA_K@Z @ 0x1C02FBB70 (-_QueryMipiDsiCaps@DXGMONITOR@@AEAAJKPEAXPEA_K@Z.c)
 *     ?_SetActiveColorProfileName@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C02FBC84 (-_SetActiveColorProfileName@DXGMONITOR@@AEAAJKPEAX@Z.c)
 *     DriverEntry @ 0x1C0306D00 (DriverEntry.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C000B47C (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        const struct FEATURE_LOGGED_TRAITS *a5,
        int a6,
        int a7)
{
  a7 = 3;
  if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(a1) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(a2, a5, 0LL, a6, (const enum wil_ReportingKind *)&a7, 0LL, 0, 1uLL);
  }
}
