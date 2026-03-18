/*
 * XREFs of ?DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP@@@Z @ 0x1C007464C
 * Callers:
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0012FB0 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C00158D4 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004943C (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

__int64 __fastcall FxPkgIo::DispathToInCallerContextCallback(
        FxPkgIo *this,
        FxIoInCallerContext *InCallerContextInfo,
        FxRequest *Request,
        _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  unsigned __int64 ObjectHandleUnchecked; // rcx

  m_Globals = this->m_Globals;
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  if ( m_Globals->FxVerifierOn )
    FxRequestBase::SetVerifierFlags(Request, 33, (unsigned __int8)Request);
  FxRequest::SetCompletionState(Request, FxRequestCompletionStateIoPkg);
  Request->Release(Request, (void *)1952543827, 1740, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
  Request->m_Presented = 1;
  FxObject::GetObjectHandleUnchecked(Request);
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  if ( InCallerContextInfo->m_Method )
    ((void (__fastcall *)(unsigned __int64))InCallerContextInfo->m_Method)(ObjectHandleUnchecked);
  return 259LL;
}
