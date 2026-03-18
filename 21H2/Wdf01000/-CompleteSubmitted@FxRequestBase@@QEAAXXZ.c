/*
 * XREFs of ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0004590
 * Callers:
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0004E70 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C000EAFC (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0073F28 (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C00742EC (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0074894 (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?VerifierClearFormatted@FxRequestBase@@QEAAXXZ @ 0x1C001ACFC (-VerifierClearFormatted@FxRequestBase@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxRequestBase::CompleteSubmitted(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxIoTarget *m_Target; // rdi
  FxRequestContext *m_RequestContext; // rcx
  void (__fastcall *m_Completion)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *); // rsi
  _IRP *v6; // rax
  _WDF_REQUEST_COMPLETION_PARAMS *p_m_CompletionParams; // r8
  void *m_TargetCompletionContext; // r9
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r10
  _IO_STATUS_BLOCK IoStatus; // xmm0
  FxIoTarget *v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
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
  if ( m_RequestContext )
  {
    m_RequestContext->m_CompletionParams.IoStatus = this->m_Irp.m_Irp->IoStatus;
    this->m_RequestContext->CopyParameters(this->m_RequestContext, this);
    m_Completion = this->m_CompletionRoutine.m_Completion;
    if ( !m_Completion )
      goto LABEL_13;
    m_TargetCompletionContext = this->m_TargetCompletionContext;
    p_m_CompletionParams = &this->m_RequestContext->m_CompletionParams;
    v13 = 0LL;
    this->m_CompletionRoutine.m_Completion = 0LL;
    this->m_TargetCompletionContext = 0LL;
    if ( m_Target->m_ObjectSize )
      v13 = (unsigned __int64)m_Target ^ 0xFFFFFFFFFFFFFFF8uLL;
    v14 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !this->m_ObjectSize )
      v14 = 0LL;
    goto LABEL_12;
  }
  m_Completion = this->m_CompletionRoutine.m_Completion;
  if ( m_Completion )
  {
    v6 = this->m_Irp.m_Irp;
    p_m_CompletionParams = (_WDF_REQUEST_COMPLETION_PARAMS *)v16;
    m_TargetCompletionContext = this->m_TargetCompletionContext;
    v9 = 0LL;
    memset(v18, 0, sizeof(v18));
    v10 = 0LL;
    v16[0] = 0;
    v16[1] = 255;
    IoStatus = v6->IoStatus;
    v12 = this->m_Target;
    this->m_CompletionRoutine.m_Completion = 0LL;
    this->m_TargetCompletionContext = 0LL;
    v17 = IoStatus;
    memset(v18, 0, sizeof(v18));
    if ( v12->m_ObjectSize )
      v10 = (unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( this->m_ObjectSize )
      v9 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v13 = v10;
    v14 = v9;
LABEL_12:
    m_Completion((WDFREQUEST__ *)v14, (WDFIOTARGET__ *)v13, p_m_CompletionParams, m_TargetCompletionContext);
  }
LABEL_13:
  this->Release(this, m_Target, 530, "minkernel\\wdf\\framework\\shared\\core\\fxrequestbase.cpp");
}
