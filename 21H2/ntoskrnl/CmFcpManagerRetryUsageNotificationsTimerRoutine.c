/*
 * XREFs of CmFcpManagerRetryUsageNotificationsTimerRoutine @ 0x1404EDBF0
 * Callers:
 *     <none>
 * Callees:
 *     CmFcpWorkItemQueueWork @ 0x1404EDC0C (CmFcpWorkItemQueueWork.c)
 */

__int64 __fastcall CmFcpManagerRetryUsageNotificationsTimerRoutine(__int64 a1, __int64 a2)
{
  return CmFcpWorkItemQueueWork((PWORK_QUEUE_ITEM)(a2 + 496));
}
