/*
 * XREFs of ??$call@AEAV_lambda_1901c9f891705b2d33e723e5fa102f44_@@@?$factory_cache_entry@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@UIWindowTabDataModelStatics@23456@@impl@winrt@@QEAA?AU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@2@AEAV_lambda_1901c9f891705b2d33e723e5fa102f44_@@@Z @ 0x1800C7294
 * Callers:
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x1800CDCC8 (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18003E394 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180060B80 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x180091E7D (WINRT_InterlockedPushEntrySList.c)
 *     ??$?RAEBUIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@_lambda_1901c9f891705b2d33e723e5fa102f44_@@QEBA?AU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@AEBUIWindowTabDataModelStatics@Shell@UI@Internal@34@@Z @ 0x1800C587C (--$-RAEBUIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@_lambda_1901c9f891705b2d33.c)
 *     ??$get_activation_factory@UIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@winrt@@YA?AUIWindowTabDataModelStatics@Shell@UI@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x1800C7E14 (--$get_activation_factory@UIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@winrt@@Y.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800C9158 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?TryGetForWindowAsync@?$consume_Windows_Internal_UI_Shell_IWindowTabDataModelStatics@UIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@3@IAEBUUser@System@63@@Z @ 0x1800CDA94 (-TryGetForWindowAsync@-$consume_Windows_Internal_UI_Shell_IWindowTabDataModelStatics@UIWindowTab.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x1801ADA08 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics>::call<_lambda_1901c9f891705b2d33e723e5fa102f44_ &>(
        __int64 a1,
        __int64 a2,
        unsigned int **a3)
{
  __int64 v5; // rsi
  signed __int64 v7; // [rsp+20h] [rbp-60h] BYREF
  __int64 v8; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v9[4]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string[4]; // [rsp+50h] [rbp-30h] BYREF

  v8 = a2;
  v9[2] = &qword_1805CC7F8;
  _InterlockedIncrement64(&qword_1805CC7F8);
  if ( `winrt::impl::call_factory<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics,_lambda_1901c9f891705b2d33e723e5fa102f44_>'::`2'::factory )
  {
    _lambda_1901c9f891705b2d33e723e5fa102f44_::operator()<winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics const &>(
      a3,
      a2);
    _InterlockedDecrement64(&qword_1805CC7F8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1805CC7F8);
    v9[0] = L"Windows.Internal.UI.Shell.WindowTabDataModel";
    v9[1] = 44LL;
    winrt::param::hstring::hstring(string, (__int64)v9);
    winrt::get_activation_factory<winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics>(&v7, string);
    v5 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v7, &v8);
    if ( v8 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v8);
    if ( v5 )
    {
      v9[3] = &qword_1805CC7F8;
      _InterlockedIncrement64(&qword_1805CC7F8);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics,_lambda_1901c9f891705b2d33e723e5fa102f44_>'::`2'::factory,
              v7,
              0LL) )
      {
        v7 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1805CC800);
      }
      _lambda_1901c9f891705b2d33e723e5fa102f44_::operator()<winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics const &>(
        a3,
        a2);
      _InterlockedDecrement64(&qword_1805CC7F8);
    }
    else
    {
      winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabDataModelStatics<winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics>::TryGetForWindowAsync(
        &v7,
        a2,
        **a3,
        a3[1]);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v7);
  }
  return a2;
}
