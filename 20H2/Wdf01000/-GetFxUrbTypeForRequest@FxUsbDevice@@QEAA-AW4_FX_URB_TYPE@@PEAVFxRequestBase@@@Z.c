/*
 * XREFs of ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x1C006FE30
 * Callers:
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C006B6EC (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C006C39C (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C006C6F0 (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C0072110 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C0072370 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 * Callees:
 *     ?IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z @ 0x1C0070040 (-IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z.c)
 */

bool __fastcall FxUsbDevice::GetFxUrbTypeForRequest(FxUsbDevice *this, FxRequestBase *Request)
{
  return this->m_UrbType && (!Request->m_IrpAllocation || FxUsbDevice::IsObjectDisposedOnRemove(this, Request));
}
