/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2_::_1_::dtor$2 @ 0x1800C83E6
 * Callers:
 *     <none>
 * Callees:
 *     ??1WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAA@XZ @ 0x1800C1680 (--1WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync__ResumeCoro_2_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 2168) = *(_QWORD *)(a2 + 2304) + 352LL;
  WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::~WindowTabHostLivePreviewThumbnailRequested(*(WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested **)(a2 + 2168));
}
