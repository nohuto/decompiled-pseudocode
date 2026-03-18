/*
 * XREFs of ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006DC28
 * Callers:
 *     imp_WdfCollectionGetItem @ 0x1C0001550 (imp_WdfCollectionGetItem.c)
 *     imp_WdfCollectionGetCount @ 0x1C00020B0 (imp_WdfCollectionGetCount.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0004BB0 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV2@@Z @ 0x1C00056A4 (-PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPE.c)
 *     ?FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z @ 0x1C00074E0 (-FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008890 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009550 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C000A250 (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000A580 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     imp_WdfRequestSend @ 0x1C000AF90 (imp_WdfRequestSend.c)
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C000B8C0 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     ?Unlock@FxCallbackMutexLock@@UEAAXE@Z @ 0x1C0012480 (-Unlock@FxCallbackMutexLock@@UEAAXE@Z.c)
 *     ?Unlock@FxCallbackSpinLock@@UEAAXE@Z @ 0x1C00124F0 (-Unlock@FxCallbackSpinLock@@UEAAXE@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qqq @ 0x1C0030348 (WPP_IFR_SF_qqq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z @ 0x1C006D7C0 (-GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z.c)
 *     ?ReleaseOrReplaceThreadTableEntry@FxVerifierLock@@SAXPEAU_KTHREAD@@PEAV1@@Z @ 0x1C006DAF0 (-ReleaseOrReplaceThreadTableEntry@FxVerifierLock@@SAXPEAU_KTHREAD@@PEAV1@@Z.c)
 */

void __fastcall FxVerifierLock::Unlock(FxVerifierLock *this, KIRQL PreviousIrql, unsigned __int8 a3)
{
  struct _KTHREAD *_a1; // rbp
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  KIRQL v7; // r13
  _LIST_ENTRY **ThreadTableEntry; // rax
  _LIST_ENTRY **_a2; // r14
  FxVerifierLock *v10; // rcx
  FxVerifierLock *i; // rsi
  unsigned __int16 v12; // r9
  FxVerifierLock *j; // rsi
  _LARGE_INTEGER sleepTime; // [rsp+70h] [rbp+8h] BYREF

  _a1 = KeGetCurrentThread();
  m_Globals = this->m_Globals;
  if ( _a1 != this->m_OwningThread )
  {
    WPP_IFR_SF_qqq(m_Globals, 2u, 0x12u, 0xBu, WPP_FxVerifierLock_cpp_Traceguids, _a1, this, this->m_ParentObject);
    FxVerifierDbgBreakPoint(m_Globals);
    return;
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&m_Globals->ThreadTableLock.m_Lock);
  ThreadTableEntry = FxVerifierLock::GetThreadTableEntry(this->m_OwningThread, this, 1u);
  _a2 = ThreadTableEntry;
  if ( !ThreadTableEntry )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_cpp_Traceguids, _a1);
    goto LABEL_31;
  }
  if ( this->m_UseMutex )
  {
    v10 = (FxVerifierLock *)ThreadTableEntry[1];
    if ( !v10 )
    {
      WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xDu, WPP_FxVerifierLock_cpp_Traceguids);
      WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0xEu, WPP_FxVerifierLock_cpp_Traceguids, this, _a2);
      FxVerifierDbgBreakPoint(m_Globals);
      this->m_OwningThread = 0LL;
      KeReleaseSpinLock(&m_Globals->ThreadTableLock.m_Lock, v7);
LABEL_32:
      ExReleaseFastMutexUnsafe(&this->m_Mutex.m_Lock);
      KeLeaveCriticalRegion();
      return;
    }
    if ( v10 == this )
    {
      ThreadTableEntry[1] = (_LIST_ENTRY *)this->m_OwnedLink;
LABEL_23:
      this->m_OwnedLink = 0LL;
      FxVerifierLock::ReleaseOrReplaceThreadTableEntry((unsigned __int64)_a1, this);
      goto LABEL_31;
    }
    for ( i = v10->m_OwnedLink; i; i = i->m_OwnedLink )
    {
      if ( i == this )
        goto LABEL_15;
      v10 = i;
    }
    v12 = 17;
  }
  else
  {
    v10 = (FxVerifierLock *)ThreadTableEntry[2];
    if ( !v10 )
    {
      WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xFu, WPP_FxVerifierLock_cpp_Traceguids);
      WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0x10u, WPP_FxVerifierLock_cpp_Traceguids, this, _a2);
      FxVerifierDbgBreakPoint(m_Globals);
      this->m_OwningThread = 0LL;
      KeReleaseSpinLock(&m_Globals->ThreadTableLock.m_Lock, v7);
      goto LABEL_18;
    }
    if ( v10 == this )
    {
      ThreadTableEntry[2] = (_LIST_ENTRY *)this->m_OwnedLink;
      goto LABEL_23;
    }
    for ( j = v10->m_OwnedLink; j; j = j->m_OwnedLink )
    {
      if ( j == this )
      {
LABEL_15:
        v10->m_OwnedLink = this->m_OwnedLink;
        this->m_OwnedLink = 0LL;
        FxVerifierLock::ReleaseOrReplaceThreadTableEntry((unsigned __int64)_a1, this);
        goto LABEL_31;
      }
      v10 = j;
    }
    v12 = 18;
  }
  WPP_IFR_SF_qqq(
    m_Globals,
    2u,
    0x12u,
    v12,
    WPP_FxVerifierLock_cpp_Traceguids,
    this,
    ThreadTableEntry,
    this->m_OwningThread);
  FxVerifierDbgBreakPoint(m_Globals);
LABEL_31:
  this->m_OwningThread = 0LL;
  KeReleaseSpinLock(&m_Globals->ThreadTableLock.m_Lock, v7);
  if ( this->m_UseMutex )
    goto LABEL_32;
LABEL_18:
  KeReleaseSpinLock(&this->m_Lock.m_Lock, PreviousIrql);
  if ( !KeGetCurrentIrql() )
  {
    sleepTime.QuadPart = 0LL;
    KeDelayExecutionThread(0, 1u, &sleepTime);
  }
}
