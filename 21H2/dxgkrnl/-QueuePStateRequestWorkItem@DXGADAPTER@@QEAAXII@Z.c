/*
 * XREFs of ?QueuePStateRequestWorkItem@DXGADAPTER@@QEAAXII@Z @ 0x1C004436C
 * Callers:
 *     ?RequestPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z @ 0x1C0056FD4 (-RequestPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::QueuePStateRequestWorkItem(DXGADAPTER *this, unsigned int a2, __int32 a3)
{
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(520LL * a2 + *((_QWORD *)this + 362) + 512) + 244LL), a3);
  if ( !(unsigned __int8)_InterlockedExchange((volatile __int32 *)this + 1079, 1) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    *((_QWORD *)this + 515) = -1LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)this + 129, CriticalWorkQueue);
  }
}
