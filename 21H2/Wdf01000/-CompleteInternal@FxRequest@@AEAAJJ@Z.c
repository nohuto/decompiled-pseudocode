/*
 * XREFs of ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007EE0
 * Callers:
 *     imp_WdfRequestComplete @ 0x1C0005B30 (imp_WdfRequestComplete.c)
 *     imp_WdfRequestCompleteWithInformation @ 0x1C0007E10 (imp_WdfRequestCompleteWithInformation.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0049B14 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?CompleteWithPriority@FxRequest@@QEAAJJD@Z @ 0x1C0049BBC (-CompleteWithPriority@FxRequest@@QEAAJJD@Z.c)
 * Callees:
 *     ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C00040D8 (-ParentDeleteEvent@FxObject@@AEAAXXZ.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00041EC (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C00082F0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C00083F0 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0012660 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_qq @ 0x1C0013DA4 (WPP_IFR_SF_qq.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C00155E4 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E65C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0039220 (WPP_IFR_SF_D.c)
 *     ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C004EFA4 (-PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     ?PreProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C004F008 (-PreProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@.c)
 *     WPP_IFR_SF_qqDqq @ 0x1C004F65C (WPP_IFR_SF_qqDqq.c)
 *     WPP_IFR_SF_qqqi @ 0x1C004F78C (WPP_IFR_SF_qqqi.c)
 *     ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x1C0053328 (-_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0059258 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C005A288 (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005A978 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005AC78 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C005B47C (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005B788 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C008DBB8 (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6204 (-Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z @ 0x1C00C6278 (-Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C78DC (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxRequest::CompleteInternal(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *Status,
        __int64 a3,
        unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  unsigned int v5; // ebp
  _IRP *_a2; // r13
  __int64 m_Irp; // rdx
  _IRP *v9; // r8
  __int64 v10; // rcx
  unsigned __int8 m_IrpAllocation; // al
  FxRequestCompletionState m_CompletionState; // r15d
  FxIoQueue *m_IoQueue; // rdi
  FxRequestContext *m_RequestContext; // rcx
  KIRQL v15; // si
  FxObject *m_ParentObject; // rcx
  unsigned __int16 m_ObjectFlags; // ax
  unsigned __int16 v18; // cx
  char v19; // al
  _LIST_ENTRY *p_m_ChildListHead; // rsi
  _LIST_ENTRY *Flink; // rcx
  _IRP *v22; // rcx
  FxDeviceBase *m_DeviceBase; // rsi
  unsigned __int8 v24; // r8
  _FX_DRIVER_GLOBALS *v25; // rdx
  unsigned __int8 v26; // r8
  _LIST_ENTRY *p_m_OwnerListEntry2; // rax
  _LIST_ENTRY *v28; // rcx
  _LIST_ENTRY *Blink; // rdx
  unsigned __int16 v30; // ax
  unsigned int v32; // edx
  FxPkgGeneral *m_Lock; // r14
  const void *_a1; // rcx
  _IRP *v35; // rax
  _FX_DRIVER_GLOBALS *v36; // rcx
  const void *v37; // rdx
  _FX_DRIVER_GLOBALS *v38; // rcx
  const void *v39; // rdx
  _FX_DRIVER_GLOBALS *v40; // r10
  const void *v41; // rdx
  _LIST_ENTRY *v42; // rax
  unsigned __int8 m_RequestBaseFlags; // cl
  const void *id; // rdi
  __int64 v45; // rax
  WDFMEMORY__ *v46; // rax
  unsigned __int64 v47; // r15
  const void *v48; // rcx
  unsigned __int8 v49; // cl
  __int64 v50; // rbp
  _MDL *v51; // rsi
  const void *v52; // rdi
  WDFMEMORY__ *v53; // rax
  unsigned __int8 v54; // dl
  unsigned int v55; // r8d
  __int64 v56; // rbp
  _MDL *v57; // rsi
  const void *v58; // rdi
  WDFMEMORY__ *v59; // rax
  unsigned __int8 v60; // dl
  unsigned int v61; // r8d
  FxTagTracker *m_DeviceObject; // rcx
  FxVerifierLock *v63; // rcx
  FxVerifierLock *v64; // rcx
  KIRQL v65; // al
  FxObject *v66; // rcx
  KIRQL v67; // r14
  _FX_DRIVER_GLOBALS *v68; // rcx
  const void *v69; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]
  const _GUID *traceGuida; // [rsp+20h] [rbp-68h]
  unsigned __int8 PreviousIrql; // [rsp+98h] [rbp+10h] BYREF
  FxIrp irp; // [rsp+A0h] [rbp+18h] BYREF

  m_Globals = this->m_Globals;
  v5 = (unsigned int)Status;
  _a2 = this->m_Irp.m_Irp;
  if ( !m_Globals->FxVerifierOn
    || (FxRequest::Vf_VerifyCompleteInternal(this, Status, (int)Status), !m_Globals->FxVerifierOn) )
  {
    this->m_Completed = 1;
  }
  m_Irp = (__int64)this->m_Irp.m_Irp;
  v9 = 0LL;
  v10 = *(_QWORD *)(m_Irp + 184);
  if ( *(_BYTE *)v10 == 14
    && (*(_DWORD *)(v10 + 24) & 3) == 0
    && *(_BYTE *)(m_Irp + 64) == 1
    && !*(_DWORD *)(v10 + 8)
    && (*(_DWORD *)(m_Irp + 16) & 0x40) != 0 )
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
    v9 = 0LL;
  }
  if ( (v5 & 0xFFF0000) == 0x200000 )
  {
    WPP_IFR_SF_D(m_Globals, m_Irp, 0x10u, 0x11u, WPP_FxRequest_cpp_Traceguids, v5);
    switch ( v5 )
    {
      case 0xC0200201:
        v5 = -1073741595;
        break;
      case 0xC0200203:
      case 0xC0200204:
        v5 = -2147483631;
        break;
      case 0xC020020A:
      case 0xC0200213:
        goto LABEL_73;
      case 0xC0200214:
        v5 = -1073741670;
        break;
      default:
        WPP_IFR_SF_D(m_Globals, 0xC0000000, 0x10u, 0x12u, WPP_FxRequest_cpp_Traceguids, v5);
LABEL_73:
        v5 = -1073741808;
        break;
    }
    WPP_IFR_SF_d(m_Globals, 2u, 0x10u, 0x13u, WPP_FxRequest_cpp_Traceguids, v5);
    v9 = 0LL;
  }
  m_IrpAllocation = this->m_IrpAllocation;
  if ( m_IrpAllocation && !this->m_CanComplete )
  {
    FxVerifierDbgBreakPoint(m_Globals);
    m_IrpAllocation = this->m_IrpAllocation;
    v9 = 0LL;
  }
  m_CompletionState = this->m_CompletionState;
  m_IoQueue = this->m_IoQueue;
  if ( !m_IrpAllocation )
  {
    this->m_CompletionState = 0;
    if ( !this->m_Reserved )
      this->m_IoQueue = 0LL;
  }
  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext )
  {
    ((void (__fastcall *)(FxRequestContext *, FxRequest *, _QWORD))m_RequestContext->ReleaseAndRestore)(
      m_RequestContext,
      this,
      0LL);
    v9 = 0LL;
  }
  if ( !this->m_Presented )
    FxObject::ClearEvtCallbacks(this);
  if ( this->m_Reserved || this->m_IrpAllocation )
    goto LABEL_32;
  v15 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  if ( this->m_ObjectState != 1 )
    goto LABEL_88;
  m_ParentObject = this->m_ParentObject;
  if ( m_ParentObject )
  {
    if ( FxObject::RemoveChildObjectInternal(m_ParentObject, this) == -1073741738 )
    {
      FxObject::SetObjectStateLocked(this, 7u);
LABEL_88:
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v15);
LABEL_89:
      m_Irp = (__int64)this->m_Globals;
      if ( *(_BYTE *)(m_Irp + 316) )
        FxRequest::Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred(this, (_FX_DRIVER_GLOBALS *)m_Irp);
      goto LABEL_29;
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
  if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && v15 )
  {
    FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDisposing);
    goto LABEL_88;
  }
  if ( (m_ObjectFlags & 0x200) != 0 )
  {
    v38 = this->m_Globals;
    if ( v38->FxVerboseOn )
    {
      v39 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v39 = 0LL;
      WPP_IFR_SF_qqLL(v38, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v39, 3u, 4u);
      m_ObjectFlags = this->m_ObjectFlags;
    }
    if ( (m_ObjectFlags & 0x80u) != 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ForwardProgressQueue) - 32) = 4;
  }
  this->m_ObjectState = 4;
  if ( FxObject::DisposeChildrenWorker(this, FxObjectStateDeferedDisposing, v15, 1u) )
  {
    v18 = this->m_ObjectFlags;
    m_Irp = 260LL;
    if ( (v18 & 0x104) == 0x104 )
    {
      FxObject::DeletedAndDisposedWorkerLocked(this, v15, 0);
    }
    else
    {
      if ( (v18 & 0x200) != 0 )
      {
        v40 = this->m_Globals;
        if ( v40->FxVerboseOn )
        {
          v41 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v41 = 0LL;
          WPP_IFR_SF_qqLL(v40, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v41, this->m_ObjectState, 2u);
          v18 = this->m_ObjectFlags;
        }
        if ( (v18 & 0x80u) != 0 )
          *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ForwardProgressQueue) - 32) = 2;
      }
      this->m_ObjectState = 2;
    }
    v19 = 1;
  }
  else
  {
    v19 = 0;
  }
  if ( !v19 )
    goto LABEL_89;
LABEL_29:
  p_m_ChildListHead = &this->m_ChildListHead;
  while ( 1 )
  {
    Flink = p_m_ChildListHead->Flink;
    if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
      break;
    if ( Flink->Blink != p_m_ChildListHead )
      goto LABEL_134;
    v42 = Flink->Flink;
    if ( Flink->Flink->Blink != Flink )
      goto LABEL_134;
    p_m_ChildListHead->Flink = v42;
    v42->Blink = p_m_ChildListHead;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    FxObject::ParentDeleteEvent((FxObject *)&Flink[-5].Blink);
  }
  v9 = 0LL;
LABEL_32:
  if ( this->m_IrpReferenceCount )
  {
    m_RequestBaseFlags = this->m_RequestBaseFlags;
    if ( (m_RequestBaseFlags & 2) != 0 || (this->m_RequestBaseStaticFlags & 2) != 0 )
    {
      v45 = ((__int64 (__fastcall *)(FxRequestOutputBuffer *, __int64, _IRP *))this->m_OutputBuffer.GetHandle)(
              &this->m_OutputBuffer,
              m_Irp,
              v9);
      m_RequestBaseFlags = this->m_RequestBaseFlags;
      v9 = 0LL;
      id = (const void *)v45;
    }
    else
    {
      id = v9;
    }
    if ( (m_RequestBaseFlags & 1) != 0 || (this->m_RequestBaseStaticFlags & 1) != 0 )
      v46 = this->m_SystemBuffer.GetHandle(&this->m_SystemBuffer);
    else
      v46 = (WDFMEMORY__ *)v9;
    v47 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v48 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v48 = 0LL;
    WPP_IFR_SF_qqDqq(
      m_Globals,
      this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
      (unsigned int)this->m_Irp.m_Irp,
      a4,
      traceGuid,
      v48,
      this->m_Irp.m_Irp,
      this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
      v46,
      id);
    v49 = this->m_RequestBaseFlags;
    if ( (v49 & 1) != 0 || (this->m_RequestBaseStaticFlags & 1) != 0 )
    {
      v50 = this->m_SystemBuffer.GetBufferSize(&this->m_SystemBuffer);
      v51 = this->m_SystemBuffer.GetMdl(&this->m_SystemBuffer);
      v52 = (const void *)this->m_SystemBuffer.GetBuffer(&this->m_SystemBuffer);
      v53 = this->m_SystemBuffer.GetHandle(&this->m_SystemBuffer);
      WPP_IFR_SF_qqqi(m_Globals, v54, v55, 0x15u, traceGuida, v53, v52, v51, v50);
      v49 = this->m_RequestBaseFlags;
    }
    if ( (v49 & 2) != 0 || (this->m_RequestBaseStaticFlags & 2) != 0 )
    {
      v56 = this->m_OutputBuffer.GetBufferSize(&this->m_OutputBuffer);
      v57 = this->m_OutputBuffer.GetMdl(&this->m_OutputBuffer);
      v58 = (const void *)this->m_OutputBuffer.GetBuffer(&this->m_OutputBuffer);
      v59 = this->m_OutputBuffer.GetHandle(&this->m_OutputBuffer);
      WPP_IFR_SF_qqqi(m_Globals, v60, v61, 0x16u, traceGuida, v59, v58, v57, v56);
    }
    if ( !this->m_ObjectSize )
      v47 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_VERIFIER_FATAL_ERROR, v47, this->m_IrpReferenceCount);
  }
  irp.m_Irp = _a2;
  _a2->IoStatus.Status = v5;
  if ( this->m_IrpAllocation )
  {
    FxRequest::PreProcessCompletionForDriverRequest(this, m_CompletionState, m_IoQueue);
    return v5;
  }
  v22 = irp.m_Irp;
  this->m_Irp.m_Irp = v9;
  if ( v22->Tail.Overlay.CurrentStackLocation->MajorFunction )
  {
    m_DeviceBase = (FxDeviceBase *)v9;
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
          (FxTagRefType)v9,
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
    FxRequest::PostProcessCompletionForReserved(this, m_CompletionState, m_IoQueue);
  }
  else
  {
    if ( m_CompletionState )
    {
      if ( (m_CompletionState & 0x80u) == 0 )
      {
        v25 = m_IoQueue->m_Globals;
        PreviousIrql = 0;
        if ( v25->FxVerifierOn )
          FxIoQueue::Vf_VerifyValidateCompletedRequest(m_IoQueue, v25, this);
        if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
          && (v63 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Lock(v63, &PreviousIrql, v24);
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
LABEL_134:
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
            && (v64 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Unlock(v64, PreviousIrql, v26);
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
        goto LABEL_48;
      v65 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
      v66 = this->m_ParentObject;
      v67 = v65;
      if ( v66 )
      {
        if ( FxObject::RemoveChildObjectInternal(v66, this) == -1073741738 )
        {
          FxObject::SetObjectStateLocked(this, 8u);
          KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v67);
          goto LABEL_50;
        }
        this->m_ParentObject = 0LL;
      }
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v67);
      v30 = this->m_ObjectFlags;
LABEL_48:
      if ( (v30 & 0x200) != 0 )
      {
        v68 = this->m_Globals;
        if ( v68->FxVerboseOn )
        {
          v69 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v69 = 0LL;
          WPP_IFR_SF_qqLL(v68, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v69, this->m_ObjectState, 0xAu);
          v30 = this->m_ObjectFlags;
        }
        if ( (v30 & 0x80u) != 0 )
          *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ForwardProgressQueue) - 32) = 10;
      }
      this->m_ObjectState = 10;
      FxObject::DestroyChildren(this);
      this->Release(this, 0LL, 1246, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
      goto LABEL_50;
    }
    FxObject::AddRef(this, (void *)0x706D6F43, 925, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    this->DeleteObject(this);
  }
LABEL_50:
  if ( m_DeviceBase )
    m_DeviceBase->Release(m_DeviceBase, &irp, 879, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
  return v5;
}
