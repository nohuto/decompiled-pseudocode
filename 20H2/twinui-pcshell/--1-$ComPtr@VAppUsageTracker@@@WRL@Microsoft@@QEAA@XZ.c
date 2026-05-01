/*
 * XREFs of ??1?$ComPtr@VAppUsageTracker@@@WRL@Microsoft@@QEAA@XZ @ 0x180457154
 * Callers:
 *     _Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::SubscribeToServices_::_1_::dtor$4 @ 0x180456438 (_Windows--Internal--FamilySafety--AppLimits--FamilyAppUsageManager--SubscribeToServ_ea_180456438.c)
 *     _Microsoft::WRL::Details::Make_AppUsageTracker_IServiceProvider___&_Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification___&_enum_Windows::Internal::FamilySafety::AppLimits::ViewTrackingOption_&__::_1_::dtor$0 @ 0x180456A03 (_Microsoft--WRL--Details--Make_AppUsageTracker_IServiceProvider___-_Windows--Internal--FamilySaf.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppUsageTracker@AppLimits@FamilySafety@Internal@Windows@@UIApplicationViewChangeListener@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180457820 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_180457820.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<AppUsageTracker>::~ComPtr<AppUsageTracker>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::FamilySafety::AppLimits::IAppUsageTracker,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
