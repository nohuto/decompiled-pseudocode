/*
 * XREFs of ??1FxIoContext@@UEAA@XZ @ 0x1C000528C
 * Callers:
 *     ??_GFxIoContext@@UEAAPEAXI@Z @ 0x1C00052F0 (--_GFxIoContext@@UEAAPEAXI@Z.c)
 *     FxIoTargetSendIoctl @ 0x1C0017A14 (FxIoTargetSendIoctl.c)
 *     FxIoTargetSendIo @ 0x1C0062784 (FxIoTargetSendIo.c)
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x1C0070364 (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C007377C (-Reset@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C005BECC (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

void __fastcall FxIoContext::~FxIoContext(FxIoContext *this)
{
  void *m_BufferToFree; // rcx
  _MDL *m_MdlToFree; // rcx

  this->__vftable = (FxIoContext_vtbl *)FxIoContext::`vftable';
  m_BufferToFree = this->m_BufferToFree;
  if ( m_BufferToFree )
  {
    FxPoolFree(m_BufferToFree);
    this->m_BufferToFree = 0LL;
  }
  this->m_BufferToFreeLength = 0LL;
  m_MdlToFree = this->m_MdlToFree;
  this->m_CopyBackToBuffer = 0;
  if ( m_MdlToFree )
  {
    if ( this->m_UnlockPages )
    {
      MmUnlockPages(m_MdlToFree);
      m_MdlToFree = this->m_MdlToFree;
      this->m_UnlockPages = 0;
    }
    if ( BYTE4(this->m_OriginalMdl[6].MappedSystemVa) )
      FxMdlFreeDebug(this->m_DriverGlobals, m_MdlToFree);
    else
      IoFreeMdl(m_MdlToFree);
    this->m_MdlToFree = 0LL;
  }
  this->__vftable = (FxIoContext_vtbl *)FxRequestContext::`vftable';
}
