/*
 * XREFs of ?await_ready@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEBA_NXZ @ 0x180465FF8
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$2 @ 0x1800BD260 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800BD260.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$2 @ 0x1800C8720 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_1800C8720.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2 @ 0x1800DCFA0 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1800DCFA0.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_ResumeCoro$2 @ 0x1800DE510 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1800DE510.c)
 * Callees:
 *     <none>
 */

bool __fastcall `winrt::resume_after'::`2'::awaitable::await_ready(__int64 a1)
{
  return *(_QWORD *)(a1 + 8) <= 0LL;
}
