/*
 * XREFs of ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C000E390
 * Callers:
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0009010 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C000A250 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000DF58 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C000E05C (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C000E238 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?DispatchToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP@@@Z @ 0x1C0081530 (-DispatchToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IR.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C00196F8 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::SetCompletionState(FxRequest *this, FxRequestCompletionState NewState)
{
  unsigned int m_CompletionState; // edi
  const void *_a1; // rax

  if ( this->m_Completed )
  {
    m_CompletionState = 0;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(this->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  else
  {
    m_CompletionState = this->m_CompletionState;
    this->m_CompletionState = NewState;
    if ( NewState )
    {
      if ( !m_CompletionState )
        FxObject::AddRef(this, (void *)0x74617453, 1820, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
    else if ( m_CompletionState )
    {
      this->Release(this, (void *)1952543827, 1813, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
  }
  return m_CompletionState;
}
