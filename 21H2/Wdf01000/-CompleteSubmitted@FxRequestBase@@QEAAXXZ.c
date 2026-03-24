/*
 * XREFs of ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0009160
 * Callers:
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C000C770 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C00192EC (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0065508 (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C00659EC (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0065FEC (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?VerifierClearFormatted@FxRequestBase@@QEAAXXZ @ 0x1C001985C (-VerifierClearFormatted@FxRequestBase@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxRequestBase::CompleteSubmitted(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxIoTarget *m_Target; // rdi
  FxRequestContext *m_RequestContext; // rcx
  void (__fastcall *m_Completion)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *); // rsi
  void *m_TargetCompletionContext; // r9
  FxRequestContext *v7; // r8
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  _WDF_REQUEST_COMPLETION_PARAMS *p_m_CompletionParams; // r8
  _IRP *v11; // rax
  unsigned __int64 v12; // r10
  _IO_STATUS_BLOCK IoStatus; // xmm0
  FxIoTarget *v14; // rax
  _IRP *m_Irp; // rax
  _DWORD v16[2]; // [rsp+30h] [rbp-58h] BYREF
  _IO_STATUS_BLOCK v17; // [rsp+38h] [rbp-50h]
  _OWORD v18[3]; // [rsp+48h] [rbp-40h] BYREF

  m_Globals = this->m_Globals;
  m_Target = this->m_Target;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
    m_Globals = this->m_Globals;
  }
  if ( m_Globals->FxVerifierOn )
  {
    m_Irp = this->m_Irp.m_Irp;
    m_Irp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry = 0LL;
    *((_OWORD *)&m_Irp->Tail.CompletionKey + 1) = 0LL;
    FxRequestBase::VerifierClearFormatted(this);
  }
  m_RequestContext = this->m_RequestContext;
  if ( !m_RequestContext )
  {
    m_Completion = this->m_CompletionRoutine.m_Completion;
    if ( !m_Completion )
      goto LABEL_12;
    v11 = this->m_Irp.m_Irp;
    p_m_CompletionParams = (_WDF_REQUEST_COMPLETION_PARAMS *)v16;
    m_TargetCompletionContext = this->m_TargetCompletionContext;
    memset(v18, 0, sizeof(v18));
    v12 = 0LL;
    v16[0] = 0;
    v16[1] = 255;
    IoStatus = v11->IoStatus;
    v14 = this->m_Target;
    this->m_TargetCompletionContext = 0LL;
    v17 = IoStatus;
    memset(v18, 0, sizeof(v18));
    if ( v14->m_ObjectSize )
      v12 = (unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL;
    v9 = 0LL;
    if ( this->m_ObjectSize )
      v9 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v8 = v12;
    goto LABEL_11;
  }
  m_RequestContext->m_CompletionParams.IoStatus = this->m_Irp.m_Irp->IoStatus;
  this->m_RequestContext->CopyParameters(this->m_RequestContext, this);
  m_Completion = this->m_CompletionRoutine.m_Completion;
  if ( m_Completion )
  {
    m_TargetCompletionContext = this->m_TargetCompletionContext;
    v7 = this->m_RequestContext;
    v8 = 0LL;
    this->m_TargetCompletionContext = 0LL;
    if ( m_Target->m_ObjectSize )
      v8 = (unsigned __int64)m_Target ^ 0xFFFFFFFFFFFFFFF8uLL;
    v9 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    p_m_CompletionParams = &v7->m_CompletionParams;
    if ( !this->m_ObjectSize )
      v9 = 0LL;
LABEL_11:
    this->m_CompletionRoutine.m_Completion = 0LL;
    m_Completion((WDFREQUEST__ *)v9, (WDFIOTARGET__ *)v8, p_m_CompletionParams, m_TargetCompletionContext);
  }
LABEL_12:
  this->Release(this, m_Target, 530, "minkernel\\wdf\\framework\\shared\\core\\fxrequestbase.cpp");
}
