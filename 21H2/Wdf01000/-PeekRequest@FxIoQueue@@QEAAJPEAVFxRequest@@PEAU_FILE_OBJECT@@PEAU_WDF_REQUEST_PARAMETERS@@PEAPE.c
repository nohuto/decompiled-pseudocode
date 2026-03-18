/*
 * XREFs of ?PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV2@@Z @ 0x1C00056A4
 * Callers:
 *     imp_WdfIoQueueFindRequest @ 0x1C0005330 (imp_WdfIoQueueFindRequest.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?PeekRequest@FxIrpQueue@@QEAAJPEAU_IO_CSQ_IRP_CONTEXT@@PEAU_FILE_OBJECT@@PEAPEAVFxRequest@@@Z @ 0x1C00057FC (-PeekRequest@FxIrpQueue@@QEAAJPEAU_IO_CSQ_IRP_CONTEXT@@PEAU_FILE_OBJECT@@PEAPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z @ 0x1C0013B50 (-GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0064138 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006D914 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006DC28 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Vf_VerifyPeekRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C8784 (-Vf_VerifyPeekRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::PeekRequest(
        FxIoQueue *this,
        FxRequest *TagRequest,
        _FILE_OBJECT *FileObject,
        _WDF_REQUEST_PARAMETERS *Parameters,
        FxRequest **pOutRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  bool v6; // zf
  unsigned __int8 v11; // r14
  int v12; // eax
  unsigned __int8 v13; // r8
  FxRequest *v14; // r15
  int v15; // edi
  int result; // eax
  const void *_a1; // rax
  FxVerifierLock *v18; // rcx
  FxVerifierLock *v19; // rcx
  FxRequest *pRequest; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v6 = this->m_Type == WdfIoQueueDispatchManual;
  pRequest = 0LL;
  irql = 0;
  if ( !v6 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x1Fu, WPP_FxIoQueue_cpp_Traceguids, _a1, 0xC0000010);
    FxVerifierDbgBreakPoint(m_Globals);
    return -1073741808;
  }
  if ( !TagRequest
    || !m_Globals->FxVerifierOn
    || (result = FxIoQueue::Vf_VerifyPeekRequest(this, m_Globals, TagRequest), result >= 0) )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v18 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v18, &irql, (unsigned __int8)FileObject);
      v11 = irql;
    }
    else
    {
      v11 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
      irql = v11;
    }
    v12 = FxIrpQueue::PeekRequest(
            &this->m_Queue,
            (_IO_CSQ_IRP_CONTEXT *)((unsigned __int64)&TagRequest->120 & -(__int64)(TagRequest != 0LL)),
            FileObject,
            &pRequest);
    v14 = pRequest;
    v15 = v12;
    if ( v12 >= 0 )
    {
      if ( !Parameters )
      {
LABEL_11:
        if ( SLOBYTE(this->m_ObjectFlags) < 0
          && (v19 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Unlock(v19, v11, v13);
        }
        else
        {
          KeReleaseSpinLock(&this->m_NPLock.m_Lock, v11);
        }
        if ( v15 >= 0 )
        {
          if ( m_Globals->FxVerifierOn )
            FxRequestBase::SetVerifierFlags(v14, 2);
          *pOutRequest = v14;
        }
        return v15;
      }
      v15 = FxRequest::GetParameters(pRequest, Parameters);
    }
    if ( v15 == -2147483622 && !FileObject && !TagRequest && this->m_Queue.m_RequestCount > 0 )
      this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 1;
    goto LABEL_11;
  }
  return result;
}
