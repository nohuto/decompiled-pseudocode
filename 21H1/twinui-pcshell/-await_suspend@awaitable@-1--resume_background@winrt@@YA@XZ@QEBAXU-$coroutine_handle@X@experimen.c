/*
 * XREFs of ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180442460
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$2 @ 0x1800AE890 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1800AE890.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_ResumeCoro$2 @ 0x1800C35A0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetAndCreateIconFr_ea_1800C35A0.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$2 @ 0x1800C45A0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_ResumeCoro$.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800C6310 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 * Callees:
 *     WINRT_TrySubmitThreadpoolCallback @ 0x180091935 (WINRT_TrySubmitThreadpoolCallback.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1801C8434 (-throw_last_error@winrt@@YAXXZ.c)
 */

BOOL __fastcall `winrt::resume_background'::`2'::awaitable::await_suspend(__int64 a1, void *a2)
{
  BOOL result; // eax
  winrt *v3; // rcx

  result = WINRT_TrySubmitThreadpoolCallback(
             (PTP_SIMPLE_CALLBACK)`winrt::resume_after'::`2'::awaitable::callback,
             a2,
             0LL);
  if ( !result )
    winrt::throw_last_error(v3);
  return result;
}
