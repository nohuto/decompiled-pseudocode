/*
 * XREFs of WdipSemFastFree @ 0x140784BB4
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1406F3B70 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140784940 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x1407849C4 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadNextScenario @ 0x1407AA630 (WdipSemLoadNextScenario.c)
 *     WdipSemFreeScenario @ 0x1407AACAC (WdipSemFreeScenario.c)
 *     WdipSemRollBackProviderTable @ 0x1409325D4 (WdipSemRollBackProviderTable.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x1409326E4 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastFree(int a1, _SLIST_ENTRY *a2)
{
  PSLIST_ENTRY result; // rax

  if ( a2 )
    return RtlpInterlockedPushEntrySList(&stru_140C53B70 + a1, a2);
  return result;
}
