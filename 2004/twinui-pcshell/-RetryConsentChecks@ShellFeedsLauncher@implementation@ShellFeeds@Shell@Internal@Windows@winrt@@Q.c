/*
 * XREFs of ?RetryConsentChecks@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@7@XZ @ 0x1800DE33C
 * Callers:
 *     ?perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1800DF240 (-perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Wind.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008DA5C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_InitCoro$1 @ 0x1800DCE30 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--RetryConsentChe.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks(
        __int64 a1,
        _BYTE *a2)
{
  _QWORD *v4; // rax
  int v6; // [rsp+1E8h] [rbp+10h] BYREF

  v4 = operator new(0x1B0uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks__InitCoro_1(
    &v6,
    v4,
    a2,
    a1);
  return a2;
}
