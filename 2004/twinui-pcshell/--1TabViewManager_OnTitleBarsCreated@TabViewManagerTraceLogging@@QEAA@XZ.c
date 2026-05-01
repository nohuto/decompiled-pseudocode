/*
 * XREFs of ??1TabViewManager_OnTitleBarsCreated@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18026AB68
 * Callers:
 *     ?OnTitleBarsCreated@TabViewManager@@UEAAJXZ @ 0x180274C80 (-OnTitleBarsCreated@TabViewManager@@UEAAJXZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18026E604 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_OnTitleBarsCreated::~TabViewManager_OnTitleBarsCreated(
        TabViewManagerTraceLogging::TabViewManager_OnTitleBarsCreated *this)
{
  *(_QWORD *)this = &TabViewManagerTraceLogging::TabViewManager_OnTitleBarsCreated::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,0,0,3,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,0,0,3,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,0,0,3,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
