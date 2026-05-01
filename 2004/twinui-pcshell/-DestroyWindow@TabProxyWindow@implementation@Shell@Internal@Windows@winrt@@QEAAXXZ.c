/*
 * XREFs of ?DestroyWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1800D44E0
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_3333870f0a6df31e96efe5437eaf05f9___::Invoke @ 0x1800D00F0 (CAsyncCallbackWithLambda__lambda_3333870f0a6df31e96efe5437eaf05f9___--Invoke.c)
 *     ?DestroyWindowInternal@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1800D4570 (-DestroyWindowInternal@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEAA_NXZ @ 0x1800CD828 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEA.c)
 *     ?TabChanged@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBAXAEBUevent_token@3@@Z @ 0x1800DB2BC (-TabChanged@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::DestroyWindow(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_WthTaskbarTabs>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_WthTaskbarTabs>::GetImpl'::`2'::impl) )
  {
    if ( *((_BYTE *)this + 169) )
    {
      v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 96LL))(
             *((_QWORD *)this + 14),
             *((_QWORD *)this + 4));
      if ( v2 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x11D,
          (__int64)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
          (const char *)(unsigned int)v2);
    }
  }
  DestroyWindow(*((HWND *)this + 4));
  if ( *((_QWORD *)this + 6) )
    winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::TabChanged(
      (char *)this + 48,
      (char *)this + 144);
}
