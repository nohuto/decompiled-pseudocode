/*
 * XREFs of ?AllocateUrb@FxUsbPipeRequestContext@@QEAAJPEAUUSBD_HANDLE__@@@Z @ 0x1C006C9FC
 * Callers:
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C006CC7C (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C006CFD0 (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     USBD_UrbAllocate @ 0x1C008FF6C (USBD_UrbAllocate.c)
 */

int __fastcall FxUsbPipeRequestContext::AllocateUrb(FxUsbPipeRequestContext *this, USBD_HANDLE__ *USBDHandle)
{
  int result; // eax

  if ( this->m_Urb )
    return -1073741436;
  result = USBD_UrbAllocate(USBDHandle, (_URB **)&this->m_Urb);
  if ( result >= 0 )
    this->m_USBDHandle = USBDHandle;
  return result;
}
