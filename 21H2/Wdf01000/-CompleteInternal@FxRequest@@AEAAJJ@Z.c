/*
 * XREFs of ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008890
 * Callers:
 *     imp_WdfRequestCompleteWithInformation @ 0x1C0007410 (imp_WdfRequestCompleteWithInformation.c)
 *     imp_WdfRequestComplete @ 0x1C00087D0 (imp_WdfRequestComplete.c)
 *     ?CompleteWithPriority@FxRequest@@QEAAJJD@Z @ 0x1C00383B4 (-CompleteWithPriority@FxRequest@@QEAAJJD@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0063FCC (-Complete@FxRequest@@QEAAJJ@Z.c)
 * Callees:
 *     ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x1C00049B4 (-_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0008CE0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0008EB8 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009550 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C000AA34 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C000AA68 (-ParentDeleteEvent@FxObject@@AEAAXXZ.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C000AB04 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0016980 (WPP_IFR_SF_qqLL.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C00196F8 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?PreProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C00385B6 (-PreProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C005B340 (WPP_IFR_SF_D.c)
 *     ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C00687F0 (-PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     WPP_IFR_SF_qqDqq @ 0x1C0068C50 (WPP_IFR_SF_qqDqq.c)
 *     WPP_IFR_SF_qqqi @ 0x1C0068D80 (WPP_IFR_SF_qqqi.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C006D224 (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006D914 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006DC28 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C006E3C4 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C006E6F0 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C008F224 (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C7300 (-Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z @ 0x1C00C7374 (-Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C89A8 (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxRequest::CompleteInternal(FxRequest *this, _FX_DRIVER_GLOBALS *Status)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  unsigned int v3; // r15d
  _IRP *_a2; // rbp
  _IRP *m_Irp; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IRP *v8; // r9
  unsigned __int8 m_IrpAllocation; // al
  FxRequestCompletionState m_CompletionState; // esi
  FxIoQueue *m_IoQueue; // rdi
  FxRequestCompletionState v12; // r12d
  bool v13; // zf
  FxRequestContext *m_RequestContext; // rcx
  __int64 v15; // rdx
  KIRQL v16; // r13
  FxObject *m_ParentObject; // rcx
  unsigned __int16 m_ObjectFlags; // ax
  unsigned __int16 v19; // cx
  _LIST_ENTRY *p_m_ChildListHead; // r14
  _LIST_ENTRY *Flink; // rcx
  _IRP *v22; // rcx
  FxDeviceBase *m_DeviceBase; // r14
  unsigned __int8 v24; // r8
  _FX_DRIVER_GLOBALS *v25; // rdx
  unsigned __int8 v26; // r8
  _LIST_ENTRY *p_m_OwnerListEntry2; // rax
  _LIST_ENTRY *v28; // rcx
  _LIST_ENTRY *Blink; // rdx
  unsigned __int16 v30; // ax
  unsigned int v32; // edx
  FxPkgGeneral *m_Lock; // rbp
  const void *_a1; // rcx
  _IRP *v35; // rax
  _FX_DRIVER_GLOBALS *v36; // rcx
  const void *v37; // rdx
  _FX_DRIVER_GLOBALS *v38; // rdx
  _FX_DRIVER_GLOBALS *v39; // rcx
  const void *v40; // rdx
  _FX_DRIVER_GLOBALS *v41; // r10
  const void *v42; // rdx
  _LIST_ENTRY *v43; // rax
  unsigned __int8 m_RequestBaseFlags; // cl
  const void *id; // rdi
  __int64 v46; // rax
  _IRP *v47; // rax
  unsigned __int64 v48; // r15
  const void *v49; // rcx
  unsigned __int8 v50; // cl
  __int64 v51; // rbp
  _MDL *v52; // rsi
  const void *v53; // rdi
  WDFMEMORY__ *v54; // rax
  unsigned __int8 v55; // dl
  unsigned int v56; // r8d
  __int64 v57; // rbp
  _MDL *v58; // rsi
  const void *v59; // rdi
  WDFMEMORY__ *v60; // rax
  unsigned __int8 v61; // dl
  unsigned int v62; // r8d
  FxTagTracker *m_DeviceObject; // rcx
  FxVerifierLock *v64; // rcx
  FxVerifierLock *v65; // rcx
  KIRQL v66; // al
  FxObject *v67; // rcx
  KIRQL v68; // si
  _FX_DRIVER_GLOBALS *v69; // rcx
  const void *v70; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]
  const _GUID *traceGuida; // [rsp+20h] [rbp-68h]
  FxIrp irp; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+98h] [rbp+10h] BYREF
  _FX_DRIVER_GLOBALS *v75; // [rsp+A0h] [rbp+18h]

  m_Globals = this->m_Globals;
  v3 = (unsigned int)Status;
  _a2 = this->m_Irp.m_Irp;
  v75 = m_Globals;
  m_Irp = _a2;
  if ( !m_Globals->FxVerifierOn
    || (FxRequest::Vf_VerifyCompleteInternal(this, Status, (int)Status),
        m_Irp = this->m_Irp.m_Irp,
        !m_Globals->FxVerifierOn) )
  {
    this->m_Completed = 1;
  }
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  v8 = 0LL;
  if ( CurrentStackLocation->MajorFunction == 14
    && (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) == 0
    && m_Irp->RequestorMode == 1
    && !CurrentStackLocation->Parameters.Read.Length
    && (m_Irp->Flags & 0x40) != 0 )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 2u, 0x10u, 0x10u, WPP_FxRequest_cpp_Traceguids, _a1, _a2);
    v35 = this->m_Irp.m_Irp;
    if ( v35->IoStatus.Information )
    {
      FxVerifierDbgBreakPoint(m_Globals);
      v35 = this->m_Irp.m_Irp;
    }
    v35->Flags &= ~0x40u;
    v8 = 0LL;
  }
  if ( (v3 & 0xFFF0000) == 0x200000 )
  {
    WPP_IFR_SF_D(m_Globals, (unsigned __int8)Status, 0x10u, 0x11u, WPP_FxRequest_cpp_Traceguids, v3);
    switch ( v3 )
    {
      case 0xC0200201:
        v3 = -1073741595;
        break;
      case 0xC0200203:
      case 0xC0200204:
        v3 = -2147483631;
        break;
      case 0xC020020A:
      case 0xC0200213:
        goto LABEL_73;
      case 0xC0200214:
        v3 = -1073741670;
        break;
      default:
        WPP_IFR_SF_D(m_Globals, 0xC0000000, 0x10u, 0x12u, WPP_FxRequest_cpp_Traceguids, v3);
LABEL_73:
        v3 = -1073741808;
        break;
    }
    WPP_IFR_SF_d(m_Globals, 2u, 0x10u, 0x13u, WPP_FxRequest_cpp_Traceguids, v3);
    v8 = 0LL;
  }
  m_IrpAllocation = this->m_IrpAllocation;
  if ( !m_IrpAllocation )
  {
    m_CompletionState = this->m_CompletionState;
    m_IoQueue = this->m_IoQueue;
    v12 = m_CompletionState;
LABEL_9:
    v13 = this->m_Reserved == 0;
    this->m_CompletionState = 0;
    if ( v13 )
      this->m_IoQueue = 0LL;
    goto LABEL_11;
  }
  if ( !this->m_CanComplete )
  {
    FxVerifierDbgBreakPoint(m_Globals);
    m_IrpAllocation = this->m_IrpAllocation;
    v8 = 0LL;
  }
  m_CompletionState = this->m_CompletionState;
  m_IoQueue = this->m_IoQueue;
  v12 = m_CompletionState;
  if ( !m_IrpAllocation )
    goto LABEL_9;
LABEL_11:
  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext )
  {
    ((void (__fastcall *)(FxRequestContext *, FxRequest *, _IRP *, _QWORD))m_RequestContext->ReleaseAndRestore)(
      m_RequestContext,
      this,
      m_Irp,
      0LL);
    v8 = 0LL;
  }
  if ( !this->m_Presented )
    FxObject::ClearEvtCallbacks(this);
  v15 = 1LL;
  if ( this->m_Reserved || this->m_IrpAllocation )
    goto LABEL_30;
  v16 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  if ( this->m_ObjectState != 1 )
    goto LABEL_88;
  m_ParentObject = this->m_ParentObject;
  if ( m_ParentObject )
  {
    if ( FxObject::RemoveChildObjectInternal(m_ParentObject, this) == -1073741738 )
    {
      FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForEarlyDispose);
LABEL_88:
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v16);
LABEL_89:
      v38 = this->m_Globals;
      if ( v38->FxVerifierOn )
        FxRequest::Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred(this, v38);
      goto LABEL_27;
    }
    this->m_ParentObject = 0LL;
  }
  m_ObjectFlags = this->m_ObjectFlags | 0x100;
  this->m_ObjectFlags = m_ObjectFlags;
  if ( (m_ObjectFlags & 0x200) != 0 )
  {
    v36 = this->m_Globals;
    if ( v36->FxVerboseOn )
    {
      v37 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v37 = 0LL;
      WPP_IFR_SF_qqLL(v36, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v37, this->m_ObjectState, 3u);
      m_ObjectFlags = this->m_ObjectFlags;
    }
    if ( (m_ObjectFlags & 0x80u) != 0 )
    {
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ForwardProgressQueue) - 32) = 3;
      m_ObjectFlags = this->m_ObjectFlags;
    }
  }
  this->m_ObjectState = 3;
  if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && v16 )
  {
    FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDisposing);
    goto LABEL_88;
  }
  if ( (m_ObjectFlags & 0x200) != 0 )
  {
    v39 = this->m_Globals;
    if ( v39->FxVerboseOn )
    {
      v40 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v40 = 0LL;
      WPP_IFR_SF_qqLL(v39, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v40, 3u, 4u);
      m_ObjectFlags = this->m_ObjectFlags;
    }
    if ( (m_ObjectFlags & 0x80u) != 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ForwardProgressQueue) - 32) = 4;
  }
  this->m_ObjectState = 4;
  if ( !FxObject::DisposeChildrenWorker(this, FxObjectStateDeferedDisposing, v16, 1u) )
    goto LABEL_89;
  v19 = this->m_ObjectFlags;
  if ( (v19 & 0x104) == 0x104 )
  {
    FxObject::DeletedAndDisposedWorkerLocked(this, v16, 0);
  }
  else
  {
    if ( (v19 & 0x200) != 0 )
    {
      v41 = this->m_Globals;
      if ( v41->FxVerboseOn )
      {
        v42 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v42 = 0LL;
        WPP_IFR_SF_qqLL(v41, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v42, this->m_ObjectState, 2u);
        v19 = this->m_ObjectFlags;
      }
      if ( (v19 & 0x80u) != 0 )
        *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ForwardProgressQueue) - 32) = 2;
    }
    this->m_ObjectState = 2;
  }
LABEL_27:
  p_m_ChildListHead = &this->m_ChildListHead;
  while ( 1 )
  {
    Flink = p_m_ChildListHead->Flink;
    if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
      break;
    if ( Flink->Blink != p_m_ChildListHead )
      goto LABEL_132;
    v43 = Flink->Flink;
    if ( Flink->Flink->Blink != Flink )
      goto LABEL_132;
    p_m_ChildListHead->Flink = v43;
    v43->Blink = p_m_ChildListHead;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    FxObject::ParentDeleteEvent((FxObject *)&Flink[-5].Blink);
  }
  m_Globals = v75;
  v15 = 1LL;
  v8 = 0LL;
LABEL_30:
  if ( this->m_IrpReferenceCount )
  {
    m_RequestBaseFlags = this->m_RequestBaseFlags;
    if ( (m_RequestBaseFlags & 2) != 0 || (this->m_RequestBaseStaticFlags & 2) != 0 )
    {
      v46 = ((__int64 (__fastcall *)(FxRequestOutputBuffer *, __int64, _IRP *, _IRP *))this->m_OutputBuffer.GetHandle)(
              &this->m_OutputBuffer,
              1LL,
              m_Irp,
              v8);
      m_RequestBaseFlags = this->m_RequestBaseFlags;
      v8 = 0LL;
      id = (const void *)v46;
    }
    else
    {
      id = v8;
    }
    if ( (m_RequestBaseFlags & 1) != 0 || (this->m_RequestBaseStaticFlags & 1) != 0 )
    {
      v47 = (_IRP *)((__int64 (__fastcall *)(FxRequestSystemBuffer *, __int64))this->m_SystemBuffer.GetHandle)(
                      &this->m_SystemBuffer,
                      v15);
      v8 = 0LL;
    }
    else
    {
      v47 = v8;
    }
    v48 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v49 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v49 = v8;
    WPP_IFR_SF_qqDqq(
      m_Globals,
      this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
      (unsigned int)this->m_Irp.m_Irp,
      (unsigned __int16)v8,
      traceGuid,
      v49,
      this->m_Irp.m_Irp,
      this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
      v47,
      id);
    v50 = this->m_RequestBaseFlags;
    if ( (v50 & 1) != 0 || (this->m_RequestBaseStaticFlags & 1) != 0 )
    {
      v51 = this->m_SystemBuffer.GetBufferSize(&this->m_SystemBuffer);
      v52 = this->m_SystemBuffer.GetMdl(&this->m_SystemBuffer);
      v53 = (const void *)this->m_SystemBuffer.GetBuffer(&this->m_SystemBuffer);
      v54 = this->m_SystemBuffer.GetHandle(&this->m_SystemBuffer);
      WPP_IFR_SF_qqqi(m_Globals, v55, v56, 0x15u, traceGuida, v54, v53, v52, v51);
      v50 = this->m_RequestBaseFlags;
    }
    if ( (v50 & 2) != 0 || (this->m_RequestBaseStaticFlags & 2) != 0 )
    {
      v57 = this->m_OutputBuffer.GetBufferSize(&this->m_OutputBuffer);
      v58 = this->m_OutputBuffer.GetMdl(&this->m_OutputBuffer);
      v59 = (const void *)this->m_OutputBuffer.GetBuffer(&this->m_OutputBuffer);
      v60 = this->m_OutputBuffer.GetHandle(&this->m_OutputBuffer);
      WPP_IFR_SF_qqqi(m_Globals, v61, v62, 0x16u, traceGuida, v60, v59, v58, v57);
    }
    if ( !this->m_ObjectSize )
      v48 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_VERIFIER_FATAL_ERROR, v48, this->m_IrpReferenceCount);
  }
  irp.m_Irp = _a2;
  _a2->IoStatus.Status = v3;
  if ( this->m_IrpAllocation )
  {
    FxRequest::PreProcessCompletionForDriverRequest(this, v12, m_IoQueue);
    return v3;
  }
  v22 = irp.m_Irp;
  this->m_Irp.m_Irp = v8;
  if ( v22->Tail.Overlay.CurrentStackLocation->MajorFunction )
  {
    m_DeviceBase = (FxDeviceBase *)v8;
  }
  else
  {
    m_DeviceBase = this->m_DeviceBase;
    v32 = _InterlockedIncrement(&m_DeviceBase->m_Refcnt);
    if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0 )
    {
      m_DeviceObject = (FxTagTracker *)m_DeviceBase[-1].m_AttachedDevice.m_DeviceObject;
      if ( m_DeviceObject )
        FxTagTracker::UpdateTagHistory(
          m_DeviceObject,
          &irp,
          858,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
          (FxTagRefType)v8,
          v32);
    }
    v22 = irp.m_Irp;
    m_Lock = (FxPkgGeneral *)m_DeviceBase[3].m_SpinLock.m_Lock;
    if ( irp.m_Irp->IoStatus.Status < 0 )
    {
      FxFileObject::_DestroyFileObject(
        m_Lock->m_Device,
        (_WDF_FILEOBJECT_CLASS)m_Lock->m_DeviceBase[1].m_DisposeSingleEntry.Next,
        irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject);
      FxPkgGeneral::DecrementOpenHandleCount(m_Lock);
      v22 = irp.m_Irp;
    }
  }
  IofCompleteRequest(v22, this->m_PriorityBoost);
  irp.m_Irp = 0LL;
  if ( this->m_Reserved )
  {
    FxRequest::PostProcessCompletionForReserved(this, v12, m_IoQueue);
  }
  else
  {
    if ( m_CompletionState )
    {
      if ( (v12 & 0x80u) == 0 )
      {
        v25 = m_IoQueue->m_Globals;
        PreviousIrql = 0;
        if ( v25->FxVerifierOn )
          FxIoQueue::Vf_VerifyValidateCompletedRequest(m_IoQueue, v25, this);
        if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
          && (v64 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Lock(v64, &PreviousIrql, v24);
        }
        else
        {
          PreviousIrql = KeAcquireSpinLockRaiseToDpc(&m_IoQueue->m_NPLock.m_Lock);
        }
        p_m_OwnerListEntry2 = &this->m_OwnerListEntry2;
        v28 = this->m_OwnerListEntry2.Flink;
        if ( v28->Blink != &this->m_OwnerListEntry2
          || (Blink = this->m_OwnerListEntry2.Blink, Blink->Flink != p_m_OwnerListEntry2) )
        {
LABEL_132:
          __fastfail(3u);
        }
        Blink->Flink = v28;
        v28->Blink = Blink;
        this->m_OwnerListEntry2.Blink = &this->m_OwnerListEntry2;
        p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
        --m_IoQueue->m_DriverIoCount;
        if ( m_IoQueue->m_Dispatching )
        {
          if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
            && (v65 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Unlock(v65, PreviousIrql, v26);
          }
          else
          {
            KeReleaseSpinLock(&m_IoQueue->m_NPLock.m_Lock, PreviousIrql);
          }
        }
        else
        {
          FxIoQueue::DispatchEvents(m_IoQueue, PreviousIrql, 0LL);
        }
      }
      this->m_ObjectFlags |= 4u;
      v30 = this->m_ObjectFlags;
      if ( !this->m_ParentObject )
        goto LABEL_47;
      v66 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
      v67 = this->m_ParentObject;
      v68 = v66;
      if ( v67 )
      {
        if ( FxObject::RemoveChildObjectInternal(v67, this) == -1073741738 )
        {
          FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForParentDeleteAndDisposed);
          KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v68);
          goto LABEL_49;
        }
        this->m_ParentObject = 0LL;
      }
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v68);
      v30 = this->m_ObjectFlags;
LABEL_47:
      if ( (v30 & 0x200) != 0 )
      {
        v69 = this->m_Globals;
        if ( v69->FxVerboseOn )
        {
          v70 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v70 = 0LL;
          WPP_IFR_SF_qqLL(v69, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v70, this->m_ObjectState, 0xAu);
          v30 = this->m_ObjectFlags;
        }
        if ( (v30 & 0x80u) != 0 )
          *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ForwardProgressQueue) - 32) = 10;
      }
      this->m_ObjectState = 10;
      FxObject::DestroyChildren(this);
      this->Release(this, 0LL, 1246, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
      goto LABEL_49;
    }
    FxObject::AddRef(this, (void *)0x706D6F43, 925, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    this->DeleteObject(this);
  }
LABEL_49:
  if ( m_DeviceBase )
    m_DeviceBase->Release(m_DeviceBase, &irp, 879, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
  return v3;
}
