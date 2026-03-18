/*
 * XREFs of ?ReleaseAndRestore@FxUsbUrbContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C006DB40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAndRestore@FxRequestContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C00916A0 (-ReleaseAndRestore@FxRequestContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 */

void __fastcall FxUsbUrbContext::ReleaseAndRestore(FxUsbUrbContext *this, FxRequestBase *Request)
{
  this->m_pUrb = 0LL;
  FxRequestContext::ReleaseAndRestore(this, Request);
}
