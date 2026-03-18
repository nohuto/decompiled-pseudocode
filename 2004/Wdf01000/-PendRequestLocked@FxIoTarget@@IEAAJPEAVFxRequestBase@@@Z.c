/*
 * XREFs of ?PendRequestLocked@FxIoTarget@@IEAAJPEAVFxRequestBase@@@Z @ 0x1C00656EC
 * Callers:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C0001F90 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 * Callees:
 *     ?InsertIrpInQueue@FxIrpQueue@@AEAAJPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@EPEAK@Z @ 0x1C0019C40 (-InsertIrpInQueue@FxIrpQueue@@AEAAJPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@EPEAK@Z.c)
 */

__int64 __fastcall FxIoTarget::PendRequestLocked(FxIoTarget *this, FxRequestBase *Request)
{
  _IRP *m_Irp; // rax
  __int64 result; // rax
  _IRP *v5; // rcx

  Request->m_TargetFlags |= 2u;
  m_Irp = Request->m_Irp.m_Irp;
  --m_Irp->CurrentLocation;
  --m_Irp->Tail.Overlay.CurrentStackLocation;
  result = FxIrpQueue::InsertIrpInQueue(&this->m_PendedQueue, Request->m_Irp.m_Irp, &Request->m_CsqContext, 0);
  if ( (int)result < 0 )
  {
    v5 = Request->m_Irp.m_Irp;
    ++v5->CurrentLocation;
    ++v5->Tail.Overlay.CurrentStackLocation;
    Request->m_TargetFlags &= ~2u;
  }
  return result;
}
