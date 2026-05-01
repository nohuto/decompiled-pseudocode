/*
 * XREFs of _Platform::IVectorChangedEventArgs::Details::VectorChangedEventArgs::Index::[Windows::Foundation::Collections::IVectorChangedEventArgs]::get_::_1_::dtor$0 @ 0x18030E68F
 * Callers:
 *     <none>
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180033C50 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 */

void __fastcall Platform::IVectorChangedEventArgs::Details::VectorChangedEventArgs::Index::_Windows::Foundation::Collections::IVectorChangedEventArgs_::get_::_1_::dtor_0(
        __int64 a1,
        __int64 a2,
        struct IProfferService *a3)
{
  winrt::immersive_shell_component::publish_services(
    *(winrt::immersive_shell_component **)(a2 + 56),
    (struct IServiceProvider *)0x90,
    a3);
}
