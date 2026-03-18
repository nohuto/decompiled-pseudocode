/*
 * XREFs of KiAbQueueAutoBoostDpc @ 0x1402DDB6C
 * Callers:
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x140234B58 (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     KiTryUnwaitThreadWithPriority @ 0x140245930 (KiTryUnwaitThreadWithPriority.c)
 *     ExpApplyPriorityBoost @ 0x1402468E0 (ExpApplyPriorityBoost.c)
 *     KiDeferredReadySingleThread @ 0x14024AB50 (KiDeferredReadySingleThread.c)
 *     ExpAcquireResourceSharedLite @ 0x1402620D0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140262A20 (ExpAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIoEx @ 0x140263860 (PsBoostThreadIoEx.c)
 *     KiRemoveBoostThread @ 0x1402677B0 (KiRemoveBoostThread.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     KiUpdateThreadPriority @ 0x14026D280 (KiUpdateThreadPriority.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x1402DB7B0 (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiAbProcessThreadPriorityModification @ 0x1402DCDF0 (KiAbProcessThreadPriorityModification.c)
 *     KiAbThreadBoostIoPriority @ 0x1402DDAA4 (KiAbThreadBoostIoPriority.c)
 *     KeSetBasePriorityThread @ 0x140332450 (KeSetBasePriorityThread.c)
 *     KiDirectSwitchThread @ 0x140333A80 (KiDirectSwitchThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x140336360 (KiSetBasePriorityAndClearDecrement.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14026DC50 (KeInsertQueueDpc.c)
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
