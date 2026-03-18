/*
 * XREFs of ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74
 * Callers:
 *     ?Initialize@MOCKDRIVERSTATE@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C0026B38 (-Initialize@MOCKDRIVERSTATE@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?CheckVelocitySetting@RAPID_HPD_MANAGER@@AEAAXXZ @ 0x1C00281E8 (-CheckVelocitySetting@RAPID_HPD_MANAGER@@AEAAXXZ.c)
 *     NtDxgkDisplayPortOperation @ 0x1C004E190 (NtDxgkDisplayPortOperation.c)
 *     _lambda_369d4bf1093f23b208c35a56a1ae801e_::operator() @ 0x1C0157008 (_lambda_369d4bf1093f23b208c35a56a1ae801e_--operator().c)
 *     _lambda_908f0e8ad16bb8359ff8641d3c1ab648_::operator() @ 0x1C01572B4 (_lambda_908f0e8ad16bb8359ff8641d3c1ab648_--operator().c)
 *     ??0BLTQUEUE_EMULATED_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_EX_TIMER@@1@Z @ 0x1C0160768 (--0BLTQUEUE_EMULATED_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_EX_TIMER@@1@Z.c)
 *     DxgkNotifySessionStateChange @ 0x1C0160C10 (DxgkNotifySessionStateChange.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C0178780 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z.c)
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C01875D0 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0196940 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01A3640 (DxgkGetAdapterDeviceDesc.c)
 *     ?AddModeImpl@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@W4_DXGK_VIDPN_INTERFACE_VERSION@@@Z @ 0x1C01A92EC (-AddModeImpl@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QE.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x1C01A965C (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01B1560 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01B3FE0 (-_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x1C01B4B34 (-_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C01B5124 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     BmlGetNextBestTargetMode @ 0x1C01B55A0 (BmlGetNextBestTargetMode.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x1C01B5CB4 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4C30 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?AcquirePinnedModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C01D0460 (-AcquirePinnedModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMOD.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C01D4AE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     ?IsFlipManagerIFlipFeatureEnabled@CIFlipPresentHistoryToken@@SA_NXZ @ 0x1C01D918C (-IsFlipManagerIFlipFeatureEnabled@CIFlipPresentHistoryToken@@SA_NXZ.c)
 *     ?GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEA_N@Z @ 0x1C01DE228 (-GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEA_N.c)
 *     DpiFdoHandleSystemPower @ 0x1C01F02DC (DpiFdoHandleSystemPower.c)
 *     ?SysMmInitializeGlobal@@YAXXZ @ 0x1C01F4F64 (-SysMmInitializeGlobal@@YAXXZ.c)
 *     ?ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01F6F60 (-ReadConfig@DXGADAPTER@@AEAAXPEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     DpiAddDevice @ 0x1C01F84B0 (DpiAddDevice.c)
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01FECEC (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0209834 (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 *     ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x1C02099B0 (-OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z.c)
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x1C020A818 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C0212F94 (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     DpiInitializeEx @ 0x1C02146B0 (DpiInitializeEx.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C02164B8 (DpiPdoHandleChildConnectionChange.c)
 *     DxgkSetIndirectDisplayHostProcess @ 0x1C02C5558 (DxgkSetIndirectDisplayHostProcess.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C02D0490 (DxgkAdjustFullscreenGamma.c)
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C02E71E8 (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 *     _lambda_da24f1cfb4b7f8e158997fb0a51b3ded_::operator() @ 0x1C02EBDCC (_lambda_da24f1cfb4b7f8e158997fb0a51b3ded_--operator().c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02EC214 (DxgkIddHandleSetDisplayConfig.c)
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02EE034 (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?NeedLidStateRecovery@DISPLAYDIAGNOSTICADAPTERDATA@@QEAA_NXZ @ 0x1C02F0050 (-NeedLidStateRecovery@DISPLAYDIAGNOSTICADAPTERDATA@@QEAA_NXZ.c)
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C0301F98 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1C0308FE4 (--1DXGGLOBAL@@EEAA@XZ.c)
 *     ?CreatePerfDataWorkerThreadIfNeeded@DXGGLOBAL@@QEAAXXZ @ 0x1C03098D8 (-CreatePerfDataWorkerThreadIfNeeded@DXGGLOBAL@@QEAAXXZ.c)
 *     NtDxgkDuplicateHandle @ 0x1C031EB80 (NtDxgkDuplicateHandle.c)
 *     ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ @ 0x1C0344CCC (-EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ.c)
 *     ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x1C0345DD8 (-UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD.c)
 *     NtDxgkCreateTrackedWorkload @ 0x1C0346130 (NtDxgkCreateTrackedWorkload.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C03515D4 (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 *     ?IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C035162C (-IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 *     NtDxgkRegisterVailProcess @ 0x1C0353BC0 (NtDxgkRegisterVailProcess.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EPEAX@Z @ 0x1C0356AD0 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EP.c)
 *     ?VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036E290 (-VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0372010 (-VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DpQueryFeatureSupport @ 0x1C0386D50 (DpQueryFeatureSupport.c)
 *     DpiFdoQuerySysMmAdapterCaps @ 0x1C038AE74 (DpiFdoQuerySysMmAdapterCaps.c)
 *     DpiKsrCallback @ 0x1C0393E40 (DpiKsrCallback.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C03AC0EC (_BmlGetPathModeListForPathTargetModes.c)
 *     ?OnInitialized@MonitorMipiDsiState@DxgMonitor@@QEAAJXZ @ 0x1C03B9C34 (-OnInitialized@MonitorMipiDsiState@DxgMonitor@@QEAAJXZ.c)
 *     ?_DsiReset@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z @ 0x1C03B9E0C (-_DsiReset@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z.c)
 *     ?_DsiTransmission@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z @ 0x1C03BA028 (-_DsiTransmission@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z.c)
 *     ?_QueryMipiDsiCaps@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXPEA_K@Z @ 0x1C03BA3B0 (-_QueryMipiDsiCaps@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXPEA_K@Z.c)
 *     DriverEntry @ 0x1C03C7238 (DriverEntry.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C000BDC8 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        const struct FEATURE_LOGGED_TRAITS *a5,
        int a6)
{
  int v7; // [rsp+78h] [rbp+20h] BYREF

  v7 = 3;
  if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(a1) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(a2, a5, 0LL, a6, (const enum wil_ReportingKind *)&v7, 0LL, 0, 1uLL);
  }
}
