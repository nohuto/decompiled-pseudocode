/*
 * XREFs of CmFcpManagerDrainUsageNotificationsDpc @ 0x1404E81F0
 * Callers:
 *     <none>
 * Callees:
 *     CmFcpWorkItemQueueWork @ 0x1404E822C (CmFcpWorkItemQueueWork.c)
 */

__int64 __fastcall CmFcpManagerDrainUsageNotificationsDpc(__int64 a1, __int64 a2)
{
  return CmFcpWorkItemQueueWork((PWORK_QUEUE_ITEM)(a2 + 424));
}
