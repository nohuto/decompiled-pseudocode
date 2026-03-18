/*
 * XREFs of KiAbQueueAutoBoostDpc @ 0x14035F69C
 * Callers:
 *     KiDeferredReadySingleThread @ 0x140219BA0 (KiDeferredReadySingleThread.c)
 *     ExpAcquireResourceSharedLite @ 0x140222130 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140222A80 (ExpAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIoEx @ 0x140223950 (PsBoostThreadIoEx.c)
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x14024B3FC (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     KiTryUnwaitThreadWithPriority @ 0x14028C420 (KiTryUnwaitThreadWithPriority.c)
 *     ExpApplyPriorityBoost @ 0x140291140 (ExpApplyPriorityBoost.c)
 *     KeSetActualBasePriorityThread @ 0x1402BE010 (KeSetActualBasePriorityThread.c)
 *     KiUpdateThreadPriority @ 0x1402BE8B0 (KiUpdateThreadPriority.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     KeSetBasePriorityThread @ 0x1402DBEC0 (KeSetBasePriorityThread.c)
 *     KiRemoveBoostThread @ 0x1402DDFD0 (KiRemoveBoostThread.c)
 *     KiDirectSwitchThread @ 0x1402DE570 (KiDirectSwitchThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402E936C (KiSetBasePriorityAndClearDecrement.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x14035D3EC (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiAbProcessThreadPriorityModification @ 0x14035F550 (KiAbProcessThreadPriorityModification.c)
 *     KiAbThreadBoostIoPriority @ 0x14035F5D4 (KiAbThreadBoostIoPriority.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14027F670 (KeInsertQueueDpc.c)
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
