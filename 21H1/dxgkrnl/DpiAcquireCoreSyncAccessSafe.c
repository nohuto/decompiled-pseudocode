/*
 * XREFs of DpiAcquireCoreSyncAccessSafe @ 0x1C012746C
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C001C664 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiFdoHandleDisplayDetectControl @ 0x1C001FE48 (DpiFdoHandleDisplayDetectControl.c)
 *     DxgkQueryConnectionChanges @ 0x1C0020060 (DxgkQueryConnectionChanges.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C004F19C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
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
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001F6D4 (DpiCheckForOutstandingD3Requests.c)
 *     DpiEnableD3Requests @ 0x1C00DE140 (DpiEnableD3Requests.c)
 *     DpiIsPowerRuntimeDStateTransition @ 0x1C012759C (DpiIsPowerRuntimeDStateTransition.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C01275D0 (DxgkAcquireAdapterCoreSync.c)
 */

__int64 __fastcall DpiAcquireCoreSyncAccessSafe(__int64 a1, char a2)
{
  __int64 v2; // rsi
  int v3; // edi
  unsigned int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v5 = 0;
  v6 = *(_QWORD *)(v2 + 32);
  v7 = *(_QWORD *)(v6 + 64);
  if ( *(_BYTE *)(v7 + 482) )
    DpiCheckForOutstandingD3Requests(*(_QWORD *)(v6 + 64));
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v7 + 3792), 1u);
  if ( *(_DWORD *)(v7 + 236) == 6 || *(_DWORD *)(v7 + 240) == 6 || (v8 = *(unsigned int *)(v7 + 3976), (_DWORD)v8 == 3) )
  {
    v17 = -1073741810LL;
    v5 = -1073741810;
    v18 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v18 + 24) = *(_QWORD *)(v7 + 24);
LABEL_22:
    *(_QWORD *)(v18 + 32) = v17;
    WdLogEvent5_WdWarning(v18);
    goto LABEL_23;
  }
  if ( *(_DWORD *)(v2 + 16) == 1953656900
    && (*(_DWORD *)(v2 + 20) == 5 || *(_DWORD *)(v2 + 20) == 2 || *(_DWORD *)(v2 + 20) == 6) )
  {
    if ( ((unsigned __int8)DpiIsPowerRuntimeDStateTransition(v7) || (_DWORD)v11 != 1 && *(_DWORD *)(v7 + 284) == 1)
      && *(_QWORD *)(v7 + 3896)
      && (!(unsigned __int8)DpiIsPowerRuntimeDStateTransition(v12)
       || !*((_BYTE *)DXGGLOBAL::GetGlobal(v15, v14) + 304120)) )
    {
      LOBYTE(v3) = a2 == 1;
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v7 + 3896), (unsigned int)(v3 + 1));
      return v5;
    }
    v17 = -1073741661LL;
    v5 = -1073741661;
    v18 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v18 + 24) = *(_QWORD *)(v7 + 24);
    goto LABEL_22;
  }
  v5 = -1073741637;
  v19 = WdLogNewEntry5_WdError(1953656900LL, v8);
  *(_QWORD *)(v19 + 24) = *(_QWORD *)(v2 + 24);
  *(_QWORD *)(v19 + 32) = -1073741637LL;
  WdLogEvent5_WdError(v19);
LABEL_23:
  if ( *(_BYTE *)(v7 + 482) )
    DpiEnableD3Requests(*(_QWORD *)(v7 + 24));
  ExReleaseResourceLite((PERESOURCE)(v7 + 3792));
  KeLeaveCriticalRegion();
  return v5;
}
