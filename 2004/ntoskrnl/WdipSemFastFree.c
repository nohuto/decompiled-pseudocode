/*
 * XREFs of WdipSemFastFree @ 0x1407765B4
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x14064CC18 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140776340 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x1407763C4 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadNextScenario @ 0x14079B300 (WdipSemLoadNextScenario.c)
 *     WdipSemFreeScenario @ 0x14079B97C (WdipSemFreeScenario.c)
 *     WdipSemRollBackProviderTable @ 0x14092C7A4 (WdipSemRollBackProviderTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x14092C8B4 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList(&stru_140C53AF0 + a1, a2);
  return result;
}
