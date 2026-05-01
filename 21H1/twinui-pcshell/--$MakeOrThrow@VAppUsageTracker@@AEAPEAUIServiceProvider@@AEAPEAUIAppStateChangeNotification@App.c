/*
 * XREFs of ??$MakeOrThrow@VAppUsageTracker@@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@AEAW4ViewTrackingOption@4567@@wil@@YA?AV?$ComPtr@VAppUsageTracker@@@WRL@Microsoft@@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@AEAW4ViewTrackingOption@6789@@Z @ 0x18043347C
 * Callers:
 *     ?SubscribeToServices@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUIServiceProvider@@@Z @ 0x180432E10 (-SubscribeToServices@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUISe.c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180134FD8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VAppUsageTracker@@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@AEAW4ViewTrackingOption@4567@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAppUsageTracker@@@12@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@AppLimits@FamilySafety@Internal@Windows@@AEAW4ViewTrackingOption@6789@@Z @ 0x180433378 (--$Make@VAppUsageTracker@@AEAPEAUIServiceProvider@@AEAPEAUIAppStateChangeNotification@AppLimits@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeOrThrow<AppUsageTracker,IServiceProvider * &,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification * &,enum Windows::Internal::FamilySafety::AppLimits::ViewTrackingOption &>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4)
{
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::Details::Make<AppUsageTracker,IServiceProvider * &,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification * &,enum Windows::Internal::FamilySafety::AppLimits::ViewTrackingOption &>(
    a1,
    a2,
    a3,
    a4);
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      56LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v5);
    __debugbreak();
  }
  return a1;
}
