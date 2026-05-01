/*
 * XREFs of ??$call@AEAV_lambda_079b32de1bcc0433bc32547eed68dcb6_@@@?$factory_cache_entry@UNetworkInformation@Connectivity@Networking@Windows@winrt@@UINetworkInformationStatics@2345@@impl@winrt@@QEAA?AUevent_token@2@AEAV_lambda_079b32de1bcc0433bc32547eed68dcb6_@@@Z @ 0x1800DD7D0
 * Callers:
 *     ?NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@AEBUNetworkStatusChangedEventHandler@2345@@Z @ 0x1800DE150 (-NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@AEBUNetworkSt.c)
 *     ?perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1800E0920 (-perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Wind.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18003E394 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180060B80 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x180091E7D (WINRT_InterlockedPushEntrySList.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800C9158 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$get_activation_factory@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@winrt@@YA?AUINetworkInformationStatics@Connectivity@Networking@Windows@0@AEBUhstring@param@0@@Z @ 0x1800DDB58 (--$get_activation_factory@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@wi.c)
 *     ?NetworkStatusChanged@?$consume_Windows_Networking_Connectivity_INetworkInformationStatics@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA?AUevent_token@3@AEBUNetworkStatusChangedEventHandler@Connectivity@Networking@Windows@3@@Z @ 0x1800DE0F4 (-NetworkStatusChanged@-$consume_Windows_Networking_Connectivity_INetworkInformationStatics@UINet.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x1801ADA08 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::call<_lambda_079b32de1bcc0433bc32547eed68dcb6_ &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rsi
  __int64 v7; // [rsp+20h] [rbp-60h] BYREF
  __int64 v8; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v9[4]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string[4]; // [rsp+50h] [rbp-30h] BYREF

  v9[2] = &qword_1805CC838;
  _InterlockedIncrement64(&qword_1805CC838);
  if ( `winrt::impl::call_factory<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics,_lambda_079b32de1bcc0433bc32547eed68dcb6_>'::`2'::factory )
  {
    winrt::impl::consume_Windows_Networking_Connectivity_INetworkInformationStatics<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::NetworkStatusChanged(
      &`winrt::impl::call_factory<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics,_lambda_079b32de1bcc0433bc32547eed68dcb6_>'::`2'::factory,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_1805CC838);
  }
  else
  {
    _InterlockedDecrement64(&qword_1805CC838);
    v9[0] = L"Windows.Networking.Connectivity.NetworkInformation";
    v9[1] = 50LL;
    winrt::param::hstring::hstring(string, (__int64)v9);
    winrt::get_activation_factory<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>(&v7, string);
    v5 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v7, &v8);
    if ( v8 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v8);
    if ( v5 )
    {
      v9[3] = &qword_1805CC838;
      _InterlockedIncrement64(&qword_1805CC838);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics,_lambda_079b32de1bcc0433bc32547eed68dcb6_>'::`2'::factory,
              v7,
              0LL) )
      {
        v7 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1805CC840);
      }
      winrt::impl::consume_Windows_Networking_Connectivity_INetworkInformationStatics<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::NetworkStatusChanged(
        &`winrt::impl::call_factory<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics,_lambda_079b32de1bcc0433bc32547eed68dcb6_>'::`2'::factory,
        a2,
        *a3);
      _InterlockedDecrement64(&qword_1805CC838);
    }
    else
    {
      winrt::impl::consume_Windows_Networking_Connectivity_INetworkInformationStatics<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::NetworkStatusChanged(
        &v7,
        a2,
        *a3);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v7);
  }
  return a2;
}
