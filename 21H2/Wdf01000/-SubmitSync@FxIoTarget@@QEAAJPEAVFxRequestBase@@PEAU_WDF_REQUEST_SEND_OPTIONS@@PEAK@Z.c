/*
 * XREFs of ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C001A8A0
 * Callers:
 *     imp_WdfRequestSend @ 0x1C000AF90 (imp_WdfRequestSend.c)
 *     FxIoTargetSendIoctl @ 0x1C0019E84 (FxIoTargetSendIoctl.c)
 *     FxIoTargetSendIo @ 0x1C00726D4 (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0073280 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ?SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C00747EC (-SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OP.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C0075D60 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C0076A80 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C0077230 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C0078E40 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C007AF70 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C007CC50 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C007CF98 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C007D5CC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C007EA1C (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C007F720 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C007F964 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C000B1D0 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C000EA30 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C001ACB8 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qD @ 0x1C0058DAC (WPP_IFR_SF_qD.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C006E6F0 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxIoTarget::SubmitSync(
        FxIoTarget *this,
        FxRequestBase *Request,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        unsigned int *Action)
{
  unsigned int v4; // r15d
  const _LARGE_INTEGER *v9; // r8
  char v10; // r13
  int v11; // esi
  int v12; // ebx
  unsigned __int8 v13; // r8
  unsigned int v14; // esi
  unsigned int v15; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  NTSTATUS v17; // ebx
  unsigned __int8 v18; // r8
  FxTagTracker *m_TargetCompletionContext; // rcx
  const void *_a1; // rax
  const void *_a2; // rdx
  const _GUID *v23; // r8
  _FX_DRIVER_GLOBALS *v24; // r10
  unsigned __int64 ObjectHandleUnchecked; // rax
  _FX_DRIVER_GLOBALS *v26; // r10
  FxRequestBase *v27; // rdx
  unsigned __int64 v28; // rax
  const void *v29; // r11
  FxRequestBase *v30; // r10
  unsigned __int8 v31; // dl
  unsigned __int8 v32; // r8
  FxTargetSubmitSyncParams params; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+D0h] [rbp+67h] BYREF
  unsigned __int8 irql; // [rsp+D8h] [rbp+6Fh] BYREF
  int status; // [rsp+E0h] [rbp+77h] BYREF
  __int64 timeout; // [rsp+E8h] [rbp+7Fh] BYREF

  v4 = 0;
  params.SynchEvent.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&params.SynchEvent.m_Event.m_Event, SynchronizationEvent, 0);
  params.SynchEvent.m_Event.m_DbgFlagIsInitialized = 1;
  timeout = 0LL;
  memset(&params.Status, 0, 24);
  irql = 0;
  status = 0;
  v9 = &WPP_FxIoTarget_cpp_Traceguids;
  if ( this->m_Globals->FxVerboseOn )
  {
    FxObject::GetObjectHandleUnchecked(Request);
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(v24, 5u, 0xEu, 0x24u, v23, _a1, _a2);
  }
  v10 = Request->m_RequestBaseFlags & 0x10;
  if ( Action )
    v11 = *Action;
  else
    v11 = 0;
  if ( Options && (Options->Flags & 1) != 0 && Options->Timeout )
  {
    timeout = Options->Timeout;
    v11 |= 0x10u;
  }
  if ( (v11 & 0x20) != 0 )
  {
    params.OrigTargetCompletionContext = Request->m_TargetCompletionContext;
    params.OrigTargetCompletionRoutine = Request->m_CompletionRoutine.m_Completion;
  }
  else
  {
    params.OrigTargetCompletionContext = 0LL;
    params.OrigTargetCompletionRoutine = 0LL;
  }
  Request->m_CompletionRoutine.m_Completion = (void (__fastcall *)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *))FxIoTarget::_SyncCompletionRoutine;
  Request->m_TargetCompletionContext = &params;
  if ( Options )
    v4 = Options->Flags & 0xFFFFFFFE;
  PreviousIrql = 0;
  FxNonPagedObject::Lock(this, &PreviousIrql, (unsigned __int8)v9);
  v12 = FxIoTarget::SubmitLocked(this, (unsigned __int64)Request, Options, v4);
  FxNonPagedObject::Unlock(this, PreviousIrql, v13);
  v14 = v12 | v11;
  if ( this->m_Globals->FxVerboseOn )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(Request);
    v27 = Request;
    if ( ObjectHandleUnchecked )
      v27 = (FxRequestBase *)ObjectHandleUnchecked;
    WPP_IFR_SF_qD(v26, (unsigned __int8)v27, 0xEu, 0x26u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v27, v14);
  }
  v15 = _InterlockedIncrement(&Request->m_Refcnt);
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
        v15);
  }
  if ( (v14 & 1) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      v28 = FxObject::GetObjectHandleUnchecked(Request);
      v30 = Request;
      if ( v28 )
        v30 = (FxRequestBase *)v28;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x27u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v30, v29);
    }
    this->Send(this, Request->m_Irp.m_Irp);
    goto LABEL_16;
  }
  if ( (v14 & 2) != 0 )
  {
LABEL_16:
    v14 |= 0xCu;
    goto LABEL_17;
  }
  if ( (v14 & 0x20) != 0 )
  {
    Request->m_TargetCompletionContext = params.OrigTargetCompletionContext;
    Request->m_CompletionRoutine.m_Completion = params.OrigTargetCompletionRoutine;
  }
LABEL_17:
  if ( (v14 & 4) != 0 )
  {
    if ( (v14 & 8) != 0 )
    {
      KeEnterCriticalRegion();
      v17 = KeWaitForSingleObject(
              &params,
              Executive,
              0,
              0,
              (PLARGE_INTEGER)((unsigned __int64)&timeout & -(__int64)((v14 & 0x10) != 0)));
      KeLeaveCriticalRegion();
      status = v17;
      if ( v17 == 258 )
      {
        FxNonPagedObject::Lock(this, &irql, v18);
        v31 = irql;
        Request->m_TargetFlags |= 8u;
        FxNonPagedObject::Unlock(this, v31, v32);
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
  if ( v10 )
    FxRequestBase::ContextReleaseAndRestore(Request);
  return (unsigned int)status;
}
