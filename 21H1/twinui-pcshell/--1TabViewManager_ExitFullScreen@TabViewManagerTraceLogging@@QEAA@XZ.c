/*
 * XREFs of ??1TabViewManager_ExitFullScreen@TabViewManagerTraceLogging@@QEAA@XZ @ 0x180248E40
 * Callers:
 *     ?ExitFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18024D2B4 (-ExitFullScreen@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18024C788 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProv.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_ExitFullScreen::~TabViewManager_ExitFullScreen(
        TabViewManagerTraceLogging::TabViewManager_ExitFullScreen *this)
{
  *(_QWORD *)this = &TabViewManagerTraceLogging::TabViewManager_ExitFullScreen::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
