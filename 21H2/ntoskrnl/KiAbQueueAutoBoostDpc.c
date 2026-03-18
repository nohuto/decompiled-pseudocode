/*
 * XREFs of KiAbQueueAutoBoostDpc @ 0x140229D30
 * Callers:
 *     KiDirectSwitchThread @ 0x14020F360 (KiDirectSwitchThread.c)
 *     ExpBoostIoAfterAcquire @ 0x14021CA70 (ExpBoostIoAfterAcquire.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140229B04 (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiAbThreadBoostIoPriority @ 0x140229BD8 (KiAbThreadBoostIoPriority.c)
 *     KiAbProcessThreadPriorityModification @ 0x140229CA0 (KiAbProcessThreadPriorityModification.c)
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x14028F748 (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KiUpdateThreadPriority @ 0x140291010 (KiUpdateThreadPriority.c)
 *     KeYieldExecution @ 0x14029B310 (KeYieldExecution.c)
 *     PsBoostThreadIoEx @ 0x1402ACD80 (PsBoostThreadIoEx.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402EC3E4 (KiSetBasePriorityAndClearDecrement.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     ExpApplyPriorityBoost @ 0x140343010 (ExpApplyPriorityBoost.c)
 *     KeInsertPriQueue @ 0x1403462B0 (KeInsertPriQueue.c)
 *     KiRemoveBoostThread @ 0x14035B110 (KiRemoveBoostThread.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 */

BOOLEAN __fastcall KiAbQueueAutoBoostDpc(struct _KDPC *SystemArgument1)
{
  BOOLEAN result; // al

  if ( !SystemArgument1[558].DeferredContext )
  {
    result = KeInsertQueueDpc(SystemArgument1 + 558, SystemArgument1, 0LL);
    SystemArgument1[558].DeferredContext = (PVOID)1;
  }
  return result;
}
