/*
 * XREFs of ??1UpdateAppView@AppUsageTelemetry@@QEAA@XZ @ 0x1804358C0
 * Callers:
 *     ?UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x180436A50 (-UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety.c)
 *     _UwpAppStateManager::UpdateAppView_::_1_::dtor$0 @ 0x180436D30 (_UwpAppStateManager--UpdateAppView_--_1_--dtor$0.c)
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x18043A0F8 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 *     _Win32AppStateManager::UpdateAppViewWorker_::_1_::dtor$0 @ 0x18043A7E1 (_Win32AppStateManager--UpdateAppViewWorker_--_1_--dtor$0.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VAppUsageTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180435814 (--1-$ActivityData@VAppUsageTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@VA.c)
 *     ?Destroy@?$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180435A4C (-Destroy@-$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?reset@?$shared_object@V?$ActivityData@VAppUsageTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAppUsageTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180436F84 (-reset@-$shared_object@V-$ActivityData@VAppUsageTelemetry@@U_TlgReflectorTag_Param0IsProviderTyp.c)
 */

void __fastcall AppUsageTelemetry::UpdateAppView::~UpdateAppView(AppUsageTelemetry::UpdateAppView *this)
{
  *(_QWORD *)this = &AppUsageTelemetry::UpdateAppView::`vftable';
  wil::ActivityBase<AppUsageTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::details::shared_object<wil::ActivityBase<AppUsageTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AppUsageTelemetry,_TlgReflectorTag_Param0IsProviderType>>::reset((char *)this + 304);
  wil::ActivityBase<AppUsageTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AppUsageTelemetry,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<AppUsageTelemetry,_TlgReflectorTag_Param0IsProviderType>((__int64)this + 56);
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((AppUsageTelemetry::UpdateAppView *)((char *)this + 8));
}
