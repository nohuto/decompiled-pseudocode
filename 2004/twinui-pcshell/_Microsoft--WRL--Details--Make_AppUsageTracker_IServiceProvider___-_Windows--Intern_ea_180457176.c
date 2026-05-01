/*
 * XREFs of _Microsoft::WRL::Details::Make_AppUsageTracker_IServiceProvider___&_Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification___&_enum_Windows::Internal::FamilySafety::AppLimits::ViewTrackingOption_&__::_1_::dtor$2 @ 0x180457176
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180033C50 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall Microsoft::WRL::Details::Make_AppUsageTracker_IServiceProvider_____Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification_____enum_Windows::Internal::FamilySafety::AppLimits::ViewTrackingOption____::_1_::dtor_2(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 56),
    *(struct IServiceProvider **)(a2 + 48),
    a3);
}
