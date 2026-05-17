/*
 * XREFs of RtlpCtContextFree @ 0x180102508
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1801022B0 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpCtContextInit @ 0x180102564 (RtlpCtContextInit.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x180102680 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 * Callees:
 *     TpReleaseWork @ 0x18000F180 (TpReleaseWork.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x180063B70 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     NtClose @ 0x18009D820 (NtClose.c)
 */

__int64 __fastcall RtlpCtContextFree(__int64 *a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = a1[1];
  if ( v2 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
  v3 = (void *)a1[2];
  if ( v3 )
  {
    NtClose(v3);
    a1[2] = 0LL;
  }
  if ( *a1 )
    TpReleaseWork(*a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)a1);
}
