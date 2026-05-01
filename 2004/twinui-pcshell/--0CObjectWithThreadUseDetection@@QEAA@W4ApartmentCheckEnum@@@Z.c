/*
 * XREFs of ??0CObjectWithThreadUseDetection@@QEAA@W4ApartmentCheckEnum@@@Z @ 0x180146B98
 * Callers:
 *     ??0PPIWin32VtcLayoutOperation@@QEAA@XZ @ 0x1800B75A0 (--0PPIWin32VtcLayoutOperation@@QEAA@XZ.c)
 *     ??0CApplicationManager@@QEAA@XZ @ 0x1801466A4 (--0CApplicationManager@@QEAA@XZ.c)
 *     ??0CImmersiveMode@@QEAA@XZ @ 0x18015FCA4 (--0CImmersiveMode@@QEAA@XZ.c)
 *     ??0CClassicWindowManager@@QEAA@XZ @ 0x180162918 (--0CClassicWindowManager@@QEAA@XZ.c)
 *     ??0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x1801737C4 (--0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z.c)
 *     ??$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListener@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewChangeListener@@AEAPEAU3@@Z @ 0x18018C70C (--$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListen.c)
 *     ??0?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@QEAA@XZ @ 0x1802FA860 (--0-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@QEAA@XZ.c)
 *     ??0?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@QEAA@XZ @ 0x18030F7B4 (--0-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@QEAA@XZ.c)
 *     ??0?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@QEAA@XZ @ 0x1803141DC (--0-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@QEAA@XZ.c)
 *     ??0CMultitaskingViewServiceProvider@@QEAA@XZ @ 0x18037D9C4 (--0CMultitaskingViewServiceProvider@@QEAA@XZ.c)
 *     ??0CMultitaskingViewManager@@QEAA@XZ @ 0x180387B7C (--0CMultitaskingViewManager@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UIExternalDragHost@@@WRL@Microsoft@@QEAA@XZ @ 0x18038F6E0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIPPIAllU.c)
 *     ??0CAppTransitionManager@@QEAA@XZ @ 0x1803C4BE4 (--0CAppTransitionManager@@QEAA@XZ.c)
 *     ??0CDesktopPositioner@@QEAA@XZ @ 0x1803EA280 (--0CDesktopPositioner@@QEAA@XZ.c)
 *     ??0DesktopOperation@@QEAA@XZ @ 0x1803F0F5C (--0DesktopOperation@@QEAA@XZ.c)
 *     ??0AppSwitchOperation@@QEAA@XZ @ 0x1804071B8 (--0AppSwitchOperation@@QEAA@XZ.c)
 *     ??0WindowArrangementOperation@@QEAA@XZ @ 0x1804086C4 (--0WindowArrangementOperation@@QEAA@XZ.c)
 *     ??0AppResizeOperation@@QEAA@XZ @ 0x180409460 (--0AppResizeOperation@@QEAA@XZ.c)
 *     ??0BackOperation@@QEAA@XZ @ 0x18040A0B4 (--0BackOperation@@QEAA@XZ.c)
 *     ??0TabletModePositionerOperation@@QEAA@XZ @ 0x18040A5EC (--0TabletModePositionerOperation@@QEAA@XZ.c)
 *     ??0PPILayoutOperation@@QEAA@XZ @ 0x18040BCE4 (--0PPILayoutOperation@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CObjectWithThreadUseDetection::CObjectWithThreadUseDetection(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 40) = -2;
  *(_DWORD *)(a1 + 44) = a2;
  InitializeCriticalSection((LPCRITICAL_SECTION)a1);
  return a1;
}
