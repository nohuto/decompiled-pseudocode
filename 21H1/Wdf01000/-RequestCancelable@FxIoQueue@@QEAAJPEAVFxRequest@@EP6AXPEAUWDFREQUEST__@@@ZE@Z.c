/*
 * XREFs of ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x1C0016B14
 * Callers:
 *     imp_WdfRequestMarkCancelable @ 0x1C00169D0 (imp_WdfRequestMarkCancelable.c)
 *     imp_WdfRequestMarkCancelableEx @ 0x1C0016A60 (imp_WdfRequestMarkCancelableEx.c)
 * Callees:
 *     ?InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C00053B0 (-InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?RemoveFromIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@@Z @ 0x1C00134AC (-RemoveFromIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0015824 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0049D0C (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004ECD8 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005A8F8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005ABF8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z @ 0x1C00C779C (-Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z.c)
 */

int __fastcall FxIoQueue::RequestCancelable(
        FxIoQueue *this,
        FxRequest *pRequest,
        unsigned __int8 Cancelable,
        void (__fastcall *EvtRequestCancel)(WDFREQUEST__ *),
        unsigned __int8 FailIfIrpIsCancelled)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int result; // eax
  _IRP *v11; // r8
  int inserted; // esi
  FxVerifierLock *v13; // rcx
  unsigned __int8 v14; // dl
  unsigned __int8 v15; // r8
  FxVerifierLock *v16; // rcx
  unsigned __int8 v17; // r8
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  if ( m_Globals->FxVerifierOn )
    result = FxIoQueue::Vf_VerifyRequestCancelable(this, m_Globals, pRequest, Cancelable);
  else
    result = 0;
  if ( result >= 0 )
  {
    if ( Cancelable )
    {
      if ( m_Globals->FxVerifierOn )
        FxRequestBase::SetVerifierFlags(pRequest, 16);
      if ( SLOBYTE(this->m_ObjectFlags) < 0
        && (v13 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v13, &irql, Cancelable);
      }
      else
      {
        irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
      }
      pRequest->m_CancelRoutine.m_Cancel = EvtRequestCancel;
      if ( this->m_CancelDispatchedRequests )
      {
        inserted = -1073741536;
      }
      else
      {
        inserted = FxRequest::InsertTailIrpQueue(pRequest, &this->m_DriverCancelable, v11);
        if ( inserted >= 0 )
        {
          if ( SLOBYTE(this->m_ObjectFlags) < 0
            && (v16 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Unlock(v16, irql, (unsigned __int8)v11);
          }
          else
          {
            KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
          }
          return inserted;
        }
      }
      v14 = irql;
      if ( !FailIfIrpIsCancelled )
      {
        inserted = 0;
        pRequest->m_Canceled = 1;
        FxNonPagedObject::Unlock(this, v14, (unsigned __int8)v11);
        FxObject::AddRef(
          pRequest,
          (void *)0x75657551,
          2210,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        FxIoQueue::CancelForDriver(this, pRequest, v15);
        return inserted;
      }
      pRequest->m_CancelRoutine.m_Cancel = 0LL;
      FxNonPagedObject::Unlock(this, v14, (unsigned __int8)v11);
      if ( !m_Globals->FxVerifierOn )
        return inserted;
    }
    else
    {
      FxNonPagedObject::Lock(this, &irql, Cancelable);
      inserted = FxRequest::RemoveFromIrpQueue(pRequest, &this->m_DriverCancelable);
      if ( inserted >= 0 )
        pRequest->m_CancelRoutine.m_Cancel = 0LL;
      FxNonPagedObject::Unlock(this, irql, v17);
      if ( !m_Globals->FxVerifierOn || inserted < 0 )
        return inserted;
    }
    FxRequestBase::ClearVerifierFlags(pRequest, 16);
    return inserted;
  }
  return result;
}
