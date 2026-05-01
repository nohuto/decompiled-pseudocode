/*
 * XREFs of ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x1801B1CE4
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801B06C0 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x180041EE4 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     ??$AsWeak@VCActionCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCActionCenterExperienceManager@@PEAVWeakRef@01@@Z @ 0x180061538 (--$AsWeak@VCActionCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCActionCenterExperienceManager.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180061618 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x1801420E0 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x18014231C (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x18018CF8C (--$make_wnf_subscription_nothrow@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$uniq.c)
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_4acf0ee5e37bcf1c6596b10e593f8e28__void_ @ 0x1801AD304 (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_4acf0ee5e37bcf1c6596b1.c)
 */

__int64 __fastcall CActionCenterExperienceManager::SubscribeToShellReadyWnf(CActionCenterExperienceManager *this)
{
  char *v2; // rbx
  __int64 v3; // rax
  int AgileReference; // edi
  __int64 *v5; // rax
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rdx
  Concurrency::details::_RefCounter **v9; // rax
  Concurrency::details::_RefCounter **v10; // rsi
  Concurrency::details::_RefCounter **v11; // rbx
  __int64 v12; // rcx
  Concurrency::details::_RefCounter *v14; // [rsp+28h] [rbp-69h] BYREF
  __int64 v15; // [rsp+30h] [rbp-61h] BYREF
  __int64 v16[2]; // [rsp+38h] [rbp-59h] BYREF
  __int64 v17; // [rsp+48h] [rbp-49h] BYREF
  char *v18; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v19[128]; // [rsp+58h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  if ( this )
    v2 = (char *)this + 32;
  else
    v2 = 0LL;
  v18 = v2;
  if ( v2 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = 0LL;
  AgileReference = 0;
  v16[0] = 0LL;
  if ( v2 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
    AgileReference = RoGetAgileReference(0LL, &GUID_df65db57_d504_456e_8bd7_004ce308d8d9, v2, v16);
    v3 = v16[0];
  }
  v16[0] = 0LL;
  v14 = 0LL;
  v17 = v3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
  if ( AgileReference < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E1,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)AgileReference);
    goto LABEL_24;
  }
  v15 = 0LL;
  v14 = (Concurrency::details::_RefCounter *)&v15;
  v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v14);
  v6 = Microsoft::WRL::AsWeak<CActionCenterExperienceManager>((__int64)this, v5);
  AgileReference = v6;
  if ( v6 < 0 )
  {
    v7 = (unsigned int)v6;
    v8 = 740LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)v7);
    goto LABEL_22;
  }
  v16[0] = (__int64)this;
  v16[1] = v15;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  wistd::function_void___cdecl_void__::function_void___cdecl_void____lambda_4acf0ee5e37bcf1c6596b10e593f8e28__void_(
    (__int64)v19,
    v16);
  v9 = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription_nothrow<wil::details::empty_wnf_state>(
                                               &v14,
                                               (__int64)&WNF_SHEL_SESSION_LOGON_COMPLETE,
                                               (__int64)v19);
  v10 = (Concurrency::details::_RefCounter **)((char *)this + 424);
  v11 = v9;
  if ( v10 != v9 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      v10,
      *v9);
    *v11 = 0LL;
  }
  if ( v14 )
    Concurrency::details::_RefCounter::_Destroy(v14);
  wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v19);
  if ( !*v10 )
  {
    AgileReference = -2147467259;
    v8 = 748LL;
    v7 = 2147500037LL;
    goto LABEL_20;
  }
  AgileReference = 0;
LABEL_22:
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  return (unsigned int)AgileReference;
}
