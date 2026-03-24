/*
 * XREFs of ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0065FEC
 * Callers:
 *     ?_TimerDPC@FxRequestBase@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1C0053820 (-_TimerDPC@FxRequestBase@@KAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0009160 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?CanComplete@FxRequestBase@@QEAAEXZ @ 0x1C000C910 (-CanComplete@FxRequestBase@@QEAAEXZ.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C000C9A0 (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C000C9D0 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0013DA4 (WPP_IFR_SF_qq.c)
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C0019220 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 */

void __fastcall FxIoTarget::TimerCallback(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  unsigned __int8 v5; // bp
  const void *_a1; // rax
  const void *_a2; // rdx
  _FX_DRIVER_GLOBALS *v8; // r10
  unsigned __int8 v9; // r8
  unsigned __int8 m_TargetFlags; // al
  signed __int32 m_IrpCompletionReferenceCount; // eax
  signed __int32 v12; // edx
  unsigned __int8 v13; // r8
  unsigned __int8 CanComplete; // si
  unsigned __int8 v15; // r8
  unsigned __int8 v16; // al
  _IRP *m_Irp; // rcx
  unsigned __int64 ObjectHandleUnchecked; // rax
  _FX_DRIVER_GLOBALS *v19; // r10
  FxRequestBase *v20; // r8
  const void *v21; // rax
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  irql = 0;
  v5 = 0;
  if ( this->m_Globals->FxVerboseOn )
  {
    FxObject::GetObjectHandleUnchecked(Request);
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(v8, 5u, 0xEu, 0x29u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  FxNonPagedObject::Lock(this, &irql, a3);
  Request->m_TargetFlags &= ~4u;
  m_TargetFlags = Request->m_TargetFlags;
  if ( (m_TargetFlags & 1) == 0 )
  {
    Request->m_TargetFlags = m_TargetFlags | 8;
    m_IrpCompletionReferenceCount = Request->m_IrpCompletionReferenceCount;
    do
    {
      if ( m_IrpCompletionReferenceCount <= 0 )
        break;
      v12 = m_IrpCompletionReferenceCount;
      m_IrpCompletionReferenceCount = _InterlockedCompareExchange(
                                        &Request->m_IrpCompletionReferenceCount,
                                        m_IrpCompletionReferenceCount + 1,
                                        m_IrpCompletionReferenceCount);
    }
    while ( v12 != m_IrpCompletionReferenceCount );
    FxNonPagedObject::Unlock(this, irql, v9);
    FxRequestBase::Cancel(Request);
    FxNonPagedObject::Lock(this, &irql, v13);
  }
  CanComplete = FxRequestBase::CanComplete(Request);
  if ( CanComplete )
  {
    v16 = FxIoTarget::RemoveCompletedRequestLocked(this, Request, v15);
    m_Irp = Request->m_Irp.m_Irp;
    v5 = v16;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  FxNonPagedObject::Unlock(this, irql, v15);
  if ( CanComplete )
  {
    if ( this->m_Globals->FxVerboseOn )
    {
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(Request);
      v20 = Request;
      if ( ObjectHandleUnchecked )
        v20 = (FxRequestBase *)ObjectHandleUnchecked;
      WPP_IFR_SF_q(v19, 5u, 0xEu, 0x2Au, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v20);
    }
    FxRequestBase::CompleteSubmitted(Request);
  }
  if ( v5 )
  {
    v21 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(
      this->m_Globals,
      4u,
      0xEu,
      0x2Bu,
      (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids,
      v21,
      &this->m_SentIoEvent);
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( CanComplete )
    FxIoTarget::DecrementIoCount(this);
}
