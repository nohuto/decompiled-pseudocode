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

LOGICAL __thiscall RtlpCtContextFree(PVOID *BaseAddress)
{
  if ( BaseAddress[1] )
    RtlUnsubscribeWnfNotificationWaitForCompletion(BaseAddress[1]);
  if ( BaseAddress[2] )
  {
    NtClose(BaseAddress[2]);
    BaseAddress[2] = 0;
  }
  if ( *BaseAddress )
    TpReleaseWork((PTP_WORK)*BaseAddress);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
}
