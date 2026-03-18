/*
 * XREFs of ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0009D30
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009550 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Invoke@FxIoQueueIoWrite@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C00117F8 (-Invoke@FxIoQueueIoWrite@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?Invoke@FxIoQueueIoRead@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C00396A0 (-Invoke@FxIoQueueIoRead@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0063FCC (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0064138 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0068628 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C006E6F0 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     WPP_IFR_SF_Lqd @ 0x1C008178C (WPP_IFR_SF_Lqd.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C7B00 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxIoQueue::DispatchRequestToDriver(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  WDFQUEUE__ *v6; // r14
  unsigned __int8 m_CompletionState; // al
  unsigned int v8; // edx
  unsigned int v9; // r8d
  unsigned __int16 m_ObjectSize; // cx
  _IRP *m_Irp; // rdx
  WDFREQUEST__ *_a1; // r15
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int MajorFunction; // ebp
  unsigned int *p_MajorFunction; // rax
  unsigned int v16; // ebp
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r13
  void (__fastcall *Method)(WDFQUEUE__ *, WDFREQUEST__ *, unsigned __int64, unsigned __int64, unsigned int); // rax
  FxCallbackLock *m_CallbackLock; // rcx
  FxCallbackLock *v21; // rcx
  unsigned int *v22; // rax
  unsigned int v23; // ebp
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // r13
  void (__fastcall *v26)(WDFQUEUE__ *, WDFREQUEST__ *, unsigned __int64, unsigned __int64, unsigned int); // rax
  FxCallbackLock *v27; // rcx
  FxIoQueueIoDefault *p_m_IoDefault; // rbp
  unsigned __int64 v29; // rdi
  void (__fastcall *v30)(WDFQUEUE__ *, WDFREQUEST__ *); // rax
  FxCallbackLock *v31; // rcx
  unsigned int v32; // ebp
  unsigned __int8 v33; // r8
  _FX_DRIVER_GLOBALS *v34; // rdx
  const void *v35; // rcx
  _LIST_ENTRY *Blink; // rcx
  unsigned int Length; // ebp
  unsigned __int16 v38; // ax
  const void *_a2; // rdi
  __int64 v40; // r8
  WDFQUEUE__ *v41; // rdx
  unsigned __int16 v42; // ax
  const void *v43; // rdi
  const void *v44; // rax
  unsigned __int16 v45; // ax
  const void *v46; // rdi
  unsigned __int16 v47; // ax
  const void *v48; // rdi
  __int16 m_VerifierFlags; // di
  unsigned __int8 v50; // r8
  unsigned __int8 PreviousIrql; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( pRequest->m_Globals->FxVerifierIO )
  {
    PreviousIrql = 0;
    FxNonPagedObject::Lock(pRequest, &PreviousIrql, a3);
    v34 = pRequest->m_Globals;
    if ( v34->FxVerifierOn )
      FxRequest::Vf_VerifyRequestIsNotCompleted(pRequest, v34);
    FxNonPagedObject::Unlock(pRequest, PreviousIrql, v33);
  }
  v6 = 0LL;
  if ( pRequest->m_Completed )
  {
    v35 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !pRequest->m_ObjectSize )
      v35 = 0LL;
    WPP_IFR_SF_q(pRequest->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v35);
    FxVerifierDbgBreakPoint(pRequest->m_Globals);
  }
  else
  {
    m_CompletionState = pRequest->m_CompletionState;
    pRequest->m_CompletionState = 1;
    if ( !m_CompletionState )
    {
      v8 = _InterlockedIncrement(&pRequest->m_Refcnt);
      if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
      {
        Blink = pRequest[-1].m_OwnerListEntry2.Blink;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)Blink,
            (void *)0x74617453,
            1820,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            v8);
      }
    }
  }
  if ( m_Globals->FxVerifierOn )
    FxRequestBase::SetVerifierFlags(pRequest, 9);
  else
    pRequest->Release(
      pRequest,
      (void *)1952543827,
      3219,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  m_ObjectSize = pRequest->m_ObjectSize;
  m_Irp = pRequest->m_Irp.m_Irp;
  _a1 = 0LL;
  if ( m_ObjectSize )
    _a1 = (WDFREQUEST__ *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  switch ( (_BYTE)MajorFunction )
  {
    case 3:
      if ( this->m_IoRead.Method )
      {
        Length = CurrentStackLocation->Parameters.Read.Length;
        if ( Length || this->m_AllowZeroLengthRequests )
        {
          pRequest->m_Presented = 1;
          if ( m_Globals->FxVerboseOn )
            WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x33u, WPP_FxIoQueue_cpp_Traceguids, _a1);
          v41 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v41 = 0LL;
          FxIoQueueIoRead::Invoke(&this->m_IoRead, v41, _a1, Length);
          goto LABEL_21;
        }
        if ( m_Globals->FxVerboseOn )
        {
          v38 = this->m_ObjectSize;
          _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v38 )
            _a2 = 0LL;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x32u, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
        }
        FxRequest::Complete(pRequest, 0);
        if ( m_Globals->FxVerifierOn )
        {
          v40 = 3261LL;
          goto LABEL_111;
        }
        return;
      }
      break;
    case 4:
      if ( this->m_IoWrite.Method )
      {
        v32 = CurrentStackLocation->Parameters.Read.Length;
        if ( v32 || this->m_AllowZeroLengthRequests )
        {
          pRequest->m_Presented = 1;
          if ( m_Globals->FxVerboseOn )
          {
            v44 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !m_ObjectSize )
              v44 = 0LL;
            WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x35u, WPP_FxIoQueue_cpp_Traceguids, v44);
          }
          if ( this->m_ObjectSize )
            v6 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          FxIoQueueIoWrite::Invoke(&this->m_IoWrite, v6, _a1, v32);
          goto LABEL_21;
        }
        if ( m_Globals->FxVerboseOn )
        {
          v42 = this->m_ObjectSize;
          v43 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v42 )
            v43 = 0LL;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x34u, WPP_FxIoQueue_cpp_Traceguids, _a1, v43);
        }
        FxRequest::Complete(pRequest, 0);
        if ( m_Globals->FxVerifierOn )
        {
          v40 = 3300LL;
          goto LABEL_111;
        }
        return;
      }
      break;
    case 0xE:
      if ( this->m_IoDeviceControl.Method )
      {
        pRequest->m_Presented = 1;
        if ( m_Globals->FxVerboseOn )
        {
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x36u, WPP_FxIoQueue_cpp_Traceguids, _a1);
          m_Irp = pRequest->m_Irp.m_Irp;
        }
        p_MajorFunction = (unsigned int *)&m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
        v16 = p_MajorFunction[6];
        v17 = p_MajorFunction[4];
        v18 = p_MajorFunction[2];
        if ( this->m_ObjectSize )
          v6 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        Method = this->m_IoDeviceControl.Method;
        if ( !Method )
          goto LABEL_21;
        m_CallbackLock = this->m_IoDeviceControl.m_CallbackLock;
        PreviousIrql = 0;
        if ( m_CallbackLock )
        {
          m_CallbackLock->Lock(m_CallbackLock, &PreviousIrql);
          this->m_IoDeviceControl.Method(v6, _a1, v18, v17, v16);
        }
        else
        {
          Method(v6, _a1, v18, v17, v16);
        }
        v21 = this->m_IoDeviceControl.m_CallbackLock;
        if ( !v21 )
          goto LABEL_21;
        goto LABEL_33;
      }
      break;
    default:
      if ( (_BYTE)MajorFunction == 15 && this->m_IoInternalDeviceControl.Method )
      {
        pRequest->m_Presented = 1;
        if ( m_Globals->FxVerboseOn )
        {
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x37u, WPP_FxIoQueue_cpp_Traceguids, _a1);
          m_Irp = pRequest->m_Irp.m_Irp;
        }
        v22 = (unsigned int *)&m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
        v23 = v22[6];
        v24 = v22[4];
        v25 = v22[2];
        if ( this->m_ObjectSize )
          v6 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        v26 = this->m_IoInternalDeviceControl.Method;
        if ( !v26 )
          goto LABEL_21;
        v27 = this->m_IoInternalDeviceControl.m_CallbackLock;
        PreviousIrql = 0;
        if ( v27 )
        {
          v27->Lock(v27, &PreviousIrql);
          this->m_IoInternalDeviceControl.Method(v6, _a1, v25, v24, v23);
        }
        else
        {
          v26(v6, _a1, v25, v24, v23);
        }
        v21 = this->m_IoInternalDeviceControl.m_CallbackLock;
        if ( !v21 )
          goto LABEL_21;
LABEL_33:
        v21->Unlock(v21, PreviousIrql);
LABEL_21:
        if ( !m_Globals->FxVerifierOn )
          return;
        PreviousIrql = 0;
        FxNonPagedObject::Lock(pRequest, &PreviousIrql, v9);
        m_VerifierFlags = pRequest->m_VerifierFlags;
        FxNonPagedObject::Unlock(pRequest, PreviousIrql, v50);
        if ( (m_VerifierFlags & 4) == 0 )
          FxRequestBase::ClearVerifierFlags(pRequest, 8);
        v40 = 3465LL;
LABEL_111:
        pRequest->Release(
          pRequest,
          (void *)1952543827,
          v40,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        return;
      }
      break;
  }
  if ( this->m_IoDefault.Method )
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x38u, WPP_FxIoQueue_cpp_Traceguids, _a1);
    if ( this->m_AllowZeroLengthRequests )
    {
LABEL_38:
      pRequest->m_Presented = 1;
      p_m_IoDefault = &this->m_IoDefault;
      if ( this->m_ObjectSize )
        v29 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v29 = 0LL;
      v30 = p_m_IoDefault->Method;
      if ( !v30 )
        goto LABEL_21;
      v31 = p_m_IoDefault->m_CallbackLock;
      PreviousIrql = 0;
      if ( v31 )
      {
        v31->Lock(v31, &PreviousIrql);
        p_m_IoDefault->Method((WDFQUEUE__ *)v29, _a1);
      }
      else
      {
        v30((WDFQUEUE__ *)v29, _a1);
      }
      v21 = p_m_IoDefault->m_CallbackLock;
      if ( !p_m_IoDefault->m_CallbackLock )
        goto LABEL_21;
      goto LABEL_33;
    }
    if ( (_BYTE)MajorFunction == 3 )
    {
      if ( pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
        goto LABEL_38;
      if ( m_Globals->FxVerboseOn )
      {
        v45 = this->m_ObjectSize;
        v46 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v45 )
          v46 = 0LL;
        WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x39u, WPP_FxIoQueue_cpp_Traceguids, _a1, v46);
      }
      FxRequest::Complete(pRequest, 0);
      if ( m_Globals->FxVerifierOn )
      {
        v40 = 3384LL;
        goto LABEL_111;
      }
    }
    else
    {
      if ( (_BYTE)MajorFunction != 4 || pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length )
        goto LABEL_38;
      FxRequest::Complete(pRequest, 0);
      if ( m_Globals->FxVerboseOn )
      {
        v47 = this->m_ObjectSize;
        v48 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v47 )
          v48 = 0LL;
        WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x3Au, WPP_FxIoQueue_cpp_Traceguids, _a1, v48);
      }
      if ( m_Globals->FxVerifierOn )
      {
        v40 = 3405LL;
        goto LABEL_111;
      }
    }
  }
  else
  {
    WPP_IFR_SF_Lqd(
      m_Globals,
      (unsigned __int8)m_Irp,
      v9,
      0x3Bu,
      WPP_FxIoQueue_cpp_Traceguids,
      MajorFunction,
      pRequest,
      -1073741808);
    FxRequest::Complete(pRequest, -1073741808);
    if ( m_Globals->FxVerifierOn )
    {
      v40 = 3436LL;
      goto LABEL_111;
    }
  }
}
