/*
 * XREFs of ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005CA0
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005FD0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00071B0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0012FB0 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0077E68 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008440 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0013E44 (WPP_IFR_SF_qq.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C00154AC (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0049A94 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005A8F8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C0077434 (WPP_IFR_SF_qLsqd.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6A10 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoQueue::QueueRequest(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  FxRequest *v4; // rdi
  unsigned __int8 v6; // si
  _FX_IO_QUEUE_STATE _a4; // ecx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxVerifierLock *v10; // rcx
  _FX_DRIVER_GLOBALS *v11; // r11
  const char *_a5; // r10
  const void *globals; // r8
  const void *_a3; // rdx
  const void *v15; // rbp
  const void *v16; // rdx
  _FX_DRIVER_GLOBALS *v17; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF
  FxRequest *Request; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+80h] [rbp+18h] BYREF

  Request = pRequest;
  m_ObjectFlags = this->m_ObjectFlags;
  v4 = pRequest;
  irql = 0;
  if ( m_ObjectFlags < 0 && (v10 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v10, &irql, a3);
    v6 = irql;
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v6;
  }
  if ( v4->m_Reserved )
    FxObject::AddRef(v4, (void *)0x50647746, 2311, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  _a4 = this->m_QueueState;
  if ( (_a4 & 1) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      v15 = 0LL;
      v16 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v16 = 0LL;
      if ( v4->m_ObjectSize )
        v15 = (const void *)((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v15, v16);
    }
    if ( v4->m_Globals->FxVerifierIO )
    {
      PreviousIrql = 0;
      FxNonPagedObject::Lock(v4, &PreviousIrql);
      v17 = v4->m_Globals;
      if ( v17->FxVerifierOn )
        FxRequest::Vf_VerifyRequestIsNotCompleted(v4, v17);
      FxNonPagedObject::Unlock(v4, PreviousIrql);
    }
    v4->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    if ( v4->m_Reserved )
    {
      if ( this->m_Dispatching )
      {
        FxIoQueue::InsertNewRequestLocked(this, &Request, irql);
        FxNonPagedObject::Unlock(this, irql);
        return 259LL;
      }
      v4 = Request;
      v6 = irql;
    }
    FxIoQueue::DispatchEvents(this, v6, v4);
    return 259LL;
  }
  v11 = this->m_Globals;
  if ( v11->FxVerboseOn )
  {
    _a5 = "power stopping (Drain) in progress,";
    if ( (_a4 & 0x10000) == 0 )
      _a5 = a5;
    if ( v4->m_ObjectSize )
      globals = (const void *)((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      globals = 0LL;
    _a3 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a3 = 0LL;
    WPP_IFR_SF_qLsqd(v11, 5u, (unsigned int)globals, 0x29u, traceGuid, _a3, _a4, _a5, globals, -1073741436);
  }
  FxNonPagedObject::Unlock(this, v6);
  v4->m_Irp.m_Irp->IoStatus.Information = 0LL;
  FxRequest::Complete(v4, -1073741436);
  v4->Release(v4, (void *)1886220099, 2338, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  return 3221225860LL;
}
