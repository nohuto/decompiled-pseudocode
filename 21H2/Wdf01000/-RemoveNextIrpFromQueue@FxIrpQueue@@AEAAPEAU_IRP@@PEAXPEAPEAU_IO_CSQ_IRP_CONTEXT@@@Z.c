/*
 * XREFs of ?RemoveNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAXPEAPEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C0017D94
 * Callers:
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x1C00150B8 (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0064AC8 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 * Callees:
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C0018624 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C0055908 (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 */

_IRP *__fastcall FxIrpQueue::RemoveNextIrpFromQueue(
        FxIrpQueue *this,
        _FILE_OBJECT *PeekContext,
        _IO_CSQ_IRP_CONTEXT **pCsqContext)
{
  FxIrpQueue *Flink; // r9
  _IRP *p_m_RequestCount; // rax
  _FILE_OBJECT *v5; // r8
  FxIrpQueue *i; // r10
  _IRP *result; // rax
  _QWORD *v8; // r11
  _QWORD *v9; // rcx
  FxIrp fxIrp; // [rsp+30h] [rbp+8h] BYREF

  Flink = (FxIrpQueue *)this->m_Queue.Flink;
  p_m_RequestCount = 0LL;
  v5 = PeekContext;
  for ( i = this; Flink != this; p_m_RequestCount = 0LL )
  {
    p_m_RequestCount = (_IRP *)&Flink[-5].m_RequestCount;
    if ( !PeekContext )
      break;
    if ( p_m_RequestCount->Tail.Overlay.CurrentStackLocation->FileObject == PeekContext )
      break;
    Flink = (FxIrpQueue *)Flink->m_Queue.Flink;
  }
  while ( 1 )
  {
    fxIrp.m_Irp = p_m_RequestCount;
    if ( !p_m_RequestCount )
      return 0LL;
    if ( _InterlockedExchange64((volatile __int64 *)&p_m_RequestCount->CancelRoutine, 0LL) )
      break;
    p_m_RequestCount = FxIrpQueue::PeekNextIrpFromQueue(i, p_m_RequestCount, v5);
  }
  FxIrpQueue::RemoveIrpFromListEntry(i, &fxIrp);
  result = fxIrp.m_Irp;
  v9 = fxIrp.m_Irp->Tail.Overlay.DriverContext[3];
  if ( *(_DWORD *)v9 == 1 )
    v9[1] = 0LL;
  if ( v8 )
    *v8 = v9;
  result->Tail.Overlay.DriverContext[3] = 0LL;
  return result;
}
