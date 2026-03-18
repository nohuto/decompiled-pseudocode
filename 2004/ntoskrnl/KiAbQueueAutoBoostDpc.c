/*
 * XREFs of KiAbQueueAutoBoostDpc @ 0x14032A93C
 * Callers:
 *     ExpAcquireResourceSharedLite @ 0x1402091B0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140209B00 (ExpAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIoEx @ 0x14020A940 (PsBoostThreadIoEx.c)
 *     KiRemoveBoostThread @ 0x14020E760 (KiRemoveBoostThread.c)
 *     KeSetActualBasePriorityThread @ 0x140213990 (KeSetActualBasePriorityThread.c)
 *     KiUpdateThreadPriority @ 0x140214230 (KiUpdateThreadPriority.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140279DA8 (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiTryUnwaitThreadWithPriority @ 0x140282110 (KiTryUnwaitThreadWithPriority.c)
 *     ExpApplyPriorityBoost @ 0x1402830C0 (ExpApplyPriorityBoost.c)
 *     KiDeferredReadySingleThread @ 0x1402873F0 (KiDeferredReadySingleThread.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x1402C7988 (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     KeSetBasePriorityThread @ 0x1402ED310 (KeSetBasePriorityThread.c)
 *     KiDirectSwitchThread @ 0x1402EE940 (KiDirectSwitchThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402F1220 (KiSetBasePriorityAndClearDecrement.c)
 *     KiAbProcessThreadPriorityModification @ 0x140329BC0 (KiAbProcessThreadPriorityModification.c)
 *     KiAbThreadBoostIoPriority @ 0x14032A874 (KiAbThreadBoostIoPriority.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140214C00 (KeInsertQueueDpc.c)
 */

BOOLEAN __fastcall KiAbQueueAutoBoostDpc(struct _KDPC *SystemArgument1)
{
  BOOLEAN result; // al

  if ( !SystemArgument1[542].DeferredContext )
  {
    result = KeInsertQueueDpc(SystemArgument1 + 542, SystemArgument1, 0LL);
    SystemArgument1[542].DeferredContext = (PVOID)1;
  }
  return result;
}
