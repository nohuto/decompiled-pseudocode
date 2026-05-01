/*
 * XREFs of ?Stop@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAXJ@Z @ 0x1800C8934
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800C6310 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::Stop(
        WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested *this,
        int a2)
{
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    this,
    a2);
}
