/*
 * XREFs of ?NetworkStatusChanged@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@AEBUNetworkStatusChangedEventHandler@2345@@Z @ 0x1800DC9A0
 * Callers:
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2 @ 0x1800DCFA0 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1800DCFA0.c)
 * Callees:
 *     ??$call@AEAV_lambda_079b32de1bcc0433bc32547eed68dcb6_@@@?$factory_cache_entry@UNetworkInformation@Connectivity@Networking@Windows@winrt@@UINetworkInformationStatics@2345@@impl@winrt@@QEAA?AUevent_token@2@AEAV_lambda_079b32de1bcc0433bc32547eed68dcb6_@@@Z @ 0x1800DBE40 (--$call@AEAV_lambda_079b32de1bcc0433bc32547eed68dcb6_@@@-$factory_cache_entry@UNetworkInformatio.c)
 */

__int64 __fastcall winrt::Windows::Networking::Connectivity::NetworkInformation::NetworkStatusChanged(
        const struct winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler *a1)
{
  const struct winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler *v2; // [rsp+30h] [rbp+8h] BYREF
  char v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  return *(_QWORD *)winrt::impl::factory_cache_entry<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::call<_lambda_079b32de1bcc0433bc32547eed68dcb6_ &>(
                      (__int64)a1,
                      (__int64)&v3,
                      &v2);
}
