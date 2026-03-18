/*
 * XREFs of ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1C0081C50
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0003FB0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C000A250 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1C00C82C8 (-Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::ForwardRequest(FxIoQueue *this, FxIoQueue *pDestQueue, FxRequest *pRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  int result; // eax

  m_Globals = this->m_Globals;
  if ( !m_Globals->FxVerifierOn )
    return FxIoQueue::ForwardRequestWorker(this, pRequest, pDestQueue);
  result = FxIoQueue::Vf_VerifyForwardRequest(this, m_Globals, pDestQueue, pRequest);
  if ( result >= 0 )
    return FxIoQueue::ForwardRequestWorker(this, pRequest, pDestQueue);
  return result;
}
