/*
 * XREFs of DpiReleaseCoreSyncAccessSafe @ 0x1C01B40A0
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C0020F80 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiFdoHandleDisplayDetectControl @ 0x1C0024A9C (DpiFdoHandleDisplayDetectControl.c)
 *     DxgkQueryConnectionChanges @ 0x1C0024C50 (DxgkQueryConnectionChanges.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C005F440 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0064B48 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C01B3730 (DpiGdoDispatchInternalIoctl.c)
 *     DpiPdoDispatchIoctl @ 0x1C01B3E70 (DpiPdoDispatchIoctl.c)
 *     DpiPdoDispatchPnp @ 0x1C01E4250 (DpiPdoDispatchPnp.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C01E4480 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoSetDevicePower @ 0x1C01EFE0C (DpiPdoSetDevicePower.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01F0E64 (DxgkPowerOnOffMonitor.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C01F7F8C (DpiFdoInitializeGpuVirtualization.c)
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C0389018 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x1C038AA48 (DpiFdoQueryAdapterInfoIntegratedDisplay.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C038AC68 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DxgkHandleMiracastEscape @ 0x1C038E208 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightness3Get@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_OUT@@@Z @ 0x1C038E960 (-DpiBrightness3Get@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_OUT@@@Z.c)
 *     ?DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x1C038EA50 (-DpiBrightness3GetCaps@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z @ 0x1C038EB40 (-DpiBrightness3GetNitRanges@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT@@@Z.c)
 *     ?DpiBrightness3Set@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_SET_IN@@@Z @ 0x1C038EC30 (-DpiBrightness3Set@@YAJPEAXKPEAU_DXGK_BRIGHTNESS_SET_IN@@@Z.c)
 *     ?DpiBrightness3SetBacklightOptimization@@YAJPEAXKW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C038ED20 (-DpiBrightness3SetBacklightOptimization@@YAJPEAXKW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 *     ?DpiBrightnessIfGet@@YAJPEAXPEAE@Z @ 0x1C038F8E0 (-DpiBrightnessIfGet@@YAJPEAXPEAE@Z.c)
 *     ?DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z @ 0x1C038FA10 (-DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z.c)
 *     ?DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x1C038FB20 (-DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z @ 0x1C038FC50 (-DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C038FD70 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 *     ?DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C038FF00 (-DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 *     ?DpiBrightnessIfSetState@@YAJPEAXPEAU_DXGK_BRIGHTNESS_STATE@@@Z @ 0x1C0390020 (-DpiBrightnessIfSetState@@YAJPEAXPEAU_DXGK_BRIGHTNESS_STATE@@@Z.c)
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x1C03902F4 (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0390508 (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFdoThermalActiveCooling @ 0x1C0391190 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C0391310 (DpiFdoThermalPassiveCooling.c)
 *     DpiPdoRemovePdoObjects @ 0x1C0397E38 (DpiPdoRemovePdoObjects.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C01B4124 (DxgkReleaseAdapterCoreSync.c)
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
