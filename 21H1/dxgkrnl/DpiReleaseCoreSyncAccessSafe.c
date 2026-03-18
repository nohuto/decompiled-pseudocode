/*
 * XREFs of DpiReleaseCoreSyncAccessSafe @ 0x1C01271F0
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C001C664 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiFdoHandleDisplayDetectControl @ 0x1C001FE48 (DpiFdoHandleDisplayDetectControl.c)
 *     DxgkQueryConnectionChanges @ 0x1C0020060 (DxgkQueryConnectionChanges.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C004F2C4 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0056144 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiPdoDispatchIoctl @ 0x1C00DF740 (DpiPdoDispatchIoctl.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C01266E0 (DpiGdoDispatchInternalIoctl.c)
 *     DpiPdoDispatchPnp @ 0x1C0153AE0 (DpiPdoDispatchPnp.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C0154580 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoSetDevicePower @ 0x1C01624FC (DpiPdoSetDevicePower.c)
 *     DxgkPowerOnOffMonitor @ 0x1C0163BF4 (DxgkPowerOnOffMonitor.c)
 *     DpiFdoStartAdapter @ 0x1C0171310 (DpiFdoStartAdapter.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C0172B1C (DpiFdoInitializeGpuVirtualization.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C02C42F4 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x1C02C6BC0 (DpiFdoQueryAdapterInfoIntegratedDisplay.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C02C6E30 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DxgkHandleMiracastEscape @ 0x1C02CA8B8 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightness3Get@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_OUT@@@Z @ 0x1C02CB0E0 (-DpiBrightness3Get@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_OUT@@@Z.c)
 *     ?DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x1C02CB1E0 (-DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x1C02CB2E0 (-DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z.c)
 *     ?DpiBrightness3Set@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_SET_IN@@@Z @ 0x1C02CB3E0 (-DpiBrightness3Set@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_SET_IN@@@Z.c)
 *     ?DpiBrightness3SetBacklightOptimization@@YAJPEAXKW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C02CB4E0 (-DpiBrightness3SetBacklightOptimization@@YAJPEAXKW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 *     ?DpiBrightnessIfGet@@YAJPEAXPEAE@Z @ 0x1C02CC2B0 (-DpiBrightnessIfGet@@YAJPEAXPEAE@Z.c)
 *     ?DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z @ 0x1C02CC3E0 (-DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z.c)
 *     ?DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x1C02CC4F0 (-DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z @ 0x1C02CC620 (-DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C02CC740 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 *     ?DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C02CC8E0 (-DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 *     ?DpiBrightnessIfSetState@@YAJPEAXPEAU_DXGK_BRIGHTNESS_STATE@@@Z @ 0x1C02CC9C0 (-DpiBrightnessIfSetState@@YAJPEAXPEAU_DXGK_BRIGHTNESS_STATE@@@Z.c)
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x1C02CCD6C (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C02CCFC0 (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFdoThermalActiveCooling @ 0x1C02CF570 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C02CF700 (DpiFdoThermalPassiveCooling.c)
 *     DpiPdoRemovePdoObjects @ 0x1C02D5018 (DpiPdoRemovePdoObjects.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C00DE140 (DpiEnableD3Requests.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C012726C (DxgkReleaseAdapterCoreSync.c)
 */

__int64 __fastcall DpiReleaseCoreSyncAccessSafe(__int64 a1, char a2)
{
  int v2; // edi
  __int64 v4; // rbx

  v2 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL) + 64LL);
  if ( *(_BYTE *)(v4 + 482) )
    DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
  LOBYTE(v2) = a2 == 1;
  DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3896), (unsigned int)(v2 + 1));
  ExReleaseResourceLite((PERESOURCE)(v4 + 3792));
  KeLeaveCriticalRegion();
  return 0LL;
}
