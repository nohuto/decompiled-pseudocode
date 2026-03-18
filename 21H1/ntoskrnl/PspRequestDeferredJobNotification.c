/*
 * XREFs of PspRequestDeferredJobNotification @ 0x1403081AC
 * Callers:
 *     PspJobCycleTimeNotificationDpcRoutine @ 0x140308170 (PspJobCycleTimeNotificationDpcRoutine.c)
 *     PspSendWakeNotification @ 0x1406CC164 (PspSendWakeNotification.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 */

char __fastcall PspRequestDeferredJobNotification(signed __int64 a1, unsigned int a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rdx

  _m_prefetchw((const void *)(a1 + 1320));
  if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 1320), a2) & 0x22000) != 0 )
    return 0;
  _m_prefetchw(&PspJobNotificationList);
  v2 = PspJobNotificationList;
  do
  {
    v3 = v2;
    *(_QWORD *)(a1 + 968) = v2;
    v2 = _InterlockedCompareExchange64(&PspJobNotificationList, a1, v2);
  }
  while ( v2 != v3 );
  if ( !v3 )
    ExQueueWorkItem(&PspJobNotificationItem, NormalWorkQueue);
  return 1;
}
