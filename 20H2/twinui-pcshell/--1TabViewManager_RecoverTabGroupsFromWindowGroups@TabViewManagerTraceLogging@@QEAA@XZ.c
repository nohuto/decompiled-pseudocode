/*
 * XREFs of ??1TabViewManager_RecoverTabGroupsFromWindowGroups@TabViewManagerTraceLogging@@QEAA@XZ @ 0x18026A324
 * Callers:
 *     _TabViewManager::RecoverTabGroupsFromWindowGroups_::_1_::dtor$0 @ 0x180275E61 (_TabViewManager--RecoverTabGroupsFromWindowGroups_--_1_--dtor$0.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$0A@$0A@$02$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180269A0C (--1-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderTyp_ea_180269A0C.c)
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$02$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18026DA70 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$02$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$00$0A@$02$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180281214 (-reset@-$shared_object@V-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTa_ea_180281214.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_RecoverTabGroupsFromWindowGroups::~TabViewManager_RecoverTabGroupsFromWindowGroups(
        TabViewManagerTraceLogging::TabViewManager_RecoverTabGroupsFromWindowGroups *this)
{
  *(_QWORD *)this = &TabViewManagerTraceLogging::TabViewManager_RecoverTabGroupsFromWindowGroups::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,0,3,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::details::shared_object<wil::ActivityBase<TabShellTelemetryProvider,1,0,3,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>>::reset((char *)this + 304);
  wil::ActivityBase<TabShellTelemetryProvider,0,0,3,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TabShellTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>((__int64)this + 56);
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TabViewManagerTraceLogging::TabViewManager_RecoverTabGroupsFromWindowGroups *)((char *)this + 8));
}
