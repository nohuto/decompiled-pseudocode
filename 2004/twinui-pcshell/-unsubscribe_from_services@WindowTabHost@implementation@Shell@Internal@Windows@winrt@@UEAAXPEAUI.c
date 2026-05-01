/*
 * XREFs of ?unsubscribe_from_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800CEF80
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEAA_NXZ @ 0x1800CD828 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEA.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180141980 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::unsubscribe_from_services(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        struct IServiceProvider *a2)
{
  SmartCookie::Unregister((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)((char *)this + 128));
  SmartCookie::Unregister((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)((char *)this + 256));
  SmartCookie::Unregister((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)((char *)this + 424));
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_WthTaskbarTabs>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_WthTaskbarTabs>::GetImpl'::`2'::impl) )
  {
    if ( *((_QWORD *)this + 49) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 120LL))(*((_QWORD *)this + 48));
  }
}
