/*
 * XREFs of ?SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801F4814
 * Callers:
 *     ?SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801F4968 (-SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x180041EE4 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_43c5188d6d94e6bbd0a4249148973675__void_ @ 0x180097DB8 (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_43c5188d6d94e6bbd0a424.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x1801420E0 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x18014231C (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x180198668 (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaStoreAppExperienceManager::SubscribeToAppEvents(Concurrency::details::_RefCounter **this)
{
  Concurrency::details::_RefCounter **v2; // rax
  Concurrency::details::_RefCounter **v3; // rbx
  Concurrency::details::_RefCounter **v4; // rax
  Concurrency::details::_RefCounter **v5; // rbx
  Concurrency::details::_RefCounter *v7[2]; // [rsp+20h] [rbp-49h] BYREF
  __int64 v8; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v9[15]; // [rsp+38h] [rbp-31h] BYREF

  v9[0] = off_1804916D0;
  v9[1] = this;
  v9[13] = v9;
  v2 = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                               v7,
                                               &WNF_AI_USER_PACKAGEINSTALL,
                                               (__int64)&v8);
  v3 = v2;
  if ( this + 46 != v2 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 46,
      *v2);
    *v3 = 0LL;
  }
  if ( v7[0] )
    Concurrency::details::_RefCounter::_Destroy(v7[0]);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)&v8);
  wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_43c5188d6d94e6bbd0a4249148973675__void_(
    &v8,
    (__int64)this);
  v4 = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                                               v7,
                                               &WNF_AI_USER_PACKAGEUNINSTALL,
                                               (__int64)&v8);
  v5 = v4;
  if ( this + 47 != v4 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      this + 47,
      *v4);
    *v5 = 0LL;
  }
  if ( v7[0] )
    Concurrency::details::_RefCounter::_Destroy(v7[0]);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)&v8);
  return 0LL;
}
