/*
 * XREFs of ?Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1801AB194
 * Callers:
 *     ??$WindowTabHostAltTabInvoked@AEAI@WindowTabHostTelemetry@@SAXAEAI@Z @ 0x1800B590C (--$WindowTabHostAltTabInvoked@AEAI@WindowTabHostTelemetry@@SAXAEAI@Z.c)
 *     ?WindowTabHostTabClosedViaAltTab@WindowTabHostTelemetry@@SAXXZ @ 0x1800B6EF8 (-WindowTabHostTabClosedViaAltTab@WindowTabHostTelemetry@@SAXXZ.c)
 *     ?WindowTabHostTabSwitchedToViaAltTab@WindowTabHostTelemetry@@SAXXZ @ 0x1800B6F4C (-WindowTabHostTabSwitchedToViaAltTab@WindowTabHostTelemetry@@SAXXZ.c)
 *     ?WindowTabHostWindowClosedViaAltTab@WindowTabHostTelemetry@@SAXXZ @ 0x1800B6FA0 (-WindowTabHostWindowClosedViaAltTab@WindowTabHostTelemetry@@SAXXZ.c)
 *     ?WindowTabHostWindowSwitchedToViaAltTab@WindowTabHostTelemetry@@SAXXZ @ 0x1800B6FF4 (-WindowTabHostWindowSwitchedToViaAltTab@WindowTabHostTelemetry@@SAXXZ.c)
 *     ??$PPIWin32VtcSideBarError@AEAY0DB@$$CBG@TabletModeTelemetry@@SAXAEAY0DB@$$CBG@Z @ 0x1800B8DF4 (--$PPIWin32VtcSideBarError@AEAY0DB@$$CBG@TabletModeTelemetry@@SAXAEAY0DB@$$CBG@Z.c)
 *     ??$PPIWin32Vtc_SideBarEvicted@I@TabletModeTelemetry@@SAX$$QEAI@Z @ 0x1800B8E64 (--$PPIWin32Vtc_SideBarEvicted@I@TabletModeTelemetry@@SAX$$QEAI@Z.c)
 *     ??$PPIWin32Vtc_SideBarInserted@I@TabletModeTelemetry@@SAX$$QEAI@Z @ 0x1800B8ED4 (--$PPIWin32Vtc_SideBarInserted@I@TabletModeTelemetry@@SAX$$QEAI@Z.c)
 *     ??$PPIWin32Vtc_SideBarSwapped@_N@TabletModeTelemetry@@SAX$$QEA_N@Z @ 0x1800B8F44 (--$PPIWin32Vtc_SideBarSwapped@_N@TabletModeTelemetry@@SAX$$QEA_N@Z.c)
 *     ?PPIWin32VtcSideBarLayoutItemsReflowed_@TabletModeTelemetry@@QEAAXHI_N@Z @ 0x1800B9CC8 (-PPIWin32VtcSideBarLayoutItemsReflowed_@TabletModeTelemetry@@QEAAXHI_N@Z.c)
 *     ??$WindowTabHostTimestampUpdateCanceled@AEA_NAEA_NAEA_N@WindowTabHostTelemetry@@SAXAEA_N00@Z @ 0x1800C5DC4 (--$WindowTabHostTimestampUpdateCanceled@AEA_NAEA_NAEA_N@WindowTabHostTelemetry@@SAXAEA_N00@Z.c)
 *     ?FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800CB868 (-FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?StartActivity@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAXII@Z @ 0x1800DC4AC (-StartActivity@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAAXII@Z.c)
 *     ?StartActivity@WindowTabHostThumbnailRequested@WindowTabHostTelemetry@@QEAAXII@Z @ 0x1800DC5A8 (-StartActivity@WindowTabHostThumbnailRequested@WindowTabHostTelemetry@@QEAAXII@Z.c)
 *     ?StopActivity@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@MEAAXXZ @ 0x1800DC6B0 (-StopActivity@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@WindowTabHostThumbnailRequested@WindowTabHostTelemetry@@MEAAXXZ @ 0x1800DC8D0 (-StopActivity@WindowTabHostThumbnailRequested@WindowTabHostTelemetry@@MEAAXXZ.c)
 *     ?UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800DCE08 (-UpdateTileGuid@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1800DD3A0 (-v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x180138230 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 */

const struct _tlgProvider_t *WindowManagementLogging::Provider(void)
{
  void (*v0)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805CC298;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)qword_1805CC298);
    qword_1805CC298[0] = &ImmersiveIconsLogging::`vftable';
    qword_1805CC2B0 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC298, qword_1805CC2B0, v0);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1805CC298);
  }
  return (const struct _tlgProvider_t *)*((_QWORD *)Context + 1);
}
