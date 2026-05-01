/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_AppViewDataSourceAdapter_AppViewDataSourceAdapter_enum_AppViewDataSourceScope_IApplicationViewCollection___&_IApplicationViewIconLoader___&_IImmersiveShellHookService___&_Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice___std::nullptr_t_std::nullptr_t_std::nullptr_t__::_1_::dtor$1 @ 0x180317ED7
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180033820 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_AppViewDataSourceAdapter_AppViewDataSourceAdapter_enum_AppViewDataSourceScope_IApplicationViewCollection_____IApplicationViewIconLoader_____IImmersiveShellHookService_____Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice___std::nullptr_t_std::nullptr_t_std::nullptr_t__::_1_::dtor_1(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 88),
    *(struct IServiceProvider **)(a2 + 112),
    a3);
}
