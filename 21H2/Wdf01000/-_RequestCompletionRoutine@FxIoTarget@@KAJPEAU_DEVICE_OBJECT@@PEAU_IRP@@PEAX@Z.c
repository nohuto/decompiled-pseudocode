/*
 * XREFs of ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0004E70
 * Callers:
 *     <none>
 * Callees:
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0004590 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C0005000 (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C000505C (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C0005090 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 */

__int64 __fastcall FxIoTarget::_RequestCompletionRoutine(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        FxRequestBase *Context)
{
  FxIoTarget *m_Target; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int8 v6; // bp
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxRequestBase *_a1; // rax
  unsigned __int64 v10; // rcx
  FxRequestBase *v11; // rax
  _IRP *m_Irp; // rax
  FxRequestBase *v13; // rax
  _FX_DRIVER_GLOBALS *v14; // r10
  const void *v15; // rcx
  unsigned __int8 PreviousIrql; // [rsp+78h] [rbp+10h] BYREF

  m_Target = Context->m_Target;
  if ( Context->m_CompletionRoutine.m_Completion != FxIoTarget::_SyncCompletionRoutine
    && Irp->PendingReturned
    && Irp->CurrentLocation <= Irp->StackCount )
  {
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  }
  PreviousIrql = 0;
  v5 = (unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( m_Target->m_Globals->FxVerboseOn )
  {
    v10 = (unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL;
    v11 = Context;
    if ( !Context->m_ObjectSize )
      v10 = 0LL;
    if ( v10 )
      v11 = (FxRequestBase *)v10;
    WPP_IFR_SF_q(m_Target->m_Globals, 5u, 0xEu, 0x31u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v11);
  }
  FxNonPagedObject::Lock(m_Target, &PreviousIrql);
  Context->m_TargetFlags |= 1u;
  if ( FxRequestBase::CancelTimer(Context)
    && _InterlockedExchangeAdd(&Context->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
  {
    if ( (Context->m_TargetFlags & 8) != 0 )
    {
      m_Irp = Context->m_Irp.m_Irp;
      if ( m_Irp->IoStatus.Status == -1073741536 )
        m_Irp->IoStatus.Status = -1073741643;
    }
    v6 = FxIoTarget::RemoveCompletedRequestLocked(m_Target, Context);
    FxNonPagedObject::Unlock(m_Target, PreviousIrql);
    m_Globals = m_Target->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      v13 = Context;
      if ( !Context->m_ObjectSize )
        v5 = 0LL;
      if ( v5 )
        v13 = (FxRequestBase *)v5;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x33u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v13);
    }
    FxRequestBase::CompleteSubmitted(Context);
    if ( v6 )
    {
      v14 = m_Target->m_Globals;
      if ( v14->FxVerboseOn )
      {
        v15 = (const void *)((unsigned __int64)m_Target ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_Target->m_ObjectSize )
          v15 = 0LL;
        WPP_IFR_SF_qq(
          v14,
          5u,
          0xEu,
          0x34u,
          (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids,
          v15,
          &m_Target->m_SentIoEvent);
      }
      KeSetEvent(&m_Target->m_SentIoEvent.m_Event.m_Event, 0, 0);
    }
    FxIoTarget::DecrementIoCount(m_Target);
  }
  else
  {
    if ( !Context->m_ObjectSize || (_a1 = (FxRequestBase *)((unsigned __int64)Context ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
      _a1 = Context;
    WPP_IFR_SF_q(m_Target->m_Globals, 4u, 0xEu, 0x32u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1);
    FxNonPagedObject::Unlock(m_Target, PreviousIrql);
  }
  return 3221225494LL;
}
