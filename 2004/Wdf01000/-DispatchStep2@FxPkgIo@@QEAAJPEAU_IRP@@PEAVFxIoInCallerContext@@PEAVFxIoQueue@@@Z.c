/*
 * XREFs of ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0012FB0
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0012D70 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x1C00666D0 (-Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z.c)
 * Callees:
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005CA0 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x1C0012F08 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C001A154 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031C50 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C004ED20 (-FreeRequest@FxRequest@@QEAAXXZ.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C0051E78 (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0059D70 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059E9C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP@@@Z @ 0x1C0074F2C (-DispathToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1C00752A0 (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C0077B00 (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C6CE0 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6D24 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxPkgIo::DispatchStep2(
        FxPkgIo *this,
        _IRP *Irp,
        FxIoInCallerContext *IoInCallerCtx,
        FxIoQueue *Queue)
{
  FxCxDeviceInfo *m_CxDeviceInfo; // rsi
  FxDeviceBase *m_DeviceBase; // rdi
  _WDF_OBJECT_ATTRIBUTES *p_RequestAttributes; // rsi
  __int64 v8; // rax
  FxRequest *v9; // r12
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  char *p_m_ExecutionLevel; // rbp
  _FX_DRIVER_GLOBALS *v12; // rdx
  FX_POOL_TRACKER *v13; // rbx
  unsigned __int8 v14; // r8
  FX_POOL_TRACKER *v15; // r15
  FX_POOL **p_Pool; // rbx
  FX_POOL *v17; // rax
  _LIST_ENTRY *Flink; // r8
  FX_POOL *v19; // rax
  _IRP *v20; // r15
  _FX_DRIVER_GLOBALS *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  FX_POOL *v26; // rax
  int _a1; // ebp
  bool v28; // al
  FxIoInCallerContext *v29; // rdx
  int v30; // eax
  __int64 v32; // rax
  _FX_DRIVER_GLOBALS *v33; // rdx
  int ReservedRequest; // eax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  int v37; // eax
  FxRequest *request; // [rsp+30h] [rbp-68h] BYREF
  FxVerifierLock *VerifierLock; // [rsp+38h] [rbp-60h] BYREF
  __int64 CurrentIrql; // [rsp+40h] [rbp-58h]
  void *Caller; // [rsp+98h] [rbp+0h]
  FxPkgIo *v42; // [rsp+A0h] [rbp+8h]
  void *PPObject; // [rsp+A8h] [rbp+10h] BYREF
  FxIoInCallerContext *InCallerContextInfo; // [rsp+B0h] [rbp+18h]
  bool v45; // [rsp+B8h] [rbp+20h]

  InCallerContextInfo = IoInCallerCtx;
  PPObject = Irp;
  v42 = this;
  v45 = Queue && Queue->m_SupportForwardProgress;
  CurrentIrql = KeGetCurrentIrql();
  if ( (unsigned __int8)CurrentIrql <= 1u )
  {
    KeEnterCriticalRegion();
    this = v42;
  }
  if ( Queue && (m_CxDeviceInfo = Queue->m_CxDeviceInfo) != 0LL )
  {
    m_DeviceBase = this->m_DeviceBase;
    p_RequestAttributes = &m_CxDeviceInfo->RequestAttributes;
  }
  else
  {
    m_DeviceBase = this->m_DeviceBase;
    p_RequestAttributes = (_WDF_OBJECT_ATTRIBUTES *)&m_DeviceBase[2].m_ExecutionLevel;
  }
  v8 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  v9 = 0LL;
  m_Globals = m_DeviceBase->m_Globals;
  p_m_ExecutionLevel = (char *)p_RequestAttributes;
  request = 0LL;
  if ( v8 && *(_WORD *)(v8 + 8) == 4354 && *(_BYTE *)(v8 + 1779) )
  {
    v13 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
    if ( v13 )
      goto LABEL_12;
    v32 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))m_DeviceBase[2].m_DeviceBase)(
            HIDWORD(m_DeviceBase[2].m_ChildEntry.Blink),
            HIDWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next),
            LODWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next));
    goto LABEL_65;
  }
  ++HIDWORD(m_DeviceBase[2].m_ParentObject);
  v13 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock);
  if ( !v13 )
  {
    ++LODWORD(m_DeviceBase[2].m_ChildEntry.Flink);
    v32 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))m_DeviceBase[2].m_DeviceBase)(
            HIDWORD(m_DeviceBase[2].m_ChildEntry.Blink),
            HIDWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next),
            LODWORD(m_DeviceBase[2].m_DisposeSingleEntry.Next));
LABEL_65:
    v13 = (FX_POOL_TRACKER *)v32;
  }
LABEL_12:
  if ( v13 )
  {
    if ( m_Globals->FxPoolTrackingOn )
    {
      v15 = v13 + 1;
      FxPoolInsertNonPagedAllocateTracker(
        &m_Globals->FxPoolFrameworks,
        v13,
        (unsigned __int64)m_DeviceBase[2].m_CallbackLockObjectPtr,
        m_Globals->Tag,
        Caller);
    }
    else
    {
      v15 = v13;
    }
    v15->Link.Flink = &v13->Link;
    p_Pool = &v15->Pool;
    v15->Link.Blink = &m_Globals->Linkage;
    if ( !p_RequestAttributes )
      p_m_ExecutionLevel = (char *)&m_DeviceBase[2].m_ExecutionLevel;
    if ( m_Globals->FxVerifierHandle )
    {
      *(_OWORD *)p_Pool = 0LL;
      *(_OWORD *)&v15->Size = 0LL;
      *(_OWORD *)&v15->CallersAddress = 0LL;
      LODWORD(v15->CallersAddress) = 1146058822;
      p_Pool = (FX_POOL **)&v15[1];
    }
    p_Pool[47] = 0LL;
    p_Pool[48] = 0LL;
    p_Pool[49] = 0LL;
    p_Pool[50] = 0LL;
    p_Pool[51] = 0LL;
    p_Pool[46] = (FX_POOL *)p_Pool;
    if ( p_m_ExecutionLevel )
    {
      v17 = (FX_POOL *)*((_QWORD *)p_m_ExecutionLevel + 6);
      if ( v17 )
      {
        Flink = (_LIST_ENTRY *)*((_QWORD *)p_m_ExecutionLevel + 5);
        if ( !Flink )
          Flink = v17->NonPagedHead.Flink;
        memset(p_Pool + 52, 0, ((unsigned __int64)&Flink->Flink + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v17 = (FX_POOL *)*((_QWORD *)p_m_ExecutionLevel + 6);
      }
      p_Pool[50] = v17;
    }
    if ( p_Pool )
    {
      p_Pool[2] = (FX_POOL *)m_DeviceBase->m_Globals;
      *p_Pool = (FX_POOL *)FxObject::`vftable';
      p_Pool[7] = 0LL;
      *((_BYTE *)p_Pool + 48) = 1;
      *((_DWORD *)p_Pool + 6) = 0x10000;
      *((_DWORD *)p_Pool + 2) = 24121352;
      p_Pool[5] = (FX_POOL *)(p_Pool + 4);
      p_Pool[4] = (FX_POOL *)(p_Pool + 4);
      p_Pool[10] = (FX_POOL *)(p_Pool + 9);
      p_Pool[9] = (FX_POOL *)(p_Pool + 9);
      v19 = p_Pool[2];
      *((_DWORD *)p_Pool + 3) = 1;
      p_Pool[8] = 0LL;
      p_Pool[11] = 0LL;
      p_Pool[12] = 0LL;
      if ( LOBYTE(v19[1].PeakPagedAllocations) )
        FxObject::Vf_VerifyConstruct((FxObject *)p_Pool, v12, 0);
      *p_Pool = (FX_POOL *)FxNonPagedObject::`vftable';
      p_Pool[14] = 0LL;
      *((_BYTE *)p_Pool + 104) = 1;
      if ( *((char *)p_Pool + 24) < 0 )
      {
        v33 = (_FX_DRIVER_GLOBALS *)p_Pool[2];
        if ( v33->FxVerifierLock )
        {
          VerifierLock = 0LL;
          FxVerifierLock::CreateAndInitialize(&VerifierLock, v33, (FxObject *)p_Pool);
          *(p_Pool - 5) = (FX_POOL *)VerifierLock;
        }
      }
      v20 = (_IRP *)PPObject;
      p_Pool[19] = (FX_POOL *)PPObject;
      p_Pool[23] = 0LL;
      p_Pool[24] = 0LL;
      *((_WORD *)p_Pool + 106) = 0;
      *((_BYTE *)p_Pool + 238) = 1;
      p_Pool[20] = 0LL;
      p_Pool[25] = 0LL;
      *((_BYTE *)p_Pool + 214) = p_Pool[19] == 0LL;
      p_Pool[16] = (FX_POOL *)(p_Pool + 15);
      p_Pool[15] = (FX_POOL *)(p_Pool + 15);
      *((_BYTE *)p_Pool + 215) = 0;
      *(_WORD *)((char *)p_Pool + 235) = 0;
      p_Pool[21] = 0LL;
      p_Pool[22] = 0LL;
      p_Pool[18] = 0LL;
      p_Pool[28] = 0LL;
      *((_DWORD *)p_Pool + 52) = 0;
      p_Pool[30] = 0LL;
      *((_BYTE *)p_Pool + 234) = 0;
      *((_BYTE *)p_Pool + 237) = 0;
      p_Pool[32] = (FX_POOL *)FxRequestSystemBuffer::`vftable';
      p_Pool[34] = (FX_POOL *)FxRequestOutputBuffer::`vftable';
      p_Pool[33] = 0LL;
      p_Pool[35] = 0LL;
      *((_WORD *)p_Pool + 116) = 232;
      p_Pool[37] = (FX_POOL *)(p_Pool + 36);
      p_Pool[36] = (FX_POOL *)(p_Pool + 36);
      p_Pool[39] = (FX_POOL *)(p_Pool + 38);
      p_Pool[38] = (FX_POOL *)(p_Pool + 38);
      p_Pool[41] = (FX_POOL *)(p_Pool + 40);
      p_Pool[40] = (FX_POOL *)(p_Pool + 40);
      *p_Pool = (FX_POOL *)FxRequestFromLookaside::`vftable';
      p_Pool[27] = (FX_POOL *)216;
      p_Pool[31] = 0LL;
      *((_BYTE *)p_Pool + 353) = 0;
      *((_BYTE *)p_Pool + 352) = 0;
      *((_WORD *)p_Pool + 177) = 0;
      p_Pool[42] = 0LL;
      p_Pool[43] = 0LL;
      p_Pool[12] = (FX_POOL *)m_DeviceBase->m_DeviceBase;
      if ( v20 )
        FxRequest::AssignMemoryBuffers((FxRequest *)p_Pool, (_WDF_DEVICE_IO_TYPE)m_DeviceBase[1].m_Refcnt);
      if ( m_DeviceBase->m_Globals->FxRequestParentOptimizationOn )
      {
        v21 = 0LL;
        PPObject = 0LL;
        if ( !*((_WORD *)p_Pool + 5) )
        {
          _a1 = -1073741816;
LABEL_79:
          WPP_IFR_SF_d(m_DeviceBase->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, _a1);
          FxObject::ClearEvtCallbacks((FxObject *)p_Pool);
          ((void (__fastcall *)(FX_POOL **))(*p_Pool)->PagedLock.m_Lock.Owner)(p_Pool);
          goto LABEL_49;
        }
        if ( !p_RequestAttributes )
        {
LABEL_45:
          v26 = p_Pool[2];
          *((_WORD *)p_Pool + 12) |= 8u;
          if ( LOBYTE(v26[1].PeakPagedAllocations) )
            FxObject::Vf_VerifyLeakDetectionConsiderObject((FxObject *)p_Pool, v21);
          _a1 = 0;
          goto LABEL_48;
        }
        if ( p_RequestAttributes->ExecutionLevel == WdfExecutionLevelPassive )
        {
          FxObject::MarkPassiveCallbacks((FxObject *)p_Pool, ObjectLock);
          v21 = (_FX_DRIVER_GLOBALS *)PPObject;
        }
        if ( p_RequestAttributes->ParentObject )
        {
          FxObjectHandleGetPtr(
            (_FX_DRIVER_GLOBALS *)p_Pool[2],
            (unsigned __int64)p_RequestAttributes->ParentObject,
            0x1000u,
            &PPObject);
          v21 = (_FX_DRIVER_GLOBALS *)PPObject;
        }
        if ( !v21 || (_a1 = FxObject::AssignParentObject((FxObject *)p_Pool, (FxObject *)v21), _a1 >= 0) )
        {
          v22 = *((unsigned __int16 *)p_Pool + 5);
          if ( (_WORD)v22 )
            v23 = (__int64)p_Pool + v22;
          else
            v23 = 0LL;
          EvtDestroyCallback = p_RequestAttributes->EvtDestroyCallback;
          if ( EvtDestroyCallback )
            *(_QWORD *)(v23 + 24) = EvtDestroyCallback;
          EvtCleanupCallback = p_RequestAttributes->EvtCleanupCallback;
          if ( EvtCleanupCallback )
          {
            *(_QWORD *)(v23 + 16) = EvtCleanupCallback;
            *((_WORD *)p_Pool + 12) |= 0x400u;
          }
          goto LABEL_45;
        }
      }
      else
      {
        _a1 = FxObject::Commit((FxObject *)p_Pool, (_FX_DRIVER_GLOBALS *)p_RequestAttributes, 0LL, m_DeviceBase, 0);
      }
      if ( _a1 >= 0 )
      {
LABEL_48:
        v9 = (FxRequest *)p_Pool;
        request = (FxRequest *)p_Pool;
        goto LABEL_49;
      }
      goto LABEL_79;
    }
  }
  _a1 = -1073741670;
  WPP_IFR_SF_d(m_DeviceBase->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, -1073741670);
  v20 = (_IRP *)PPObject;
LABEL_49:
  v28 = v45;
  if ( v45 )
  {
    if ( _a1 < 0 )
    {
LABEL_81:
      if ( !v42->m_Filter || Queue )
      {
        if ( v28 )
        {
          ReservedRequest = FxIoQueue::GetReservedRequest(Queue, v20, &request);
          _a1 = ReservedRequest;
          if ( ReservedRequest == 259 )
            goto $IrpIsGone;
          if ( ReservedRequest >= 0 )
            goto LABEL_86;
        }
        else
        {
          WPP_IFR_SF_d(v42->m_Globals, 2u, 0xDu, 0x10u, (const _GUID *)&WPP_FxPkgIo_cpp_Traceguids, _a1);
        }
      }
LABEL_95:
      v20->IoStatus.Status = _a1;
      v20->IoStatus.Information = 0LL;
      IofCompleteRequest(v20, 0);
      goto $IrpIsGone;
    }
    if ( (v42->m_Globals->FxEnhancedVerifierOptions & 0xF0000) != 0 )
      _a1 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(v42, v9);
    v28 = v45;
  }
  if ( _a1 < 0 )
    goto LABEL_81;
  if ( !v28 || !Queue->m_FwdProgContext->m_IoResourcesAllocate.Method )
    goto LABEL_57;
  v9->m_Presented = 1;
  v35 = (unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v9->m_ObjectSize )
    v35 = 0LL;
  v36 = (unsigned __int64)Queue ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !Queue->m_ObjectSize )
    v36 = 0LL;
  if ( ((int (__fastcall *)(unsigned __int64, unsigned __int64, _FXIO_FORWARD_PROGRESS_CONTEXT *))Queue->m_FwdProgContext->m_IoResourcesAllocate.Method)(
         v36,
         v35,
         Queue->m_FwdProgContext) >= 0 )
    goto LABEL_57;
  FxRequest::FreeRequest(v9);
  request = 0LL;
  v37 = FxIoQueue::GetReservedRequest(Queue, v20, &request);
  _a1 = v37;
  if ( v37 == 259 )
    goto $IrpIsGone;
  if ( v37 < 0 )
    goto LABEL_95;
LABEL_86:
  v9 = request;
LABEL_57:
  v29 = InCallerContextInfo;
  if ( InCallerContextInfo && InCallerContextInfo->m_Method && !v9->m_Reserved )
  {
    v9->m_InternalContext = Queue;
    v30 = FxPkgIo::DispathToInCallerContextCallback(v42, v29, v9, v20);
  }
  else
  {
    v30 = FxIoQueue::QueueRequest(Queue, v9, v14);
  }
  _a1 = v30;
$IrpIsGone:
  if ( (unsigned __int8)CurrentIrql <= 1u )
    KeLeaveCriticalRegion();
  return (unsigned int)_a1;
}
