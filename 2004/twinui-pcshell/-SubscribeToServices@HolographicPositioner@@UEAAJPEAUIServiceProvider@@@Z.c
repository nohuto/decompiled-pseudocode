/*
 * XREFs of ?SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180243980
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x1800164D4 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x18004E2F0 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800526A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@details@wil@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x180142220 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x18014245C (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??$make_wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBW4ShellState@Holographic@Shell@Internal@Windows@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@01@@Z @ 0x18023E648 (--$make_wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@details@wil@@YA.c)
 */

__int64 __fastcall HolographicPositioner::SubscribeToServices(HolographicPositioner *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v5)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v6)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  int v14; // edi
  __int64 v15; // rdx
  HRESULT (__stdcall *v16)(IServiceProvider *, const GUID *const, const IID *const, void **); // rsi
  HRESULT (__stdcall *v17)(IServiceProvider *, const GUID *const, const IID *const, void **); // rsi
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // eax
  Concurrency::details::_RefCounter *v21; // rcx
  Concurrency::details::_RefCounter **v22; // rbp
  _QWORD v23[2]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v24[8]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v25[15]; // [rsp+48h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HolographicUserExperiences>::ReportUsage(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetImpl'::`2'::impl,
    1u,
    3u);
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
  ((void (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
    a2,
    &GUID_90dcc0b6_b98f_4554_aa41_ac5e28ba0261,
    &GUID_90dcc0b6_b98f_4554_aa41_ac5e28ba0261,
    (char *)this + 184);
  v5 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 48);
  ((void (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v5)(
    a2,
    &GUID_dd621a70_9d93_4d88_8e1c_8b8412f81664,
    &GUID_dd621a70_9d93_4d88_8e1c_8b8412f81664,
    (char *)this + 384);
  v6 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
  ((void (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v6)(
    a2,
    &CLSID_HolographicForegroundAssistant,
    &GUID_0249c870_f630_4a75_8d01_b316c814157a,
    (char *)this + 192);
  if ( IsHolographicWin32SlatesFeatureEnabled(v8, v7) )
  {
    v9 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
    ((void (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v9)(
      a2,
      &GUID_d1d6b481_41b7_4e01_ad15_f8948c7d1df3,
      &GUID_d1d6b481_41b7_4e01_ad15_f8948c7d1df3,
      (char *)this + 200);
  }
  v10 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 22);
  v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v10)(
          a2,
          &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
          &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
          (char *)this + 176);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x171,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v11);
    return v12;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 22) + 96LL))(
          *((_QWORD *)this + 22),
          ((unsigned __int64)this + 136) & -(__int64)(this != (HolographicPositioner *)48),
          (char *)this + 208);
  if ( v14 < 0 )
  {
    v15 = 370LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v14);
    return (unsigned int)v14;
  }
  v16 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v16)(
          a2,
          &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
          &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
          (char *)this + 216);
  if ( v14 < 0 )
  {
    v15 = 372LL;
    goto LABEL_7;
  }
  v17 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 29);
  v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v17)(
          a2,
          &CLSID_HolographicViewHostItemLedger,
          &GUID_6263b38f_a858_4070_9a3b_d938762099cc,
          (char *)this + 232);
  if ( v14 < 0 )
  {
    v15 = 373LL;
    goto LABEL_7;
  }
  v25[1] = (char *)this - 48;
  v25[0] = off_1804939C8;
  v25[13] = v25;
  v20 = wil::details::make_wnf_subscription_state<enum Windows::Internal::Shell::Holographic::ShellState>(
          v18,
          (__int64)v24,
          v19,
          v23);
  v21 = 0LL;
  if ( v20 >= 0 )
    v21 = (Concurrency::details::_RefCounter *)v23[0];
  v22 = (Concurrency::details::_RefCounter **)((char *)this + 392);
  if ( v22 != v23 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      v22,
      v21);
    v21 = 0LL;
  }
  if ( v21 )
    Concurrency::details::_RefCounter::_Destroy(v21);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v24);
  return 0LL;
}
