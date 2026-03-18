/*
 * XREFs of ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0010358
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00101E0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x1C0074ED0 (-Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C0007230 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0008700 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C0068670 (-FreeRequest@FxRequest@@QEAAXXZ.c)
 *     ?DispatchToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP@@@Z @ 0x1C0081530 (-DispatchToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IR.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1C0081718 (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C008280C (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxPkgIo::DispatchStep2(
        FxPkgIo *this,
        _IRP *Irp,
        FxIoInCallerContext *IoInCallerCtx,
        FxIoQueue *Queue)
{
  char v4; // r13
  bool v9; // r15
  FxCxDeviceInfo *m_CxDeviceInfo; // rax
  FxDevice *m_Device; // rcx
  _WDF_OBJECT_ATTRIBUTES *p_RequestAttributes; // rdx
  int v13; // eax
  unsigned __int8 v14; // r8
  FxRequest *v15; // rsi
  int _a1; // ebx
  int v17; // eax
  int ReservedRequest; // eax
  WDFQUEUE__ *ObjectHandleUnchecked; // rax
  WDFREQUEST__ *v21; // r8
  FxRequest *request; // [rsp+60h] [rbp+8h] BYREF

  request = 0LL;
  v4 = 0;
  v9 = Queue && Queue->m_SupportForwardProgress;
  if ( KeGetCurrentIrql() <= 1u )
  {
    KeEnterCriticalRegion();
    v4 = 1;
  }
  if ( Queue && (m_CxDeviceInfo = Queue->m_CxDeviceInfo) != 0LL )
  {
    m_Device = this->m_Device;
    p_RequestAttributes = &m_CxDeviceInfo->RequestAttributes;
  }
  else
  {
    m_Device = this->m_Device;
    p_RequestAttributes = &m_Device->m_RequestAttributes;
  }
  v13 = FxRequest::_CreateForPackage(m_Device, p_RequestAttributes, Irp, (FX_POOL ***)&request);
  v15 = request;
  _a1 = v13;
  if ( v9 )
  {
    if ( v13 < 0 )
    {
LABEL_25:
      if ( this->m_Filter && !Queue )
        goto LABEL_29;
      if ( !v9 )
      {
        WPP_IFR_SF_d(this->m_Globals, 2u, 0xDu, 0x10u, WPP_FxPkgIo_cpp_Traceguids, _a1);
        goto LABEL_29;
      }
LABEL_30:
      ReservedRequest = FxIoQueue::GetReservedRequest(Queue, Irp, &request);
      _a1 = ReservedRequest;
      if ( ReservedRequest == 259 )
        goto $IrpIsGone;
      if ( ReservedRequest >= 0 )
      {
        v15 = request;
        goto LABEL_13;
      }
LABEL_29:
      Irp->IoStatus.Information = 0LL;
      Irp->IoStatus.Status = _a1;
      IofCompleteRequest(Irp, 0);
      goto $IrpIsGone;
    }
    if ( (this->m_Globals->FxEnhancedVerifierOptions & 0xF0000) == 0 )
      goto LABEL_12;
    _a1 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(this, request);
  }
  if ( _a1 < 0 )
    goto LABEL_25;
  if ( v9 )
  {
LABEL_12:
    if ( !Queue->m_FwdProgContext->m_IoResourcesAllocate.Method )
      goto LABEL_13;
    v15->m_Presented = 1;
    FxObject::GetObjectHandleUnchecked(v15);
    ObjectHandleUnchecked = (WDFQUEUE__ *)FxObject::GetObjectHandleUnchecked(Queue);
    if ( Queue->m_FwdProgContext->m_IoResourcesAllocate.Method(ObjectHandleUnchecked, v21) >= 0 )
      goto LABEL_13;
    FxRequest::FreeRequest(v15);
    request = 0LL;
    goto LABEL_30;
  }
LABEL_13:
  if ( IoInCallerCtx && IoInCallerCtx->m_Method && !v15->m_Reserved )
  {
    v15->m_InternalContext = Queue;
    v17 = FxPkgIo::DispatchToInCallerContextCallback(this, IoInCallerCtx, v15, Irp);
  }
  else
  {
    v17 = FxIoQueue::QueueRequest(Queue, v15, v14);
  }
  _a1 = v17;
$IrpIsGone:
  if ( v4 )
    KeLeaveCriticalRegion();
  return (unsigned int)_a1;
}
