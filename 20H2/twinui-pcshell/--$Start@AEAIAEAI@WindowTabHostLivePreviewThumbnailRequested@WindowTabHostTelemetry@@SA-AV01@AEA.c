/*
 * XREFs of ??$Start@AEAIAEAI@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@SA?AV01@AEAI0@Z @ 0x1800D4894
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800DA080 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 * Callees:
 *     ?StartActivity@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAXII@Z @ 0x1800DC4AC (-StartActivity@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAXII@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803DE664 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRef_ea_1803DE664.c)
 */

WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested *__fastcall WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::Start<unsigned int &,unsigned int &>(
        WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested *this,
        unsigned int *a2,
        unsigned int *a3)
{
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::`vftable';
  WindowTabHostTelemetry::WindowTabHostLivePreviewThumbnailRequested::StartActivity(this, *a2, *a3);
  return this;
}
