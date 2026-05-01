/*
 * XREFs of ?RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ @ 0x18011CA2C
 * Callers:
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18011D200 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x180015F04 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     wistd::function_void___cdecl(_SEB_EVENT_HEADER_const_&)_::function_void___cdecl(_SEB_EVENT_HEADER_const_&)___lambda_37f27d7232610e21b40ee608124aee94__void_ @ 0x18011AE5C (wistd--function_void___cdecl(_SEB_EVENT_HEADER_const_-)_--function_void___cdecl(_SEB_EVENT_HEADE.c)
 *     ??$make_wnf_subscription@U_SEB_EVENT_HEADER@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBU_SEB_EVENT_HEADER@@@Z@wistd@@K@Z @ 0x18011B340 (--$make_wnf_subscription@U_SEB_EVENT_HEADER@@@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$reso.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x18011DCC0 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x18011DF28 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AcrylicPolicyManager::RegisterForEnergySaverStateChange(AcrylicPolicyManager *this)
{
  char *v2; // rbx
  char *v3; // r14
  __int64 v4; // rdi
  int AgileReference; // esi
  __int64 v6; // rdx
  AcrylicPolicyManager *wnf; // rax
  AcrylicPolicyManager *v8; // rbx
  __int64 v10; // [rsp+28h] [rbp-69h] BYREF
  Concurrency::details::_RefCounter *v11; // [rsp+30h] [rbp-61h] BYREF
  char *v12; // [rsp+38h] [rbp-59h] BYREF
  __int64 v13; // [rsp+40h] [rbp-51h] BYREF
  _BYTE v14[128]; // [rsp+48h] [rbp-49h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  if ( this )
  {
    v2 = (char *)this + 136;
    v3 = (char *)this + 136;
  }
  else
  {
    v2 = 0LL;
    v3 = 0LL;
  }
  v12 = v2;
  if ( v3 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 8LL))(v2);
  v4 = 0LL;
  v10 = 0LL;
  AgileReference = 0;
  if ( v3 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    AgileReference = RoGetAgileReference(0LL, &GUID_18661d31_3944_41b1_bd96_da3defc2c268, v2, &v10);
    v4 = v10;
  }
  v10 = 0LL;
  v11 = 0LL;
  v13 = v4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  if ( AgileReference >= 0 )
  {
    v10 = v4;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    wistd::function_void___cdecl__SEB_EVENT_HEADER_const____::function_void___cdecl__SEB_EVENT_HEADER_const______lambda_37f27d7232610e21b40ee608124aee94__void_(
      (__int64)v14,
      &v10);
    wnf = (AcrylicPolicyManager *)wil::make_wnf_subscription<_SEB_EVENT_HEADER>(&v11, v6, (__int64)v14);
    v8 = wnf;
    if ( (AcrylicPolicyManager *)((char *)this + 456) != wnf )
    {
      wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
        (char *)this + 456,
        *(_QWORD *)wnf);
      *(_QWORD *)v8 = 0LL;
    }
    if ( v11 )
      Concurrency::details::_RefCounter::_Destroy(v11);
    wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v14);
    AgileReference = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x93,
      (__int64)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)AgileReference);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return (unsigned int)AgileReference;
}
