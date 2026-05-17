/*
 * XREFs of _RtlpCtContextFree@4 @ 0x4B369E26
 * Callers:
 *     _RtlRaiseCustomSystemEventTrigger@4 @ 0x4B369C20 (_RtlRaiseCustomSystemEventTrigger@4.c)
 *     _RtlpCtContextInit@8 @ 0x4B369E6A (_RtlpCtContextInit@8.c)
 *     _RtlpRtlpCtWaitForWnfQuiescentWorker@12 @ 0x4B369F90 (_RtlpRtlpCtWaitForWnfQuiescentWorker@12.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlUnsubscribeWnfNotificationWaitForCompletion@4 @ 0x4B2DE9B0 (_RtlUnsubscribeWnfNotificationWaitForCompletion@4.c)
 *     _TpReleaseWork@4 @ 0x4B2EC490 (_TpReleaseWork@4.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 */

int __thiscall RtlpCtContextFree(int this)
{
  if ( *(_DWORD *)(this + 4) )
    RtlUnsubscribeWnfNotificationWaitForCompletion(*(_DWORD *)(this + 4));
  if ( *(_DWORD *)(this + 8) )
  {
    NtClose(*(HANDLE *)(this + 8));
    *(_DWORD *)(this + 8) = 0;
  }
  if ( *(_DWORD *)this )
    TpReleaseWork(*(_DWORD *)this);
  return RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, this);
}
