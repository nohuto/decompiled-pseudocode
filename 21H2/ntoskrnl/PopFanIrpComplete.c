/*
 * XREFs of PopFanIrpComplete @ 0x1403CF160
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 */

__int64 __fastcall PopFanIrpComplete(__int64 a1, __int64 a2, __int64 a3)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a3 + 80), DelayedWorkQueue);
  return 3221225494LL;
}
