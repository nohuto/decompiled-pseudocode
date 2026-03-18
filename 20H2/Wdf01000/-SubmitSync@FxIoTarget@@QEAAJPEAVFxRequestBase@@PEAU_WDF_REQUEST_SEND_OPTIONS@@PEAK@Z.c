/*
 * XREFs of ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0001D10
 * Callers:
 *     imp_WdfRequestSend @ 0x1C0001AD0 (imp_WdfRequestSend.c)
 *     FxIoTargetSendIoctl @ 0x1C0017A14 (FxIoTargetSendIoctl.c)
 *     FxIoTargetSendIo @ 0x1C0061EA4 (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0063100 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ?SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C00655E4 (-SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OP.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C0067D20 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C0068B40 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C00693E0 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C006B130 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C006DB90 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C006FB1C (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C006FE9C (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C007056C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C0071954 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C00725A0 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C00727D0 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 * Callees:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C0001F90 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C00190D0 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C00196C8 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qD @ 0x1C00357EC (WPP_IFR_SF_qD.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005A018 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005A318 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005AE28 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxIoTarget::SubmitSync(
        FxIoTarget *this,
        FxRequestBase *Request,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        unsigned int *Action)
{
  unsigned __int8 v8; // r8
  char v9; // r13
  int v10; // ebx
  char m_ObjectFlags; // al
  unsigned int v12; // edi
  unsigned __int8 v13; // r8
  unsigned int v14; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _LARGE_INTEGER *Timeout; // rdi
  unsigned int v17; // r12d
  _FX_DRIVER_GLOBALS *v18; // rcx
  NTSTATUS v19; // edi
  FxRequestBase *_a2; // r8
  unsigned __int64 v22; // rcx
  const void *_a1; // rdx
  _DEVICE_OBJECT *m_TargetDevice; // rcx
  _DEVICE_OBJECT *v25; // rcx
  FxRequestBase *v26; // rax
  unsigned __int64 v27; // rdx
  FxTagTracker *m_TargetCompletionContext; // rcx
  unsigned __int64 v29; // rdx
  FxRequestBase *v30; // rax
  unsigned __int8 v31; // dl
  __int64 timeout; // [rsp+40h] [rbp-29h] BYREF
  FxTargetSubmitSyncParams params; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+D0h] [rbp+67h] BYREF
  unsigned __int8 irql; // [rsp+D8h] [rbp+6Fh] BYREF
  int status; // [rsp+E0h] [rbp+77h] BYREF
  unsigned int Flags; // [rsp+E8h] [rbp+7Fh]

  params.SynchEvent.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&params.SynchEvent.m_Event.m_Event, SynchronizationEvent, 0);
  params.SynchEvent.m_Event.m_DbgFlagIsInitialized = 1;
  timeout = 0LL;
  status = 0;
  memset(&params.Status, 0, 24);
  irql = 0;
  if ( this->m_Globals->FxVerboseOn )
  {
    _a2 = Request;
    v22 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !Request->m_ObjectSize )
      v22 = 0LL;
    if ( v22 )
      _a2 = (FxRequestBase *)v22;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 5u, 0xEu, 0x24u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  v9 = Request->m_RequestBaseFlags & 0x10;
  if ( Action )
    v10 = *Action;
  else
    v10 = 0;
  if ( Options && (Options->Flags & 1) != 0 && Options->Timeout )
  {
    timeout = Options->Timeout;
    v10 |= 0x10u;
  }
  if ( (v10 & 0x20) != 0 )
  {
    params.OrigTargetCompletionContext = Request->m_TargetCompletionContext;
    params.OrigTargetCompletionRoutine = Request->m_CompletionRoutine.m_Completion;
  }
  else
  {
    params.OrigTargetCompletionContext = 0LL;
    params.OrigTargetCompletionRoutine = 0LL;
  }
  Request->m_CompletionRoutine.m_Completion = FxIoTarget::_SyncCompletionRoutine;
  Request->m_TargetCompletionContext = &params;
  if ( Options )
    Flags = Options->Flags & 0xFFFFFFFE;
  else
    Flags = 0;
  m_ObjectFlags = this->m_ObjectFlags;
  PreviousIrql = 0;
  if ( m_ObjectFlags < 0 && (m_TargetDevice = this[-1].m_TargetDevice) != 0LL )
    FxVerifierLock::Lock((FxVerifierLock *)m_TargetDevice, &PreviousIrql, v8);
  else
    PreviousIrql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  v12 = FxIoTarget::SubmitLocked(this, Request, Options, Flags);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v25 = this[-1].m_TargetDevice) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v25, PreviousIrql, v13);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, PreviousIrql);
  v14 = v12 | v10;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    Timeout = 0LL;
    v26 = Request;
    v27 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !Request->m_ObjectSize )
      v27 = 0LL;
    if ( v27 )
      v26 = (FxRequestBase *)v27;
    WPP_IFR_SF_qD(m_Globals, v27, 0xEu, 0x26u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v26, v14);
  }
  else
  {
    Timeout = 0LL;
  }
  v17 = _InterlockedIncrement(&Request->m_Refcnt);
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
  {
    m_TargetCompletionContext = (FxTagTracker *)Request[-1].m_TargetCompletionContext;
    if ( m_TargetCompletionContext )
      FxTagTracker::UpdateTagHistory(
        m_TargetCompletionContext,
        &status,
        1754,
        "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
        TagAddRef,
        v17);
  }
  if ( (v14 & 1) != 0 )
  {
    v18 = this->m_Globals;
    if ( v18->FxVerboseOn )
    {
      v29 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      v30 = Request;
      if ( !Request->m_ObjectSize )
        v29 = 0LL;
      if ( v29 )
        v30 = (FxRequestBase *)v29;
      WPP_IFR_SF_qq(v18, 5u, 0xEu, 0x27u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v30, Request->m_Irp.m_Irp);
    }
    this->Send(this, Request->m_Irp.m_Irp);
    v14 |= 0xCu;
  }
  else if ( (v14 & 2) != 0 )
  {
    v14 |= 0xCu;
  }
  else if ( (v14 & 0x20) != 0 )
  {
    Request->m_TargetCompletionContext = params.OrigTargetCompletionContext;
    Request->m_CompletionRoutine.m_Completion = params.OrigTargetCompletionRoutine;
  }
  if ( (v14 & 4) != 0 )
  {
    if ( (v14 & 8) != 0 )
    {
      if ( (v14 & 0x10) != 0 )
        Timeout = (_LARGE_INTEGER *)&timeout;
      KeEnterCriticalRegion();
      v19 = KeWaitForSingleObject(&params, Executive, 0, 0, Timeout);
      KeLeaveCriticalRegion();
      status = v19;
      if ( v19 == 258 )
      {
        FxNonPagedObject::Lock(this, &irql);
        v31 = irql;
        Request->m_TargetFlags |= 8u;
        FxNonPagedObject::Unlock(this, v31);
        FxRequestBase::Cancel(Request);
        KeEnterCriticalRegion();
        KeWaitForSingleObject(&params, Executive, 0, 0, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    status = params.Status;
  }
  else
  {
    status = Request->m_Irp.m_Irp->IoStatus.Status;
  }
  Request->Release(Request, &status, 1865, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  if ( Action )
    *Action = v14;
  if ( v9 )
    FxRequestBase::ContextReleaseAndRestore(Request);
  return (unsigned int)status;
}
