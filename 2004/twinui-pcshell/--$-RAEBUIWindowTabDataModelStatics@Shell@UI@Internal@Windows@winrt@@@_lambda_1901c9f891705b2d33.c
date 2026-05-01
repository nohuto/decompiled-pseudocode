/*
 * XREFs of ??$?RAEBUIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@_lambda_1901c9f891705b2d33e723e5fa102f44_@@QEBA?AU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@AEBUIWindowTabDataModelStatics@Shell@UI@Internal@34@@Z @ 0x1800C3D9C
 * Callers:
 *     ??$call@AEAV_lambda_1901c9f891705b2d33e723e5fa102f44_@@@?$factory_cache_entry@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@UIWindowTabDataModelStatics@23456@@impl@winrt@@QEAA?AU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@2@AEAV_lambda_1901c9f891705b2d33e723e5fa102f44_@@@Z @ 0x1800C57B4 (--$call@AEAV_lambda_1901c9f891705b2d33e723e5fa102f44_@@@-$factory_cache_entry@UWindowTabDataMode.c)
 * Callees:
 *     ?TryGetForWindowAsync@?$consume_Windows_Internal_UI_Shell_IWindowTabDataModelStatics@UIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@3@IAEBUUser@System@63@@Z @ 0x1800CBFB4 (-TryGetForWindowAsync@-$consume_Windows_Internal_UI_Shell_IWindowTabDataModelStatics@UIWindowTab.c)
 */

__int64 __fastcall _lambda_1901c9f891705b2d33e723e5fa102f44_::operator()<winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics const &>(
        unsigned int **a1,
        __int64 a2)
{
  winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabDataModelStatics<winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics>::TryGetForWindowAsync(
    &`winrt::impl::call_factory<winrt::Windows::Internal::UI::Shell::WindowTabDataModel,winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics,_lambda_1901c9f891705b2d33e723e5fa102f44_>'::`2'::factory,
    a2,
    **a1,
    a1[1]);
  return a2;
}
