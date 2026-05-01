/*
 * XREFs of ?IgnoreCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1803E169C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800D8810 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 *     ?StopActivity@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@MEAAXXZ @ 0x1800DAE40 (-StopActivity@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@WindowTabHostThumbnailRequested@WindowTabHostTelemetry@@MEAAXXZ @ 0x1800DB060 (-StopActivity@WindowTabHostThumbnailRequested@WindowTabHostTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180029718 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(
        __int64 a1)
{
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
