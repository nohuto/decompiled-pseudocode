/*
 * XREFs of _Microsoft::WRL::Details::Make_ViewGroupManager_ITitleBarController___&_ITabViewManager___&__::_1_::dtor$2 @ 0x18028B2E1
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180033C50 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall Microsoft::WRL::Details::Make_ViewGroupManager_ITitleBarController_____ITabViewManager______::_1_::dtor_2(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 48),
    *(struct IServiceProvider **)(a2 + 40),
    a3);
}
