/*
 * XREFs of winrt::impl::factory_cache_entry_winrt::Windows::Internal::UI::Shell::WindowTabBroker_winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics_::call__lambda_c4edbeba96dcef3322467452933ed6cc__&_ @ 0x1800C5AB4
 * Callers:
 *     ?subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800CEAB0 (-subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066AE0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800671A0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x18009227D (WINRT_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIWindowTabBrokerStatics@Shell@UI@Internal@Windows@winrt@@@winrt@@YA?AUIWindowTabBrokerStatics@Shell@UI@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x1800C62BC (--$get_activation_factory@UIWindowTabBrokerStatics@Shell@UI@Internal@Windows@winrt@@@winrt@@YA-A.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800C7678 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??0CMarshaledInterface@@QEAA@AEBV0@@Z @ 0x180167600 (--0CMarshaledInterface@@QEAA@AEBV0@@Z.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x1801ADE38 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

CMarshaledInterface *__fastcall winrt::impl::factory_cache_entry_winrt::Windows::Internal::UI::Shell::WindowTabBroker_winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics_::call__lambda_c4edbeba96dcef3322467452933ed6cc____(
        __int64 a1,
        CMarshaledInterface *a2)
{
  __int64 v3; // rdi
  signed __int64 v5; // [rsp+20h] [rbp-50h] BYREF
  CMarshaledInterface *v6; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING string[4]; // [rsp+40h] [rbp-30h] BYREF

  v6 = a2;
  _InterlockedIncrement64(&qword_1805CCF48);
  if ( `winrt::impl::call_factory<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics,_lambda_c4edbeba96dcef3322467452933ed6cc_>'::`2'::factory )
  {
    CMarshaledInterface::CMarshaledInterface(
      a2,
      (const struct CMarshaledInterface *)&`winrt::impl::call_factory<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics,_lambda_c4edbeba96dcef3322467452933ed6cc_>'::`2'::factory);
    _InterlockedDecrement64(&qword_1805CCF48);
  }
  else
  {
    _InterlockedDecrement64(&qword_1805CCF48);
    v7[0] = L"Windows.Internal.UI.Shell.WindowTabBroker";
    v7[1] = 41LL;
    winrt::param::hstring::hstring(string, (__int64)v7);
    winrt::get_activation_factory<winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics>(&v5, string);
    v3 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v5, &v6);
    if ( v6 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)&v6);
    if ( v3 )
    {
      _InterlockedIncrement64(&qword_1805CCF48);
      if ( !_InterlockedCompareExchange64(
              (volatile signed __int64 *)&`winrt::impl::call_factory<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics,_lambda_c4edbeba96dcef3322467452933ed6cc_>'::`2'::factory,
              v5,
              0LL) )
      {
        v5 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1805CCF50);
      }
      CMarshaledInterface::CMarshaledInterface(
        a2,
        (const struct CMarshaledInterface *)&`winrt::impl::call_factory<winrt::Windows::Internal::UI::Shell::WindowTabBroker,winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics,_lambda_c4edbeba96dcef3322467452933ed6cc_>'::`2'::factory);
      _InterlockedDecrement64(&qword_1805CCF48);
    }
    else
    {
      CMarshaledInterface::CMarshaledInterface(a2, (const struct CMarshaledInterface *)&v5);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v5);
  }
  return a2;
}
