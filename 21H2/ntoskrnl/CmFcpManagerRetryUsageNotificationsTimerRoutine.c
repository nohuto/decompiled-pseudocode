/*
 * XREFs of CmFcpManagerRetryUsageNotificationsTimerRoutine @ 0x14053FFD0
 * Callers:
 *     <none>
 * Callees:
 *     CmpWorkItemQueueWork @ 0x1403C7B20 (CmpWorkItemQueueWork.c)
 */

void __fastcall CmFcpManagerRetryUsageNotificationsTimerRoutine(__int64 a1, __int64 a2)
{
  CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(a2 + 496));
}
