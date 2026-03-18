/*
 * XREFs of ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005B708
 * Callers:
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0001D10 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C0001F90 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C00021D0 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C0002940 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z @ 0x1C0004EC0 (-Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?AddRef@FxMemoryObject@@UEAAKPEAXJPEBD@Z @ 0x1C0005110 (-AddRef@FxMemoryObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C00053B0 (-InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C000598C (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0006C90 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00071B0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0007B30 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007EE0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0008E30 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000A1C0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C000B944 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C000D7F0 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0012A54 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C0012BAC (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     imp_WdfObjectReferenceActual @ 0x1C0016610 (imp_WdfObjectReferenceActual.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C00176B0 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E5DC (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxTagTrackingBlock@@QEAA@PEAXJPEBDE@Z @ 0x1C0059A98 (--0FxTagTrackingBlock@@QEAA@PEAXJPEBDE@Z.c)
 *     ??_GFxTagTrackingBlock@@QEAAPEAXI@Z @ 0x1C005B53C (--_GFxTagTrackingBlock@@QEAAPEAXI@Z.c)
 *     ?CopyStackFrames@FxTagTracker@@AEAAXPEAPEAUFxTagTrackingStackFrames@@GPEAPEAX@Z @ 0x1C005B678 (-CopyStackFrames@FxTagTracker@@AEAAXPEAPEAUFxTagTrackingStackFrames@@GPEAPEAX@Z.c)
 *     WPP_IFR_SF_sqqq @ 0x1C005BB1C (WPP_IFR_SF_sqqq.c)
 */

void __fastcall FxTagTracker::UpdateTagHistory(
        FxTagTracker *this,
        void *Tag,
        int Line,
        const char *File,
        FxTagRefType RefType,
        unsigned int RefCount)
{
  unsigned __int16 v9; // bp
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  __int64 v12; // rbx
  USHORT v13; // ax
  FX_POOL **v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  KIRQL v17; // al
  KIRQL v18; // al
  FxTagTrackingBlock **p_m_Next; // rcx
  FxTagTrackingBlock *m_Next; // rbx
  FxTagTrackingBlock *Next; // rdx
  unsigned int v22; // r8d
  unsigned __int16 v23; // r9
  const char *v24; // rcx
  const _GUID *v25; // [rsp+20h] [rbp-108h]
  void *frames[16]; // [rsp+50h] [rbp-D8h] BYREF
  void *Caller; // [rsp+128h] [rbp+0h]

  v9 = 0;
  memset(frames, 0, sizeof(frames));
  m_Globals = this->m_Globals;
  v12 = _InterlockedExchangeAdd(&this->m_CurRefHistory, 1u) % 25;
  this->m_TagHistory[v12].RefType = RefType;
  this->m_TagHistory[v12].RefCount = RefCount;
  this->m_TagHistory[v12].Line = Line;
  this->m_TagHistory[v12].Tag = Tag;
  this->m_TagHistory[v12].File = File;
  if ( this->m_CaptureStack )
  {
    v13 = RtlCaptureStackBackTrace(3u, 0x10u, frames, 0LL);
    v9 = v13;
    if ( v13 )
      FxTagTracker::CopyStackFrames(this, (FX_POOL ***)&this->m_TagHistory[v12].StackFrames, v13, frames);
  }
  this->m_TagHistory[v12].Time.QuadPart = MEMORY[0xFFFFF78000000320];
  if ( RefType )
  {
    v18 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    p_m_Next = &this->m_Next;
    m_Next = this->m_Next;
    if ( m_Next )
    {
      while ( 1 )
      {
        Next = m_Next->Next;
        if ( m_Next->Tag == Tag )
          break;
        p_m_Next = (FxTagTrackingBlock **)m_Next;
        m_Next = m_Next->Next;
        if ( !Next )
          goto LABEL_18;
      }
      *p_m_Next = Next;
    }
LABEL_18:
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v18);
    if ( m_Next )
    {
      FxTagTrackingBlock::`scalar deleting destructor'(m_Next);
    }
    else if ( _InterlockedDecrement(&this->m_FailedCount) < 0 )
    {
      _InterlockedIncrement(&this->m_FailedCount);
      v24 = "power tag";
      if ( this->m_TrackerType != FxTagTrackerTypePower )
        v24 = "tag";
      WPP_IFR_SF_sqqq(m_Globals, (unsigned __int8)"tag", v22, v23, v25, v24, Tag, this->m_OwningObject, this);
      FxVerifierDbgBreakPoint(m_Globals);
    }
  }
  else
  {
    v14 = FxPoolAllocator(
            m_Globals,
            &m_Globals->FxPoolFrameworks,
            ExDefaultNonPagedPoolType,
            0x30uLL,
            m_Globals->Tag,
            Caller);
    if ( v14 )
    {
      FxTagTrackingBlock::FxTagTrackingBlock((FxTagTrackingBlock *)v14, Tag, Line, File, 0);
      v16 = v15;
    }
    else
    {
      v16 = 0LL;
    }
    if ( v16 )
    {
      v17 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
      *(_QWORD *)v16 = this->m_Next;
      this->m_Next = (FxTagTrackingBlock *)v16;
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v17);
      if ( this->m_CaptureStack )
      {
        if ( v9 )
          FxTagTracker::CopyStackFrames(this, (FX_POOL ***)(v16 + 40), v9, frames);
      }
    }
    else
    {
      _InterlockedIncrement(&this->m_FailedCount);
    }
  }
}
