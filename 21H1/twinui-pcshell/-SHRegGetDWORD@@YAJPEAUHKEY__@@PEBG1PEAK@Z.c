/*
 * XREFs of ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180050190
 * Callers:
 *     ?s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x18001DFC8 (-s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x1800312E0 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?GetSearchboxTaskbarMode@@YA?AW4SearchboxTaskbarMode@@XZ @ 0x18004FF24 (-GetSearchboxTaskbarMode@@YA-AW4SearchboxTaskbarMode@@XZ.c)
 *     ?_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ @ 0x18004FFB4 (-_QueueUnsuppressSplashScreenAfterTimeout@CFrameApplicationPresentation@@AEAAJXZ.c)
 *     _lambda_f436f471d7a54d3b33991578e83bb777_::operator() @ 0x18015040C (_lambda_f436f471d7a54d3b33991578e83bb777_--operator().c)
 *     ?IsPPIFullFrameUI@@YA_NXZ @ 0x1801516C4 (-IsPPIFullFrameUI@@YA_NXZ.c)
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x180152F3C (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 *     ?GetMDMPolicyLayoutTimestamp@TaskbarLayoutPolicyManager@@AEAAJPEAK@Z @ 0x18017A0D0 (-GetMDMPolicyLayoutTimestamp@TaskbarLayoutPolicyManager@@AEAAJPEAK@Z.c)
 *     ?ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DEVICE_SCALE_FACTOR@@@Z @ 0x1801BFD18 (-ComputeDesiredSize@CVirtualTouchpadExperienceManager@@AEAAJPEAUHMONITOR__@@PEBUtagRECT@@PEBW4DE.c)
 *     ?LookUpPrintScreenSetting@CScreenClippingExperienceManager@@AEAAXXZ @ 0x1801C5A24 (-LookUpPrintScreenSetting@CScreenClippingExperienceManager@@AEAAXXZ.c)
 *     ?RefreshActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x1801D5050 (-RefreshActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAUIShellExperienceView.c)
 *     ?InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x180207B78 (-InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperation.c)
 *     ?SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z @ 0x180209670 (-SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180297260 (-SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ @ 0x1802C3858 (-RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ.c)
 *     ?IsMobileOOBE@@YA_NXZ @ 0x18032AC90 (-IsMobileOOBE@@YA_NXZ.c)
 *     ?InitializeConfig@MultitaskingViewGestureHandler@@AEAAXXZ @ 0x180362468 (-InitializeConfig@MultitaskingViewGestureHandler@@AEAAXXZ.c)
 *     ??0CMultitaskingViewHotKeyHandler@@QEAA@XZ @ 0x180365560 (--0CMultitaskingViewHotKeyHandler@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CDesktopPositioner@@QEAAJXZ @ 0x1803CCC5C (-RuntimeClassInitialize@CDesktopPositioner@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x18040C3B8 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 *     ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x18040D3B0 (-SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x180412220 (-RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesk.c)
 *     ??0Win32AppStateManager@@QEAA@XZ @ 0x180438500 (--0Win32AppStateManager@@QEAA@XZ.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180448858 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?_MatchesPreviousFailure@CCriticalFailureHandler@@AEBA_NJPEBGIPEA_K1@Z @ 0x180448AF0 (-_MatchesPreviousFailure@CCriticalFailureHandler@@AEBA_NJPEBGIPEA_K1@Z.c)
 *     SHRegGetUSDWORDW @ 0x1804490CC (SHRegGetUSDWORDW.c)
 *     ?IsServer@HideWallpaperIconsObject@@AEAA_NXZ @ 0x180454098 (-IsServer@HideWallpaperIconsObject@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall SHRegGetDWORD(HKEY a1, const unsigned __int16 *a2, const unsigned __int16 *a3, unsigned int *a4)
{
  LSTATUS result; // eax
  DWORD v5[6]; // [rsp+40h] [rbp-18h] BYREF

  v5[0] = 4;
  result = RegGetValueW(a1, a2, a3, 0x10u, 0LL, a4, v5);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
