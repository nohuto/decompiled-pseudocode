/*
 * XREFs of ?Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1C00C71EC
 * Callers:
 *     imp_WdfRequestForwardToIoQueue @ 0x1C000BAF0 (imp_WdfRequestForwardToIoQueue.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1C00760C0 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00138C0 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6814 (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C69A4 (-Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoQueue::Vf_VerifyForwardRequest(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxIoQueue *pDestQueue,
        FxRequest *pRequest)
{
  unsigned __int8 v8; // r8
  int IsDriverOwned; // ebx
  const void *_a1; // rax
  FxDeviceBase *m_DeviceBase; // rcx
  const void *ObjectHandleUnchecked; // rax
  unsigned __int8 irql; // [rsp+68h] [rbp+10h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(pRequest, &irql, (unsigned __int8)pDestQueue);
  if ( FxDriverGlobals->FxVerifierOn )
    IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(pRequest, FxDriverGlobals);
  else
    IsDriverOwned = 0;
  if ( IsDriverOwned >= 0 )
  {
    if ( FxDriverGlobals->FxVerifierOn )
      IsDriverOwned = FxRequest::Vf_VerifyRequestIsNotCancelable(pRequest, FxDriverGlobals);
    else
      IsDriverOwned = 0;
  }
  FxNonPagedObject::Unlock(pRequest, irql, v8);
  if ( IsDriverOwned >= 0 )
  {
    if ( pDestQueue == this )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0xDu, 0x25u, WPP_FxIoQueue_cpp_Traceguids, _a1, 0xC0000010);
LABEL_11:
      FxVerifierDbgBreakPoint(FxDriverGlobals);
      return 3221225488LL;
    }
    m_DeviceBase = pDestQueue->m_DeviceBase;
    if ( this->m_DeviceBase != m_DeviceBase )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(m_DeviceBase);
      WPP_IFR_SF_q(FxDriverGlobals, 2u, 0xDu, 0x26u, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked);
      goto LABEL_11;
    }
  }
  return (unsigned int)IsDriverOwned;
}
