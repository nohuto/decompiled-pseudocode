/*
 * XREFs of ?PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV2@@Z @ 0x1C000C2CC
 * Callers:
 *     imp_WdfIoQueueFindRequest @ 0x1C000C1F0 (imp_WdfIoQueueFindRequest.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z @ 0x1C00198F0 (-GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004943C (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?Vf_VerifyPeekRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C36B0 (-Vf_VerifyPeekRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::PeekRequest(
        FxIoQueue *this,
        FxRequest *TagRequest,
        _FILE_OBJECT *FileObject,
        _WDF_REQUEST_PARAMETERS *Parameters,
        FxRequest **pOutRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxRequest *p_Blink; // rsi
  bool v7; // zf
  unsigned __int64 v12; // r8
  FxIoQueue *Flink; // rcx
  bool v14; // dl
  int v15; // ebx
  int result; // eax
  _LIST_ENTRY *Blink; // r9
  int v18; // r8d
  const void *_a1; // rax
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  p_Blink = 0LL;
  v7 = this->m_Type == WdfIoQueueDispatchManual;
  irql = 0;
  if ( !v7 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v15 = -1073741808;
    WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x1Fu, WPP_FxIoQueue_cpp_Traceguids, _a1, 0xC0000010);
    FxVerifierDbgBreakPoint(m_Globals);
    return v15;
  }
  if ( !TagRequest
    || (!m_Globals->FxVerifierOn
      ? (result = 0)
      : (result = FxIoQueue::Vf_VerifyPeekRequest(this, m_Globals, TagRequest)),
        result >= 0) )
  {
    FxNonPagedObject::Lock(this, &irql);
    v12 = (unsigned __int64)&TagRequest->120 & -(__int64)(TagRequest != 0LL);
    Flink = (FxIoQueue *)this->m_Queue.m_Queue.Flink;
    v14 = v12 == 0;
    while ( 1 )
    {
      if ( Flink == (FxIoQueue *)&this->m_Queue )
      {
        if ( v12 && !v14 )
        {
          v15 = -1073741275;
          goto LABEL_11;
        }
        v15 = -2147483622;
        goto LABEL_7;
      }
      if ( !BYTE4(Flink[-1].m_Dpc.SystemArgument1) )
      {
        Blink = Flink[-1].m_IoPkgListNode.m_ListEntry.Blink;
        if ( v14 )
        {
          if ( !FileObject )
          {
            v18 = 447;
            goto LABEL_18;
          }
          if ( *(_FILE_OBJECT **)&Flink->m_Globals->DestroyEvent.m_DbgFlagIsInitialized == FileObject )
          {
            v18 = 432;
LABEL_18:
            p_Blink = (FxRequest *)&Blink[-8].Blink;
            FxObject::AddRef(
              (FxObject *)&Blink[-8].Blink,
              0LL,
              v18,
              "minkernel\\wdf\\framework\\shared\\core\\fxirpqueue.cpp");
            v15 = 0;
            if ( !Parameters )
              goto LABEL_11;
            v15 = FxRequest::GetParameters(p_Blink, Parameters);
            if ( v15 != -2147483622 )
              goto LABEL_11;
LABEL_7:
            if ( !FileObject && !TagRequest && this->m_Queue.m_RequestCount > 0 )
              this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 1;
LABEL_11:
            FxNonPagedObject::Unlock(this, irql);
            if ( v15 >= 0 )
            {
              if ( m_Globals->FxVerifierOn )
                FxRequestBase::SetVerifierFlags(p_Blink, 2);
              *pOutRequest = p_Blink;
            }
            return v15;
          }
        }
        else
        {
          v14 = Blink == (_LIST_ENTRY *)v12;
        }
      }
      Flink = (FxIoQueue *)Flink->FxNonPagedObject::FxObject::__vftable;
    }
  }
  return result;
}
