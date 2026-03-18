/*
 * XREFs of ??0FxUsbRequestContext@@QEAA@E@Z @ 0x1C006BD74
 * Callers:
 *     ??0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C006BCC0 (--0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ??0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C006BD14 (--0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ??0FxUsbUrbContext@@QEAA@XZ @ 0x1C006BDE8 (--0FxUsbUrbContext@@QEAA@XZ.c)
 *     ??0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C006EABC (--0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ??0FxUsbDeviceStringContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C006EB1C (--0FxUsbDeviceStringContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 * Callees:
 *     memset @ 0x1C001CA80 (memset.c)
 */

void __fastcall FxUsbRequestContext::FxUsbRequestContext(FxUsbRequestContext *this, unsigned __int8 Type)
{
  this->m_RequestMemory = 0LL;
  this->m_RequestType = Type;
  memset(&this->m_CompletionParams, 0, sizeof(this->m_CompletionParams));
  this->m_CompletionParams.Size = 72;
  this->m_CompletionParams.Type = WdfRequestTypeNoFormat;
  this->__vftable = (FxUsbRequestContext_vtbl *)FxUsbRequestContext::`vftable';
  *(_OWORD *)&this->m_UsbParameters.UsbdStatus = 0LL;
  *(_OWORD *)(&this->m_UsbParameters.Parameters.PipeUrb + 1) = 0LL;
  this->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&this->m_UsbParameters;
  this->m_CompletionParams.Type = WdfRequestTypeUsb;
  this->m_UsbParameters.Type = WdfUsbRequestTypeNoFormat;
}
