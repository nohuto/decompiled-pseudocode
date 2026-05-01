/*
 * XREFs of _Microsoft::WRL::Details::Make_WindowWrapper_WindowEventDispatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppView___Windows::Internal::ApplicationModel::WindowManagement::IAppModel___enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind_&_Windows::Internal::ApplicationModel::WindowManagement::AppViewId_&_Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId_&_unsigned_short_const___enum_WindowCreatedType__::_1_::dtor$2 @ 0x1800DE16E
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180033820 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall Microsoft::WRL::Details::Make_WindowWrapper_WindowEventDispatcher___Windows::Internal::ApplicationModel::WindowManagement::IAppView___Windows::Internal::ApplicationModel::WindowManagement::IAppModel___enum_Windows::Internal::ApplicationModel::WindowManagement::AppModelKind___Windows::Internal::ApplicationModel::WindowManagement::AppViewId___Windows::Internal::ApplicationModel::WindowManagement::IWindow___Windows::Internal::ApplicationModel::WindowManagement::WindowId___unsigned_short_const___enum_WindowCreatedType__::_1_::dtor_2(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 104),
    *(struct IServiceProvider **)(a2 + 96),
    a3);
}
