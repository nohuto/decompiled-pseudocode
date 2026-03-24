/*
 * XREFs of KiAbQueueAutoBoostDpc @ 0x1402889FC
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14022F000 (ExpApplyPriorityBoost.c)
 *     KeSetActualBasePriorityThread @ 0x1402305B0 (KeSetActualBasePriorityThread.c)
 *     KiUpdateThreadPriority @ 0x140230E50 (KiUpdateThreadPriority.c)
 *     KiTryUnwaitThreadWithPriority @ 0x140242960 (KiTryUnwaitThreadWithPriority.c)
 *     KiRemoveBoostThread @ 0x14024AED0 (KiRemoveBoostThread.c)
 *     KiDirectSwitchThread @ 0x14024C840 (KiDirectSwitchThread.c)
 *     KeDelayExecutionThread @ 0x140257490 (KeDelayExecutionThread.c)
 *     KeSetBasePriorityThread @ 0x140258E60 (KeSetBasePriorityThread.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x14028748C (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiAbProcessThreadPriorityModification @ 0x1402888B0 (KiAbProcessThreadPriorityModification.c)
 *     KiAbThreadBoostIoPriority @ 0x140288934 (KiAbThreadBoostIoPriority.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402E9CCC (KiSetBasePriorityAndClearDecrement.c)
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x1402F73AC (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     KiDeferredReadySingleThread @ 0x140343EC0 (KiDeferredReadySingleThread.c)
 *     ExpAcquireResourceSharedLite @ 0x14034C060 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14034C9B0 (ExpAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIoEx @ 0x14034D800 (PsBoostThreadIoEx.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14021FD40 (KeInsertQueueDpc.c)
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
