/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2_::_1_::dtor$1 @ 0x1800DA8B7
 * Callers:
 *     <none>
 * Callees:
 *     ??1WindowTabHostThumbnailRequested@WindowTabHostTelemetry@@QEAA@XZ @ 0x1800D3BB0 (--1WindowTabHostThumbnailRequested@WindowTabHostTelemetry@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync__ResumeCoro_2_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 2160) = *(_QWORD *)(a2 + 2304) + 32LL;
  WindowTabHostTelemetry::WindowTabHostThumbnailRequested::~WindowTabHostThumbnailRequested(*(WindowTabHostTelemetry::WindowTabHostThumbnailRequested **)(a2 + 2160));
}
