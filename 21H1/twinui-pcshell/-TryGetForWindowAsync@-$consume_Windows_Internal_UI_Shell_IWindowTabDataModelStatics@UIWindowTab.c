/*
 * XREFs of ?TryGetForWindowAsync@?$consume_Windows_Internal_UI_Shell_IWindowTabDataModelStatics@UIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@3@IAEBUUser@System@63@@Z @ 0x1800B9A34
 * Callers:
 *     ??$?RAEBUIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@_lambda_1901c9f891705b2d33e723e5fa102f44_@@QEBA?AU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@AEBUIWindowTabDataModelStatics@Shell@UI@Internal@34@@Z @ 0x1800B0FBC (--$-RAEBUIWindowTabDataModelStatics@Shell@UI@Internal@Windows@winrt@@@_lambda_1901c9f891705b2d33.c)
 *     ??$call@AEAV_lambda_1901c9f891705b2d33e723e5fa102f44_@@@?$factory_cache_entry@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@UIWindowTabDataModelStatics@23456@@impl@winrt@@QEAA?AU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@2@AEAV_lambda_1901c9f891705b2d33e723e5fa102f44_@@@Z @ 0x1800B29D4 (--$call@AEAV_lambda_1901c9f891705b2d33e723e5fa102f44_@@@-$factory_cache_entry@UWindowTabDataMode.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180094AE0 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabDataModelStatics<winrt::Windows::Internal::UI::Shell::IWindowTabDataModelStatics>::TryGetForWindowAsync(
        __int64 *a1,
        _QWORD *a2,
        unsigned int a3,
        _QWORD *a4)
{
  __int64 v4; // rcx
  unsigned int v6; // eax
  _QWORD *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v4 = *a1;
  v8 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD **))(*(_QWORD *)v4 + 48LL))(v4, a3, *a4, &v8);
  winrt::check_hresult(v6);
  *a2 = v8;
  return a2;
}
