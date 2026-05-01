/*
 * XREFs of ?RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ @ 0x18018F69C
 * Callers:
 *     ??$MakeAndInitialize@VCApplicationViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18018C3E4 (--$MakeAndInitialize@VCApplicationViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18000CED0 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x180041EE4 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x1801420E0 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x18014231C (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18014F4C4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVNotificationDispatcher@@@Z @ 0x18018C594 (--$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVNotificati.c)
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x18018CF8C (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     ?ApplicationViewManagerVisibilityDebouncer_CreateInstance@@YAJPEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180190F4C (-ApplicationViewManagerVisibilityDebouncer_CreateInstance@@YAJPEAUIApplicationViewCollection@@AE.c)
 */

__int64 __fastcall CApplicationViewManager::RuntimeClassInitialize(CApplicationViewManager *this)
{
  void **v1; // rsi
  int Instance; // ebx
  __int64 v4; // rdx
  Concurrency::details::_RefCounter **v6; // rax
  Concurrency::details::_RefCounter **v7; // rdi
  Concurrency::details::_RefCounter **v8; // rbx
  Concurrency::details::_RefCounter *v9; // [rsp+28h] [rbp-49h] BYREF
  GUID v10; // [rsp+38h] [rbp-39h] BYREF
  __int128 v11; // [rsp+48h] [rbp-29h]
  GUID v12; // [rsp+58h] [rbp-19h]
  __int128 v13; // [rsp+68h] [rbp-9h]
  GUID v14; // [rsp+78h] [rbp+7h]
  void *v15; // [rsp+88h] [rbp+17h]
  __int64 v16; // [rsp+90h] [rbp+1Fh]
  GUID v17; // [rsp+98h] [rbp+27h]
  __int128 v18; // [rsp+A8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v1 = (void **)((char *)this + 736);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 92);
  Instance = ApplicationViewManagerVisibilityDebouncer_CreateInstance(
               (struct IApplicationViewCollection *)(((unsigned __int64)this + 136) & -(__int64)(this != 0LL)),
               (const struct _GUID *)((char *)this + 136),
               v1);
  if ( Instance < 0 )
  {
    v4 = 20LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  v15 = *v1;
  v10 = GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5;
  v16 = 0LL;
  v11 = 0LL;
  v12 = GUID_e0fe7384_5482_4659_ab2c_4ff038948779;
  v13 = 0LL;
  v14 = GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3;
  v18 = 0LL;
  v17 = GUID_de6e8a03_3811_4239_9de9_96d0dfc301e6;
  Instance = CImmersiveShellComponent::RegisterServiceInformation(
               (CApplicationViewManager *)((char *)this + 72),
               (const struct CImmersiveShellComponent::ISC_SERVICE *)&v10,
               4LL);
  if ( Instance < 0 )
  {
    v4 = 29LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease((__int64 *)this + 101);
  Instance = Microsoft::WRL::Details::MakeAndInitialize<NotificationDispatcher,NotificationDispatcher,>((__int64 *)this + 101);
  if ( Instance < 0 )
  {
    v4 = 30LL;
    goto LABEL_3;
  }
  *(_QWORD *)&v11 = this;
  *(_QWORD *)v10.Data4 = off_180490DC8;
  *(_QWORD *)&v18 = v10.Data4;
  v6 = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription_nothrow<wil::details::empty_wnf_state>(
                                               &v9,
                                               (__int64)&WNF_EDP_ENTERPRISE_CONTEXTS_UPDATED,
                                               (__int64)&v10);
  v7 = (Concurrency::details::_RefCounter **)((char *)this + 728);
  v8 = v6;
  if ( v7 != v6 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      v7,
      *v6);
    *v8 = 0LL;
  }
  if ( v9 )
    Concurrency::details::_RefCounter::_Destroy(v9);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)&v10);
  if ( !*v7 )
  {
    Instance = -2147024882;
    v4 = 48LL;
    goto LABEL_3;
  }
  return 0LL;
}
