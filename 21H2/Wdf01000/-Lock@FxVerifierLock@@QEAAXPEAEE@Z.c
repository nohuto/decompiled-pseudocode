/*
 * XREFs of ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006D914
 * Callers:
 *     imp_WdfCollectionGetItem @ 0x1C0001550 (imp_WdfCollectionGetItem.c)
 *     imp_WdfCollectionGetCount @ 0x1C00020B0 (imp_WdfCollectionGetCount.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0003FB0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0004BB0 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV2@@Z @ 0x1C00056A4 (-PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPE.c)
 *     ?FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z @ 0x1C00074E0 (-FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0008700 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008890 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0009010 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009550 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000A0B0 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C000A250 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000A580 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     imp_WdfRequestSend @ 0x1C000AF90 (imp_WdfRequestSend.c)
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C000B8C0 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     ?Lock@FxCallbackSpinLock@@UEAAXPEAE@Z @ 0x1C0012E10 (-Lock@FxCallbackSpinLock@@UEAAXPEAE@Z.c)
 *     ?Lock@FxCallbackMutexLock@@UEAAXPEAE@Z @ 0x1C0014610 (-Lock@FxCallbackMutexLock@@UEAAXPEAE@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?DumpDetails@FxVerifierLock@@SAXPEAV1@PEAU_KTHREAD@@0@Z @ 0x1C006D668 (-DumpDetails@FxVerifierLock@@SAXPEAV1@PEAU_KTHREAD@@0@Z.c)
 *     ?GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z @ 0x1C006D7C0 (-GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z.c)
 *     WPP_IFR_SF_qqqq @ 0x1C006E194 (WPP_IFR_SF_qqqq.c)
 */

void __fastcall FxVerifierLock::Lock(FxVerifierLock *this, unsigned __int8 *PreviousIrql, unsigned __int8 a3)
{
  struct _KTHREAD *_a1; // r14
  KIRQL v4; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *_a4; // rax
  const void *_a3; // rdx
  ULONG_PTR ObjectHandleUnchecked; // rax
  KIRQL v11; // al
  unsigned __int64 *p_m_Lock; // rdi
  unsigned __int64 *v13; // rcx
  _LIST_ENTRY **ThreadTableEntry; // rax
  unsigned __int8 m_UseMutex; // dl
  _LIST_ENTRY **v16; // rbp
  unsigned __int64 *v17; // rcx
  FxVerifierLock *v18; // rsi
  _LARGE_INTEGER sleepTime; // [rsp+70h] [rbp+8h] BYREF

  _a1 = KeGetCurrentThread();
  v4 = 0;
  m_Globals = this->m_Globals;
  if ( this->m_OwningThread == _a1 )
  {
    _a4 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_ParentObject);
    WPP_IFR_SF_qqqq(m_Globals, 1u, 0x12u, 0xAu, WPP_FxVerifierLock_cpp_Traceguids, _a1, this, _a3, _a4);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_ParentObject);
    FxVerifierBugCheckWorker(m_Globals, WDF_RECURSIVE_LOCK, ObjectHandleUnchecked, (ULONG_PTR)this);
  }
  if ( this->m_UseMutex )
  {
    KeEnterCriticalRegion();
    ExAcquireFastMutexUnsafe(&this->m_Mutex.m_Lock);
    *PreviousIrql = KeGetCurrentIrql();
  }
  else
  {
    if ( !KeGetCurrentIrql() )
    {
      sleepTime.QuadPart = 0LL;
      KeDelayExecutionThread(0, 1u, &sleepTime);
    }
    v11 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
    *PreviousIrql = v11;
    this->m_OldIrql = v11;
  }
  p_m_Lock = &m_Globals->ThreadTableLock.m_Lock;
  v13 = &m_Globals->ThreadTableLock.m_Lock;
  if ( this->m_UseMutex )
    v4 = KeAcquireSpinLockRaiseToDpc(v13);
  else
    KeAcquireSpinLockAtDpcLevel(v13);
  this->m_OwningThread = _a1;
  ThreadTableEntry = FxVerifierLock::GetThreadTableEntry(_a1, this, 0);
  m_UseMutex = this->m_UseMutex;
  v16 = ThreadTableEntry;
  if ( ThreadTableEntry )
  {
    if ( m_UseMutex )
      v18 = (FxVerifierLock *)ThreadTableEntry[1];
    else
      v18 = (FxVerifierLock *)ThreadTableEntry[2];
    if ( v18 )
    {
      if ( this->m_Order < v18->m_Order )
      {
        FxVerifierLock::DumpDetails(this, _a1, v18);
        m_UseMutex = this->m_UseMutex;
      }
    }
    this->m_OwnedLink = v18;
    v17 = p_m_Lock;
    if ( m_UseMutex )
    {
      v16[1] = (_LIST_ENTRY *)this;
LABEL_22:
      KeReleaseSpinLock(v17, v4);
      return;
    }
    v16[2] = (_LIST_ENTRY *)this;
  }
  else
  {
    v17 = &m_Globals->ThreadTableLock.m_Lock;
    if ( m_UseMutex )
      goto LABEL_22;
  }
  KeReleaseSpinLockFromDpcLevel(v17);
}
