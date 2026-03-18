/*
 * XREFs of ?DeleteMemory@FxUsbPipeContinuousReader@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0039116
 * Callers:
 *     ??1FxUsbPipeContinuousReader@@QEAA@XZ @ 0x1C007939C (--1FxUsbPipeContinuousReader@@QEAA@XZ.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C00799DC (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxUsbPipeContinuousReader::DeleteMemory(FxUsbPipeContinuousReader *this, FxRequestBase *Request)
{
  FxRequestContext *m_RequestContext; // rcx
  IFxMemory *m_RequestMemory; // rcx

  m_RequestContext = Request->m_RequestContext;
  if ( m_RequestContext )
  {
    m_RequestMemory = m_RequestContext->m_RequestMemory;
    if ( m_RequestMemory )
      m_RequestMemory->Delete(m_RequestMemory);
  }
}
