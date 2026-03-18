/*
 * XREFs of PALLOCMEM2 @ 0x1C008D744
 * Callers:
 *     ?vCheckIsSetupRunning@@YAXXZ @ 0x1C000DF94 (-vCheckIsSetupRunning@@YAXXZ.c)
 *     ?GetLanguageID@@YAGXZ @ 0x1C000E100 (-GetLanguageID@@YAGXZ.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C000FC88 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     newpathalloc @ 0x1C0016280 (newpathalloc.c)
 *     HmgCreate @ 0x1C001EE8C (HmgCreate.c)
 *     DrvEnumDisplaySettings @ 0x1C002B060 (DrvEnumDisplaySettings.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C002B5D0 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     ?TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C002B880 (-TryFillOnce@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C002B960 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C002C468 (-PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z.c)
 *     HmgFreeObjectAttr @ 0x1C00350CC (HmgFreeObjectAttr.c)
 *     ?GDIEngUserMemAllocNodeAlloc@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z @ 0x1C003F480 (-GDIEngUserMemAllocNodeAlloc@@YAPEAXPEAU_RTL_AVL_TABLE@@K@Z.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00421B8 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     ?GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x1C0042B70 (-GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z.c)
 *     ldevLoadInternal @ 0x1C0044270 (ldevLoadInternal.c)
 *     ?__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C004D0D0 (-__EnumDisplayQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     ?__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C004DB50 (-__DisplayDriverQueryRoutine@@YAJPEAGKPEAXK11@Z.c)
 *     GreSfmCleanupPresentHistory @ 0x1C00530C0 (GreSfmCleanupPresentHistory.c)
 *     LogDiagSDC @ 0x1C0053754 (LogDiagSDC.c)
 *     DrvInitConsole @ 0x1C0055864 (DrvInitConsole.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C00757F4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0076090 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     AllocateObject @ 0x1C007B100 (AllocateObject.c)
 *     HmgFreeDcAttr @ 0x1C007F458 (HmgFreeDcAttr.c)
 *     HmgAllocateDcAttr @ 0x1C008AE30 (HmgAllocateDcAttr.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C008CFC0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     DrvEnumDisplayDevices @ 0x1C0091330 (DrvEnumDisplayDevices.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0092310 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C0093390 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0094060 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     UpdateMonitorDevices @ 0x1C0096760 (UpdateMonitorDevices.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0097074 (DrvUpdateDisplayDriverParameters.c)
 *     ApplyPathModalityToCdsRegistryStore @ 0x1C0097784 (ApplyPathModalityToCdsRegistryStore.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C00978D8 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0098FE0 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     bDynamicModeChange @ 0x1C0099854 (bDynamicModeChange.c)
 *     LogDiagCDS @ 0x1C009C7A4 (LogDiagCDS.c)
 *     HmgAllocateObjectAttr @ 0x1C00A98BC (HmgAllocateObjectAttr.c)
 *     ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x1C00AB7D8 (-ldevBindDisplayStub@@YAPEAU_LDEV@@XZ.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C00ABAF0 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvBuildDevmodeList @ 0x1C00AC550 (DrvBuildDevmodeList.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C00AD02C (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C00AD620 (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 *     MakeSystemRelativePath @ 0x1C00AD8D0 (MakeSystemRelativePath.c)
 *     DrvGetDisplayDriverNames @ 0x1C00ADF70 (DrvGetDisplayDriverNames.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C00AE328 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00AE554 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C00B0680 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C00B1110 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00B1794 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     NtGdiPolyPolyDraw @ 0x1C00C4C40 (NtGdiPolyPolyDraw.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C00C6C80 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00C8320 (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00CAA50 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C00CE860 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C0146630 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C0147A04 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C014DBD4 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014E29C (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     DrvSetVideoParameters @ 0x1C0151C90 (DrvSetVideoParameters.c)
 *     ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C01525BC (-GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C0152990 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiSetPrivateDeviceGammaRamp @ 0x1C0152C30 (NtGdiSetPrivateDeviceGammaRamp.c)
 *     NtHWCursorUpdatePointer @ 0x1C01545B0 (NtHWCursorUpdatePointer.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C015601C (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     MakeSystemDriversRelativePath @ 0x1C0156EE4 (MakeSystemDriversRelativePath.c)
 * Callees:
 *     IsWin32AllocPoolImplSupported @ 0x1C008D834 (IsWin32AllocPoolImplSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

void *__fastcall PALLOCMEM2(size_t Size, unsigned int a2, int a3)
{
  void *v3; // rbx
  size_t v4; // rdi

  v3 = 0LL;
  v4 = (unsigned int)Size;
  if ( (_DWORD)Size )
  {
    if ( (int)IsWin32AllocPoolImplSupported() >= 0 && qword_1C0258BD8 )
      v3 = (void *)qword_1C0258BD8(33LL, (unsigned int)v4, a2);
    if ( v3 && a3 )
      memset(v3, 0, v4);
  }
  return v3;
}
