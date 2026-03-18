/*
 * XREFs of ??0FxUsbUrbContext@@QEAA@XZ @ 0x1C006BDE8
 * Callers:
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C0068B40 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C00693E0 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C006E140 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 * Callees:
 *     ??0FxUsbRequestContext@@QEAA@E@Z @ 0x1C006BD74 (--0FxUsbRequestContext@@QEAA@E@Z.c)
 */

void __fastcall FxUsbUrbContext::FxUsbUrbContext(FxUsbUrbContext *this)
{
  FxUsbRequestContext::FxUsbRequestContext(this, 0x11u);
  this->m_pUrb = 0LL;
  this->__vftable = (FxUsbUrbContext_vtbl *)FxUsbUrbContext::`vftable';
}
