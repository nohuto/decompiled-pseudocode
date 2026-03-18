/*
 * XREFs of ?ReleaseAndRestore@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C00395A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAndRestore@FxRequestContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C0010130 (-ReleaseAndRestore@FxRequestContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C006EECC (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

void __fastcall FxUsbDeviceControlContext::ReleaseAndRestore(FxUsbDeviceControlContext *this, FxRequestBase *Request)
{
  _MDL *m_PartialMdl; // rcx

  m_PartialMdl = this->m_PartialMdl;
  if ( m_PartialMdl )
  {
    if ( this->m_UnlockPages )
    {
      MmUnlockPages(m_PartialMdl);
      m_PartialMdl = this->m_PartialMdl;
      this->m_UnlockPages = 0;
    }
    if ( Request->m_Globals->FxVerifierOn )
      FxMdlFreeDebug(Request->m_Globals, m_PartialMdl);
    else
      IoFreeMdl(m_PartialMdl);
    this->m_PartialMdl = 0LL;
  }
  FxRequestContext::ReleaseAndRestore(this, Request);
}
