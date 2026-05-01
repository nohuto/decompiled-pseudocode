/*
 * XREFs of ??1SearchAppExperienceManager@@UEAA@XZ @ 0x1801F586C
 * Callers:
 *     ??_ESearchAppExperienceManager@@UEAAPEAXI@Z @ 0x1801F5B80 (--_ESearchAppExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180065630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_UntrackMouseMovement@SearchAppExperienceManager@@AEAAXXZ @ 0x1800995F4 (-_UntrackMouseMovement@SearchAppExperienceManager@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsDynamicSearchBox@@@details@wil@@QEAA_NXZ @ 0x180099684 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsDynamicSearchBox@@@details@w.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180138390 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$D.c)
 */

void __fastcall SearchAppExperienceManager::~SearchAppExperienceManager(SearchAppExperienceManager *this)
{
  __int64 v2; // rcx
  volatile int *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx

  *(_QWORD *)this = &SearchAppExperienceManager::`vftable'{for `Windows::Internal::Shell::Experience::ICortanaExperienceManager'};
  *((_QWORD *)this + 1) = &SearchAppExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>'};
  *((_QWORD *)this + 2) = &SearchAppExperienceManager::`vftable'{for `Windows::Foundation::IClosable'};
  *((_QWORD *)this + 3) = &SearchAppExperienceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInitializeTrustedComponentForegroundControl>'};
  if ( *((_QWORD *)this + 65) )
  {
    *((_QWORD *)this + 65) = 0LL;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 64) + 160LL))(*((_QWORD *)this + 64));
  }
  if ( *((_QWORD *)this + 66) )
  {
    *((_QWORD *)this + 66) = 0LL;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 64) + 176LL))(*((_QWORD *)this + 64));
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsDynamicSearchBox>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_FeedsDynamicSearchBox>::GetImpl'::`2'::impl) )
    SearchAppExperienceManager::_UntrackMouseMovement((struct _TP_TIMER **)this);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>>((struct _TP_TIMER **)this + 76);
  v2 = *((_QWORD *)this + 64);
  if ( v2 )
  {
    *((_QWORD *)this + 64) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 63);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 62);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 61);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>>((struct _TP_TIMER **)this + 60);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>>((struct _TP_TIMER **)this + 58);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 54);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 53);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 52);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 51);
  v4 = *((_QWORD *)this + 48);
  if ( v4 )
  {
    *((_QWORD *)this + 48) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4, v3);
  }
  v5 = *((_QWORD *)this + 45);
  if ( v5 )
  {
    *((_QWORD *)this + 45) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5, v3);
  }
  v6 = *((_QWORD *)this + 42);
  if ( v6 )
  {
    *((_QWORD *)this + 42) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6, v3);
  }
  v7 = *((_QWORD *)this + 39);
  if ( v7 )
  {
    *((_QWORD *)this + 39) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7, v3);
  }
  v8 = *((_QWORD *)this + 36);
  if ( v8 )
  {
    *((_QWORD *)this + 36) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v8, v3);
  }
  v9 = *((_QWORD *)this + 33);
  if ( v9 )
  {
    *((_QWORD *)this + 33) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v9, v3);
  }
  v10 = *((_QWORD *)this + 30);
  if ( v10 )
  {
    *((_QWORD *)this + 30) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v10, v3);
  }
  v11 = *((_QWORD *)this + 27);
  if ( v11 )
  {
    *((_QWORD *)this + 27) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v11, v3);
  }
  v12 = *((_QWORD *)this + 24);
  if ( v12 )
  {
    *((_QWORD *)this + 24) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v12, v3);
  }
  v13 = *((_QWORD *)this + 21);
  if ( v13 )
  {
    *((_QWORD *)this + 21) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v13, v3);
  }
  v14 = *((_QWORD *)this + 18);
  if ( v14 )
  {
    *((_QWORD *)this + 18) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v14, v3);
  }
  v15 = *((_QWORD *)this + 15);
  if ( v15 )
  {
    *((_QWORD *)this + 15) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v15, v3);
  }
  v16 = *((_QWORD *)this + 12);
  if ( v16 )
  {
    *((_QWORD *)this + 12) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v16, v3);
  }
  v17 = *((_QWORD *)this + 9);
  if ( v17 )
  {
    *((_QWORD *)this + 9) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v17, v3);
  }
  v18 = *((_QWORD *)this + 6);
  if ( v18 )
  {
    *((_QWORD *)this + 6) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v18, v3);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>(
    (__int64)this,
    v3);
}
