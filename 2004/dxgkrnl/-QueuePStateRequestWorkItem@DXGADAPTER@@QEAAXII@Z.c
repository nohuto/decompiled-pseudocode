/*
 * XREFs of ?QueuePStateRequestWorkItem@DXGADAPTER@@QEAAXII@Z @ 0x1C0037D68
 * Callers:
 *     ?RequestPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z @ 0x1C0046F20 (-RequestPState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::QueuePStateRequestWorkItem(DXGADAPTER *this, unsigned int a2, __int32 a3)
{
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(520LL * a2 + *((_QWORD *)this + 350) + 512) + 244LL), a3);
  if ( !(unsigned __int8)_InterlockedExchange((volatile __int32 *)this + 1053, 1) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    *((_QWORD *)this + 502) = -1LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)this + 4024), CriticalWorkQueue);
  }
}
