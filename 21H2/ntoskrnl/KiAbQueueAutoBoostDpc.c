/*
 * XREFs of KiAbQueueAutoBoostDpc @ 0x140205B9C
 * Callers:
 *     KeAbProcessEffectiveIoPriorityChange @ 0x14020462C (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiAbProcessThreadPriorityModification @ 0x140205A50 (KiAbProcessThreadPriorityModification.c)
 *     KiAbThreadBoostIoPriority @ 0x140205AD4 (KiAbThreadBoostIoPriority.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     KeSetBasePriorityThread @ 0x14027A3D0 (KeSetBasePriorityThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x14029B01C (KiSetBasePriorityAndClearDecrement.c)
 *     ExpApplyPriorityBoost @ 0x1402D3850 (ExpApplyPriorityBoost.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 *     KiUpdateThreadPriority @ 0x1402D56A0 (KiUpdateThreadPriority.c)
 *     KiTryUnwaitThreadWithPriority @ 0x1402E71B0 (KiTryUnwaitThreadWithPriority.c)
 *     KiRemoveBoostThread @ 0x1402EF720 (KiRemoveBoostThread.c)
 *     KiDirectSwitchThread @ 0x1402F1090 (KiDirectSwitchThread.c)
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x1403020FC (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     KiDeferredReadySingleThread @ 0x14034EC10 (KiDeferredReadySingleThread.c)
 *     ExpAcquireResourceSharedLite @ 0x140356DB0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140357700 (ExpAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIoEx @ 0x140358550 (PsBoostThreadIoEx.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402C4640 (KeInsertQueueDpc.c)
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
