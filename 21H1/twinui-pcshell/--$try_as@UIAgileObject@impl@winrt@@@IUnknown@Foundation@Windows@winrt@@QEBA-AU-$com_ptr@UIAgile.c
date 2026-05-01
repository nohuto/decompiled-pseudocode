/*
 * XREFs of ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x180189F48
 * Callers:
 *     ??$call@AEAV_lambda_1901c9f891705b2d33e723e5fa102f44_@@@?$factory_cache_entry@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@UIWindowTabDataModelStatics@23456@@impl@winrt@@QEAA?AU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@2@AEAV_lambda_1901c9f891705b2d33e723e5fa102f44_@@@Z @ 0x1800B29D4 (--$call@AEAV_lambda_1901c9f891705b2d33e723e5fa102f44_@@@-$factory_cache_entry@UWindowTabDataMode.c)
 *     ??$call@AEAV_lambda_31f126833dad2da04de7641ee9fe3453_@@@?$factory_cache_entry@UTileStore@Tiles@Internal@Windows@winrt@@UITileStoreFactory@2345@@impl@winrt@@QEAA?AUTileStore@Tiles@Internal@Windows@2@AEAV_lambda_31f126833dad2da04de7641ee9fe3453_@@@Z @ 0x1800B2B50 (--$call@AEAV_lambda_31f126833dad2da04de7641ee9fe3453_@@@-$factory_cache_entry@UTileStore@Tiles@I.c)
 *     winrt::impl::factory_cache_entry_winrt::Windows::Internal::UI::Shell::WindowTabBroker_winrt::Windows::Internal::UI::Shell::IWindowTabBrokerStatics_::call__lambda_c4edbeba96dcef3322467452933ed6cc__&_ @ 0x1800B2CD4 (winrt--impl--factory_cache_entry_winrt--Windows--Internal--UI--Shell--WindowTabBroker_winrt--Win.c)
 *     ??$call@AEAV_lambda_ed1a0a1124bc0bd6e2829c576bea0b94_@@@?$factory_cache_entry@UWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@winrt@@UIWindowTabsChangedEventArgsFactory@23456@@impl@winrt@@QEAA?AUWindowTabsChangedEventArgs@Shell@UI@Internal@Windows@2@AEAV_lambda_ed1a0a1124bc0bd6e2829c576bea0b94_@@@Z @ 0x1800B2E0C (--$call@AEAV_lambda_ed1a0a1124bc0bd6e2829c576bea0b94_@@@-$factory_cache_entry@UWindowTabsChanged.c)
 *     ??$make_agile_delegate@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@1@AEBU2341@@Z @ 0x1800B3768 (--$make_agile_delegate@U-$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(
        void (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        _QWORD *a2)
{
  void (__fastcall ***v2)(_QWORD, __int64 *, __int64 *); // rcx
  void (__fastcall **v4)(_QWORD, __int64 *, __int64 *); // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v4 = *v2;
    v6 = 0LL;
    (*v4)(v2, &winrt::impl::guid_storage<winrt::impl::IAgileObject>::value, &v6);
    *a2 = v6;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
