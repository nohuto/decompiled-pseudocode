/*
 * XREFs of ??$?0V_lambda_be8a6f579aab40e35446f4addbd39028_@@@NetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt@@QEAA@V_lambda_be8a6f579aab40e35446f4addbd39028_@@@Z @ 0x1800DBC94
 * Callers:
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2 @ 0x1800DCFA0 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1800DCFA0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008DA5C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v5; // [rsp+30h] [rbp+8h]

  v5 = operator new(0x18uLL);
  v5[1] = a2;
  *((_DWORD *)v5 + 4) = 1;
  *v5 = &winrt::impl::delegate<winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler,_lambda_3ef85c4d1ebd821e1b68fbafce108a81_>::`vftable';
  *a1 = v5;
  return a1;
}
