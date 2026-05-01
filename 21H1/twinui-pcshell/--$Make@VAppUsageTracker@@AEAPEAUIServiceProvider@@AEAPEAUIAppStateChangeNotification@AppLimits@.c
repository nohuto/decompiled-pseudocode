/*
 * XREFs of ??$Make@VAppUsageTracker@@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@AEAW4ViewTrackingOption@4567@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAppUsageTracker@@@12@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@AEAW4ViewTrackingOption@6789@@Z @ 0x180433378
 * Callers:
 *     ??$MakeOrThrow@VAppUsageTracker@@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@AEAW4ViewTrackingOption@4567@@wil@@YA?AV?$ComPtr@VAppUsageTracker@@@WRL@Microsoft@@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@AEAW4ViewTrackingOption@6789@@Z @ 0x18043347C (--$MakeOrThrow@VAppUsageTracker@@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@App.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??0AppUsageTracker@@QEAA@PEAUIServiceProvider@@PEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@W4ViewTrackingOption@3456@@Z @ 0x1804339E0 (--0AppUsageTracker@@QEAA@PEAUIServiceProvider@@PEAUIAppStateChangeNotification@AppLimits@FamilyS.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppUsageTracker@AppLimits@FamilySafety@Internal@Windows@@UIApplicationViewChangeListener@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1804342C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1804342C0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall Microsoft::WRL::Details::Make<AppUsageTracker,IServiceProvider * &,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification * &,enum Windows::Internal::FamilySafety::AppLimits::ViewTrackingOption &>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4)
{
  void *v8; // rax
  __int64 v9; // rdi

  *a1 = 0LL;
  v8 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v9 = AppUsageTracker::AppUsageTracker(v8, *a2, *a3, *a4, 1, v8, v8, v8);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::FamilySafety::AppLimits::IAppUsageTracker,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = v9;
  }
  return a1;
}
