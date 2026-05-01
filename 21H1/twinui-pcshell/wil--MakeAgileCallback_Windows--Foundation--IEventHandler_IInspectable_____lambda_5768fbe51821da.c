/*
 * XREFs of wil::MakeAgileCallback_Windows::Foundation::IEventHandler_IInspectable_____lambda_5768fbe51821daf2523ac35b25514dd7___ @ 0x1802632C8
 * Callers:
 *     ?EnsureTitleBarFactoryStatics@TitleBarController@@AEAAJXZ @ 0x180265548 (-EnsureTitleBarFactoryStatics@TitleBarController@@AEAAJXZ.c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180134FD8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAVTabDataModelTabsChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18022F630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_18022F630.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::FtmBase___lambda_5768fbe51821daf2523ac35b25514dd7___1_IInspectable___IInspectable_____lambda_5768fbe51821daf2523ac35b25514dd7___ @ 0x180262FD8 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_180262FD8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAgileCallback_Windows::Foundation::IEventHandler_IInspectable_____lambda_5768fbe51821daf2523ac35b25514dd7___(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  const char *v4; // r9
  volatile int *v5; // rdx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v3 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::___IInspectable___IInspectable____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::FtmBase___lambda_5768fbe51821daf2523ac35b25514dd7___1_IInspectable___IInspectable_____lambda_5768fbe51821daf2523ac35b25514dd7___(
         &v9,
         a2);
  v5 = (volatile int *)*v3;
  *a1 = *v3;
  *v3 = 0LL;
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs *>,Microsoft::WRL::FtmBase>>::Release(
      v6,
      v5);
  }
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      78LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v4);
    __debugbreak();
  }
  return a1;
}
