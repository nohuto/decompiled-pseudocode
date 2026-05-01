/*
 * XREFs of _anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog @ 0x1801EB518
 * Callers:
 *     _anonymous_namespace_::GetScreenClippingAUMID @ 0x1801E8BB8 (_anonymous_namespace_--GetScreenClippingAUMID.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D4A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066AE0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008C628 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     ??$wait_get@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUhstring@1@AEBU?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@1@@Z @ 0x18009679C (--$wait_get@U-$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA-AUhstr.c)
 *     ??$call@AEAV_lambda_3174d6f28dd4ff66a1abe0cc6653db52_@@@?$factory_cache_entry@UAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionCatalogStatics@2345@@impl@winrt@@QEAA?AUAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@2@AEAV_lambda_3174d6f28dd4ff66a1abe0cc6653db52_@@@Z @ 0x1801E76A0 (--$call@AEAV_lambda_3174d6f28dd4ff66a1abe0cc6653db52_@@@-$factory_cache_entry@UAppExtensionCatal.c)
 *     ??$try_get_activation_factory@UAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIActivationFactory@Foundation@Windows@5@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@PEAUhresult_error@1@@Z @ 0x1801E7940 (--$try_get_activation_factory@UAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@win.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1801E7F70 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?Symbols@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1801E88E8 (-Symbols@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatic.c)
 */

// Hidden C++ exception states: #wind=4
HSTRING *__fastcall anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog(HSTRING *a1, ULONGLONG *a2)
{
  bool v4; // bl
  void (*v5)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v6; // rcx
  __int64 *v7; // rax
  HSTRING v8; // rbx
  WINBOOL fPending[2]; // [rsp+30h] [rbp-19h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR *v12; // [rsp+40h] [rbp-9h] BYREF
  int v13; // [rsp+48h] [rbp-1h]
  HSTRING *v14; // [rsp+50h] [rbp+7h]
  ULONGLONG *v15; // [rsp+58h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+60h] [rbp+17h] BYREF

  v14 = a1;
  v15 = a2;
  *a1 = 0LL;
  v13 = 1;
  v12 = 0LL;
  winrt::impl::try_get_activation_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::Windows::Foundation::IActivationFactory>(fPending);
  v4 = winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))fPending, &v12) == 0;
  if ( *(_QWORD *)fPending )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)fPending);
  if ( v4 )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
      && fPending[0] )
    {
      Context = qword_1805CD278;
      qword_1805CD278[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805CD290 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD278, qword_1805CD290, v5);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805CD278);
    }
    v6 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v6 > 5u )
      tlgWriteTransfer_EventWriteTransfer((__int64)v6, (unsigned __int8 *)dword_18050500E, 0LL, 0LL, 2u, &v16);
    v16.Ptr = *a2;
    v12 = &v16;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>::call<_lambda_3174d6f28dd4ff66a1abe0cc6653db52_ &>(
      (__int64)v6,
      (__int64)&Context,
      &v12);
    v13 = 7;
    v7 = winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Symbols(
           (__int64 *)&Context,
           &v12);
    winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<winrt::hstring>>((__int64)fPending, v7);
    if ( a1 != (HSTRING *)fPending )
    {
      v8 = *(HSTRING *)fPending;
      *(_QWORD *)fPending = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
      *a1 = v8;
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)fPending);
    if ( v12 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)&v12);
    if ( Context )
      winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)&Context);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)a2);
  return a1;
}
