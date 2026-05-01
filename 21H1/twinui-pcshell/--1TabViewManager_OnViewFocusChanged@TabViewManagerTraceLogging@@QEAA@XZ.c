/*
 * XREFs of ??1TabViewManager_OnViewFocusChanged@TabViewManagerTraceLogging@@QEAA@XZ @ 0x180248F68
 * Callers:
 *     _TabViewManager::OnViewFocusChanged_::_1_::dtor$0 @ 0x1802539B8 (_TabViewManager--OnViewFocusChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18024C830 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_OnViewFocusChanged::~TabViewManager_OnViewFocusChanged(
        TabViewManagerTraceLogging::TabViewManager_OnViewFocusChanged *this)
{
  *(_QWORD *)this = &TabViewManagerTraceLogging::TabViewManager_OnViewFocusChanged::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
