/*
 * XREFs of ?GetUsbdStatus@FxUsbPipeTransferContext@@UEAAJXZ @ 0x1C000DC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxUsbPipeTransferContext::GetUsbdStatus(FxUsbPipeTransferContext *this)
{
  return (unsigned int)this->m_Urb->Hdr.Status;
}
