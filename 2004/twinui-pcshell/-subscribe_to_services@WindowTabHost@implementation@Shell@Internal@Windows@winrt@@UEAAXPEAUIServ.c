/*
 * XREFs of ?subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800CEAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066AE0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088F6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180095E84 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$?0UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXAEBUITileStore@Tiles@345@AEBUITileStoreChangedEventArgs@7345@@Z@?$TypedEventHandler@UTileStore@Tiles@Internal@Windows@winrt@@UTileStoreChangedEventArgs@2345@@Foundation@Windows@winrt@@QEAA@PEAUWindowTabHost@implementation@Shell@Internal@23@P8456723@EAAXAEBUITileStore@Tiles@723@AEBUITileStoreChangedEventArgs@9723@@Z@Z @ 0x1800C3BD8 (--$-0UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXAEBUITileStore@Til.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@Z @ 0x1800C4030 (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@E.c)
 *     ??$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@SmartCookie@@QEAAJPEAUIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@Z @ 0x1800C4104 (--$Register@UIImmersiveSettingsCache@@P81@EAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@ZP81.c)
 *     ??$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@SmartCookie@@QEAAJPEAUIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAUWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@Z @ 0x1800C4200 (--$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@Z.c)
 *     winrt::impl::factory_cache_entry_winrt::Windows::Internal::UI::Shell::WindowTabBroker_winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics_::call__lambda_c4edbeba96dcef3322467452933ed6cc__&_ @ 0x1800C5AB4 (winrt--impl--factory_cache_entry_winrt--Windows--Internal--UI--Shell--WindowTabBroker_winrt--Win.c)
 *     ??0TileStore@Tiles@Internal@Windows@winrt@@QEAA@AEBUUser@System@34@@Z @ 0x1800C6FC8 (--0TileStore@Tiles@Internal@Windows@winrt@@QEAA@AEBUUser@System@34@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800C7678 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEAA_NXZ @ 0x1800CD828 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEA.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x18044B5A8 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::subscribe_to_services(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // r15
  __int64 *v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v14; // eax
  __int64 v15; // r8
  wil::details::in1diag3 *v16; // rcx
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  wil::details::in1diag3 *v19; // rcx
  winrt::Windows::Internal::Tiles::TileStore *v20; // rax
  _QWORD *v21; // r9
  unsigned int v22; // eax
  HRESULT (__stdcall *v23)(IServiceProvider *, const GUID *const, const IID *const, void **); // r15
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // r8
  wil::details::in1diag3 *v27; // rcx
  int v28; // eax
  wil::details::in1diag3 *v29; // rcx
  HRESULT (__stdcall *v30)(IServiceProvider *, const GUID *const, const IID *const, void **); // r15
  __int64 v31; // rcx
  int v32; // eax
  const char *v33; // r9
  __m128d v34; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v37; // [rsp+70h] [rbp+18h] BYREF
  __int64 v38; // [rsp+78h] [rbp+20h] BYREF

  try
  {
    if ( !*((_DWORD *)this + 62) )
    {
      QueryService = a2->lpVtbl->QueryService;
      v5 = (__int64 *)((char *)this + 112);
      v6 = *((_QWORD *)this + 14);
      *v5 = 0LL;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, __int64 *))QueryService)(
             a2,
             &unk_1804F0CE8,
             &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
             v5);
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          27LL,
          (__int64)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
          (const char *)(unsigned int)v7);
      }
      else
      {
        v9 = SmartCookie::Register<IImmersiveSettingsCache,long (IImmersiveSettingsCache::*)(IImmersiveSettingsCacheNotification *,unsigned long *),long (IImmersiveSettingsCache::*)(unsigned long),winrt::Windows::Internal::Shell::implementation::WindowTabHost *>(
               (__int64)this + 128,
               *v5,
               v8);
        v10 = retaddr;
        if ( v9 >= 0 )
          goto LABEL_7;
      }
      wil::details::in1diag3::Throw_Hr(
        v10,
        32LL,
        (__int64)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_29;
    }
LABEL_7:
    if ( *((_DWORD *)this + 94) )
    {
LABEL_11:
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_WthTaskbarTabs>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_WthTaskbarTabs>::GetImpl'::`2'::impl) )
      {
        if ( !*((_QWORD *)this + 49) )
        {
          v37 = 0LL;
          v20 = winrt::Windows::Internal::Tiles::TileStore::TileStore(
                  (winrt::Windows::Internal::Tiles::TileStore *)&v38,
                  (const struct winrt::Windows::System::User *)&v37);
          winrt::Windows::Foundation::IUnknown::operator=((char *)this + 384, v20);
          winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v38);
          winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v37);
          *(_QWORD *)&v34.m128d_f64[0] = winrt::Windows::Internal::Shell::implementation::WindowTabHost::TileStoreChanged;
          LODWORD(v34.m128d_f64[1]) = 0;
          v21 = winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::TileStoreChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::Tiles::TileStore,winrt::Windows::Internal::Tiles::TileStoreChangedEventArgs>(
                  &v38,
                  (__int64)this - 48,
                  &v34);
          v37 = 0LL;
          v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 48) + 112LL))(
                  *((_QWORD *)this + 48),
                  *v21,
                  &v37);
          winrt::check_hresult(v22);
          *((_QWORD *)this + 49) = v37;
          if ( v38 )
            winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v38);
        }
      }
      if ( *((_DWORD *)this + 136) )
        goto LABEL_23;
      v23 = a2->lpVtbl->QueryService;
      v24 = *((_QWORD *)this + 52);
      *((_QWORD *)this + 52) = 0LL;
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      v25 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v23)(
              a2,
              &SID_VirtualDesktopNotificationService,
              &GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf,
              (char *)this + 416);
      v27 = retaddr;
      if ( v25 >= 0 )
      {
        v28 = SmartCookie::Register<IVirtualDesktopNotificationService,long (IVirtualDesktopNotificationService::*)(IVirtualDesktopNotification *,unsigned long *),long (IVirtualDesktopNotificationService::*)(unsigned long),winrt::Windows::Internal::Shell::implementation::WindowTabHost *>(
                (__int64)this + 424,
                *((_QWORD *)this + 52),
                v26);
        v29 = retaddr;
        if ( v28 >= 0 )
        {
          v30 = a2->lpVtbl->QueryService;
          v31 = *((_QWORD *)this + 51);
          *((_QWORD *)this + 51) = 0LL;
          if ( v31 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          v32 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v30)(
                  a2,
                  &SID_VirtualDesktopManager,
                  &GUID_fe538ff5_d53b_4f5a_9dad_8e72873cb360,
                  (char *)this + 408);
          v19 = retaddr;
          if ( v32 >= 0 )
          {
LABEL_23:
            winrt::impl::factory_cache_entry_winrt::Windows::Internal::UI::Shell::WindowTabBroker_winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics_::call__lambda_c4edbeba96dcef3322467452933ed6cc____(
              (__int64)v19,
              (CMarshaledInterface *)&v37);
            winrt::Windows::Foundation::IUnknown::operator=((char *)this + 96, &v37);
            winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v37);
            *((_BYTE *)this + 785) = 1;
            return;
          }
LABEL_34:
          wil::details::in1diag3::Throw_Hr(
            v19,
            64LL,
            (__int64)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
            (const char *)(unsigned int)v32);
          JUMPOUT(0x1800CEE7ELL);
        }
LABEL_33:
        wil::details::in1diag3::Throw_Hr(
          v29,
          63LL,
          (__int64)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
          (const char *)(unsigned int)v28);
        goto LABEL_34;
      }
LABEL_32:
      wil::details::in1diag3::Throw_Hr(
        v27,
        58LL,
        (__int64)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
        (const char *)(unsigned int)v25);
      goto LABEL_33;
    }
    v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
            a2,
            &IID_IClassicWindowManager,
            &GUID_6c6cbabd_6e36_4f9d_a349_c8852d0e7ee5,
            (char *)this + 104);
    v12 = retaddr;
    if ( v11 >= 0 )
    {
      v13 = a2->lpVtbl->QueryService;
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 15);
      v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v13)(
              a2,
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              (char *)this + 120);
      v16 = retaddr;
      if ( v14 >= 0 )
      {
        v17 = SmartCookie::Register<IApplicationViewCollection,long (IApplicationViewCollection::*)(IApplicationViewChangeListener *,unsigned long *),long (IApplicationViewCollection::*)(unsigned long),winrt::Windows::Internal::Shell::implementation::WindowTabHost *>(
                (__int64)this + 256,
                *((_QWORD *)this + 15),
                v15);
        v18 = retaddr;
        if ( v17 >= 0 )
          goto LABEL_11;
LABEL_31:
        wil::details::in1diag3::Throw_Hr(
          v18,
          43LL,
          (__int64)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
          (const char *)(unsigned int)v17);
        goto LABEL_32;
      }
LABEL_30:
      wil::details::in1diag3::Throw_Hr(
        v16,
        38LL,
        (__int64)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_31;
    }
LABEL_29:
    wil::details::in1diag3::Throw_Hr(
      v12,
      37LL,
      (__int64)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_30;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x46,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
      v33);
    if ( !*((_BYTE *)this + 785) )
      (*(void (__fastcall **)(winrt::Windows::Internal::Shell::implementation::WindowTabHost *, _QWORD))(*(_QWORD *)this + 56LL))(
        this,
        0LL);
  }
}
