/*
 * XREFs of ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C00742EC
 * Callers:
 *     ?CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002CF3C (-CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_RequestCancelled@FxIoTarget@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C0074AD0 (-_RequestCancelled@FxIoTarget@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z.c)
 *     ?_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C007E1A0 (-_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0004590 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C0005000 (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C000505C (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C0005090 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 */

void __fastcall FxIoTarget::RequestCompletionRoutine(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  const void *_a1; // rdx
  _FX_DRIVER_GLOBALS *v7; // r10
  unsigned __int8 v8; // bp
  char v9; // si
  unsigned __int8 v10; // r8
  _IRP *m_Irp; // rax
  unsigned __int8 v12; // r8
  unsigned __int64 v13; // rax
  FxRequestBase *v14; // rcx
  unsigned __int64 v15; // rax
  _FX_DRIVER_GLOBALS *v16; // r10
  FxRequestBase *v17; // rdx
  const void *v18; // rax
  _FX_DRIVER_GLOBALS *v19; // r10
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  irql = 0;
  if ( this->m_Globals->FxVerboseOn )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(Request);
    if ( ObjectHandleUnchecked )
      _a1 = (const void *)ObjectHandleUnchecked;
    WPP_IFR_SF_q(v7, 5u, 0xEu, 0x31u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
  v8 = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  v9 = 1;
  Request->m_TargetFlags |= 1u;
  if ( FxRequestBase::CancelTimer(Request)
    && _InterlockedExchangeAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
  {
    if ( (Request->m_TargetFlags & 8) != 0 )
    {
      m_Irp = Request->m_Irp.m_Irp;
      if ( m_Irp->IoStatus.Status == -1073741536 )
        m_Irp->IoStatus.Status = -1073741643;
    }
    v8 = FxIoTarget::RemoveCompletedRequestLocked(this, Request, v10);
  }
  else
  {
    v13 = FxObject::GetObjectHandleUnchecked(Request);
    v14 = Request;
    if ( v13 )
      v14 = (FxRequestBase *)v13;
    WPP_IFR_SF_q(this->m_Globals, 4u, 0xEu, 0x32u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v14);
    v9 = 0;
  }
  FxNonPagedObject::Unlock(this, irql, v12);
  if ( v9 )
  {
    if ( this->m_Globals->FxVerboseOn )
    {
      v15 = FxObject::GetObjectHandleUnchecked(Request);
      v17 = Request;
      if ( v15 )
        v17 = (FxRequestBase *)v15;
      WPP_IFR_SF_q(v16, 5u, 0xEu, 0x33u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v17);
    }
    FxRequestBase::CompleteSubmitted(Request);
  }
  if ( v8 )
  {
    if ( this->m_Globals->FxVerboseOn )
    {
      v18 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qq(v19, 5u, 0xEu, 0x34u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v18, &this->m_SentIoEvent);
    }
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( v9 )
    FxIoTarget::DecrementIoCount(this);
}
