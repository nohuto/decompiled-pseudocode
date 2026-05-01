/*
 * XREFs of ?Initialize@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1800CFD9C
 * Callers:
 *     ??0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800C6FF8 (--0WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066AE0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0TileStore@Tiles@Internal@Windows@winrt@@QEAA@AEBUUser@System@34@@Z @ 0x1800C6FC8 (--0TileStore@Tiles@Internal@Windows@winrt@@QEAA@AEBUUser@System@34@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800C7678 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEAA_NXZ @ 0x1800CD828 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WthTaskbarTabs@@@details@wil@@QEA.c)
 *     ?RegisterClass@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@SAGXZ @ 0x1800D5540 (-RegisterClass@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@SAGXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18013C9FC (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x180141E7C (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019BD18 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x18044B5A8 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 */

// Hidden C++ exception states: #wind=11 #try_helpers=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::Initialize(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory *this)
{
  winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory *v1; // rdi
  const char *v2; // r9
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rcx
  HRESULT Instance; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rcx
  HRESULT v11; // eax
  wil::details::in1diag3 *v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  winrt::Windows::Internal::Tiles::TileStore *v15; // rax
  HANDLE Thread; // rax
  const char *v17; // r9
  wil::details::in1diag3 *v18; // rcx
  __int64 v20; // rdx
  const char *v21; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory *v24; // [rsp+58h] [rbp+10h] BYREF
  __int64 v25; // [rsp+60h] [rbp+18h] BYREF
  __int64 v26; // [rsp+68h] [rbp+20h] BYREF

  v1 = this;
  if ( !winrt::Windows::Internal::Shell::implementation::TabProxyWindow::RegisterClass() )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x12,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
      v2);
    goto LABEL_18;
  }
  v3 = wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
         (char *)v1 + 40,
         1LL);
  v4 = retaddr;
  if ( v3 < 0 )
  {
LABEL_18:
    wil::details::in1diag3::Throw_Hr(
      v4,
      20LL,
      (__int64)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_19;
  }
  v5 = wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
         (char *)v1 + 32,
         1LL);
  v6 = retaddr;
  if ( v5 < 0 )
  {
LABEL_19:
    wil::details::in1diag3::Throw_Hr(
      v6,
      21LL,
      (__int64)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
      (const char *)(unsigned int)v5);
LABEL_20:
    wil::details::in1diag3::Throw_Hr(
      v9,
      24LL,
      (__int64)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
      (const char *)(unsigned int)Instance);
LABEL_21:
    wil::details::in1diag3::Throw_Hr(
      v12,
      31LL,
      (__int64)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_22;
  }
  v7 = *((_QWORD *)v1 + 7);
  *((_QWORD *)v1 + 7) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  Instance = CoCreateInstance(
               &CLSID_WICImagingFactory2,
               0LL,
               1u,
               &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70,
               (LPVOID *)v1 + 7);
  v9 = retaddr;
  if ( Instance < 0 )
    goto LABEL_20;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_WthTaskbarTabs>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_WthTaskbarTabs>::GetImpl'::`2'::impl) )
    goto LABEL_13;
  v10 = *((_QWORD *)v1 + 8);
  *((_QWORD *)v1 + 8) = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = CoCreateInstance(&CLSID_TaskbarList, 0LL, 1u, &GUID_c43dc798_95d1_4bea_9030_bb99e2983a1a, (LPVOID *)v1 + 8);
  v12 = retaddr;
  if ( v11 < 0 )
    goto LABEL_21;
  v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v1 + 8) + 24LL))(*((_QWORD *)v1 + 8));
  v14 = retaddr;
  if ( v13 < 0 )
  {
LABEL_22:
    wil::details::in1diag3::Throw_Hr(
      v14,
      32LL,
      (__int64)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_23;
  }
  while ( 1 )
  {
    v25 = 0LL;
    v15 = winrt::Windows::Internal::Tiles::TileStore::TileStore(
            (winrt::Windows::Internal::Tiles::TileStore *)&v26,
            (const struct winrt::Windows::System::User *)&v25);
    winrt::Windows::Foundation::IUnknown::operator=((char *)v1 + 72, v15);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v26);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v25);
LABEL_13:
    v24 = 0LL;
    if ( v1 )
    {
      v24 = v1;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
    }
    Thread = CreateThread(
               0LL,
               0LL,
               (LPTHREAD_START_ROUTINE)lambda_78c4d568eef31da123ac7a5ea8376aa4_::_lambda_invoker_cdecl_,
               v1,
               0,
               0LL);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (char *)v1 + 24,
      Thread);
    v18 = retaddr;
    if ( *((_QWORD *)v1 + 3) )
      break;
LABEL_23:
    wil::details::in1diag3::_Throw_GetLastError(
      v18,
      (void *)0x3E,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
      v17);
    __debugbreak();
    wil::details::in1diag3::Log_CaughtException(
      *(wil::details::in1diag3 **)(v20 + 72),
      (void *)0x22,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
      v21);
    v1 = this;
  }
  v24 = 0LL;
  return 0LL;
}
