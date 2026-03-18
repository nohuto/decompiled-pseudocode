/*
 * XREFs of PALLOCMEM2 @ 0x1C003C5B0
 * Callers:
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C000A958 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvEnumDisplaySettings @ 0x1C000C480 (DrvEnumDisplaySettings.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C000C9F0 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C000D008 (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C000EABC (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvBuildDevmodeList @ 0x1C000F520 (DrvBuildDevmodeList.c)
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C000FF80 (ApplyPathModalityToCdsRegistryStore.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C00100D4 (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C00108C4 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C0011C5C (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0011E88 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C0013030 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     UpdateMonitorDevices @ 0x1C00137F0 (UpdateMonitorDevices.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C0014B00 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0014BA8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvGetDisplayDriverNames @ 0x1C00156E0 (DrvGetDisplayDriverNames.c)
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C0016B30 (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 *     MakeSystemRelativePath @ 0x1C0016DE0 (MakeSystemRelativePath.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C0016F28 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     bDynamicModeChange @ 0x1C0019194 (bDynamicModeChange.c)
 *     HmgAllocateObjectAttr @ 0x1C001D314 (HmgAllocateObjectAttr.c)
 *     HmgAllocateDcAttr @ 0x1C001D474 (HmgAllocateDcAttr.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C001DB80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003C344 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C003C4D0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     AllocateObject @ 0x1C003D5C0 (AllocateObject.c)
 *     HmgFreeDcAttr @ 0x1C003E544 (HmgFreeDcAttr.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C00522D0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0052FA0 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     DrvEnumDisplayDevices @ 0x1C0055B20 (DrvEnumDisplayDevices.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0056EB4 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C005A410 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     LogDiagCDS @ 0x1C006C61C (LogDiagCDS.c)
 *     LogDiagSDC @ 0x1C006FE34 (LogDiagSDC.c)
 *     HmgCreate @ 0x1C007227C (HmgCreate.c)
 *     GreSfmCleanupPresentHistory @ 0x1C0075070 (GreSfmCleanupPresentHistory.c)
 *     ?vCheckIsSetupRunning@@YAXXZ @ 0x1C00865C4 (-vCheckIsSetupRunning@@YAXXZ.c)
 *     ?GetLanguageID@@YAGXZ @ 0x1C0086730 (-GetLanguageID@@YAGXZ.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0087248 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     newpathalloc @ 0x1C0087CC0 (newpathalloc.c)
 *     DrvInitConsole @ 0x1C00957D0 (DrvInitConsole.c)
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C009A418 (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 *     HmgFreeObjectAttr @ 0x1C00A566C (HmgFreeObjectAttr.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C00A8124 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     ?GDIEngUserMemAllocNodeAlloc@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z @ 0x1C00AD060 (-GDIEngUserMemAllocNodeAlloc@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00AFE08 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     ?GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x1C00B0CF0 (-GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z.c)
 *     ldevLoadInternal @ 0x1C00B1C10 (ldevLoadInternal.c)
 *     ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x1C00B1D3C (-ldevBindDisplayStub@@YAPEAU_LDEV@@XZ.c)
 *     ?__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C00BAE70 (-__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     ?__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C00BB970 (-__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     NtGdiPolyPolyDraw @ 0x1C00C4640 (NtGdiPolyPolyDraw.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C00C6610 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00C9210 (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00CA1A0 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C00CECE0 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C013DF90 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C013F1F4 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C01453B4 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0145A7C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     DrvSetVideoParameters @ 0x1C0149470 (DrvSetVideoParameters.c)
 *     ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C0149D94 (-GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C014A160 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiSetPrivateDeviceGammaRamp @ 0x1C014A400 (NtGdiSetPrivateDeviceGammaRamp.c)
 *     NtHWCursorUpdatePointer @ 0x1C014BE10 (NtHWCursorUpdatePointer.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C014D71C (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     MakeSystemDriversRelativePath @ 0x1C014E5E4 (MakeSystemDriversRelativePath.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

void *__fastcall PALLOCMEM2(size_t Size, __int64 a2, int a3)
{
  void *v3; // rbx
  unsigned int v5; // edi
  void *v6; // rax

  v3 = 0LL;
  if ( (_DWORD)Size )
  {
    v5 = Size;
    v6 = (void *)Win32AllocPool((unsigned int)Size, a2);
    v3 = v6;
    if ( v6 )
    {
      if ( a3 )
        memset(v6, 0, v5);
    }
  }
  return v3;
}
