/*
 * XREFs of ??$Start@AEAIAEAI@WindowTabHostThumbnailRequested@WindowTabHostTelemetry@@SA?AV01@AEAI0@Z @ 0x1800D48EC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800DA080 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 * Callees:
 *     ?StartActivity@WindowTabHostThumbnailRequested@WindowTabHostTelemetry@@QEAAXII@Z @ 0x1800DC5A8 (-StartActivity@WindowTabHostThumbnailRequested@WindowTabHostTelemetry@@QEAAXII@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803DE664 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRef_ea_1803DE664.c)
 */

WindowTabHostTelemetry::WindowTabHostThumbnailRequested *__fastcall WindowTabHostTelemetry::WindowTabHostThumbnailRequested::Start<unsigned int &,unsigned int &>(
        WindowTabHostTelemetry::WindowTabHostThumbnailRequested *this,
        unsigned int *a2,
        unsigned int *a3)
{
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &WindowTabHostTelemetry::WindowTabHostThumbnailRequested::`vftable';
  WindowTabHostTelemetry::WindowTabHostThumbnailRequested::StartActivity(this, *a2, *a3);
  return this;
}
