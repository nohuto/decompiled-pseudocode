/*
 * XREFs of ??1TabViewManagerSelectTabRequested@TabViewManagerMeasures@@QEAA@XZ @ 0x18026AA40
 * Callers:
 *     ?OnSelectTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerCancellableEventArgs@3456@@Z @ 0x1802732A0 (-OnSelectTabRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Wind.c)
 *     _TabViewManager::OnSelectTabRequested_::_1_::dtor$0 @ 0x180273915 (_TabViewManager--OnSelectTabRequested_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18026E558 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall TabViewManagerMeasures::TabViewManagerSelectTabRequested::~TabViewManagerSelectTabRequested(
        TabViewManagerMeasures::TabViewManagerSelectTabRequested *this)
{
  *(_QWORD *)this = &TabViewManagerMeasures::TabViewManagerSelectTabRequested::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
