/*
 * XREFs of ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0029788
 * Callers:
 *     ?GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C00296B0 (-GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z.c)
 *     ?GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C0029C40 (-GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTR.c)
 *     ?GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0073C30 (-GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C0005000 (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C00133A8 (-RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     ?ClearCompletedRequestVerifierFlags@FxIoTarget@@AEAAXPEAVFxRequestBase@@@Z @ 0x1C0073BD8 (-ClearCompletedRequestVerifierFlags@FxIoTarget@@AEAAXPEAVFxRequestBase@@@Z.c)
 */

void __fastcall FxIoTarget::DrainPendedRequestsLocked(
        FxIoTarget *this,
        _LIST_ENTRY *RequestListHead,
        unsigned __int8 RequestWillBeResent)
{
  FxRequestBase *_a2; // rbx
  _LIST_ENTRY *v7; // rdi
  _IRP *m_Irp; // rax
  unsigned __int64 ObjectHandleUnchecked; // rax
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v11; // r10
  _LIST_ENTRY *Blink; // rax
  _IO_CSQ_IRP_CONTEXT *pContext; // [rsp+60h] [rbp+8h] BYREF

  while ( 1 )
  {
    pContext = 0LL;
    if ( !FxIrpQueue::RemoveNextIrpFromQueue(&this->m_PendedQueue, 0LL, &pContext) )
      break;
    _a2 = (FxRequestBase *)&pContext[-5];
    v7 = (_LIST_ENTRY *)pContext;
    pContext->Irp = (_IRP *)pContext;
    v7->Flink = v7;
    m_Irp = _a2->m_Irp.m_Irp;
    ++m_Irp->CurrentLocation;
    ++m_Irp->Tail.Overlay.CurrentStackLocation;
    _a2->m_TargetFlags &= ~2u;
    if ( !RequestWillBeResent
      || FxRequestBase::CancelTimer(_a2)
      && _InterlockedExchangeAdd(&_a2->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
    {
      FxIoTarget::ClearCompletedRequestVerifierFlags(this, _a2);
      Blink = RequestListHead->Blink;
      if ( Blink->Flink != RequestListHead )
        __fastfail(3u);
      v7->Flink = RequestListHead;
      v7->Blink = Blink;
      Blink->Flink = v7;
      RequestListHead->Blink = v7;
    }
    else
    {
      _a2->m_Irp.m_Irp->IoStatus.Status = -1073741536;
      _a2->m_TargetFlags |= 1u;
      if ( this->m_Globals->FxVerboseOn )
      {
        ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(_a2);
        if ( ObjectHandleUnchecked )
          _a2 = (FxRequestBase *)ObjectHandleUnchecked;
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qq(v11, 5u, 0xEu, 0x10u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
      }
    }
  }
}
