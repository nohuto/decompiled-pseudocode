/*
 * XREFs of ?DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180188D90
 * Callers:
 *     ?DetachFromChannel@CVirtualMonitorCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180189C60 (-DetachFromChannel@CVirtualMonitorCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x1801895A4 (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 */

void __fastcall CCaptureRenderTarget::DetachFromChannel(CCaptureRenderTarget *this, struct CChannelContext *a2)
{
  CCaptureRenderTarget::SetController(this, 0LL);
  CNotificationResource::DetachFromChannel(this, a2);
}
