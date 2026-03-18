/*
 * XREFs of imp_WdfRequestUnmarkCancelable @ 0x1C0013530
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?RemoveFromIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@@Z @ 0x1C00134AC (-RemoveFromIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004E408 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005A018 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005A318 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z @ 0x1C00C379C (-Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z.c)
 */

__int64 __fastcall imp_WdfRequestUnmarkCancelable(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  FxIoQueue *v3; // rcx
  unsigned __int8 v4; // r8
  FxRequest *v5; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxIoQueue *m_IoQueue; // rbx
  _FX_DRIVER_GLOBALS *v8; // r14
  int v9; // edi
  unsigned __int64 *p_m_Lock; // r15
  unsigned __int8 v11; // bp
  unsigned __int8 v12; // r8
  FxVerifierLock *v14; // rcx
  FxVerifierLock *v15; // rcx
  unsigned __int8 PreviousIrql; // [rsp+70h] [rbp+8h] BYREF
  FxRequest *pRequest; // [rsp+80h] [rbp+18h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest);
  v5 = pRequest;
  m_Globals = pRequest->m_Globals;
  if ( pRequest->m_Completed || (m_IoQueue = pRequest->m_IoQueue) == 0LL )
  {
    WPP_IFR_SF_qL(m_Globals, 2u, 0x10u, 0x53u, WPP_FxRequestApi_cpp_Traceguids, Request, 0xC0000010);
    FxVerifierDbgBreakPoint(m_Globals);
    return 3221225488LL;
  }
  else
  {
    v8 = m_IoQueue->m_Globals;
    PreviousIrql = 0;
    if ( v8->FxVerifierOn )
      v9 = FxIoQueue::Vf_VerifyRequestCancelable(v3, v8, pRequest, 0);
    else
      v9 = 0;
    if ( v9 >= 0 )
    {
      if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
        && (v14 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v14, &PreviousIrql, v4);
        v11 = PreviousIrql;
        p_m_Lock = &m_IoQueue->m_NPLock.m_Lock;
      }
      else
      {
        p_m_Lock = &m_IoQueue->m_NPLock.m_Lock;
        v11 = KeAcquireSpinLockRaiseToDpc(&m_IoQueue->m_NPLock.m_Lock);
      }
      v9 = FxRequest::RemoveFromIrpQueue(v5, &m_IoQueue->m_DriverCancelable);
      if ( v9 >= 0 )
        v5->m_CancelRoutine.m_Cancel = 0LL;
      if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
        && (v15 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Unlock(v15, v11, v12);
      }
      else
      {
        KeReleaseSpinLock(p_m_Lock, v11);
      }
      if ( v8->FxVerifierOn )
      {
        if ( v9 >= 0 )
          FxRequestBase::ClearVerifierFlags(v5, 16);
      }
    }
    return (unsigned int)v9;
  }
}
