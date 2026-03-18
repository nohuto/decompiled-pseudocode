/*
 * XREFs of WdipSemFastAllocate @ 0x140784BE0
 * Callers:
 *     WdipSemBuildScenarioInstance @ 0x1407848CC (WdipSemBuildScenarioInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x1407849C4 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadScenarioTable @ 0x1407AA224 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1407AA630 (WdipSemLoadNextScenario.c)
 *     WdipSemUpdateProviderTableWithEvent @ 0x1407AAE94 (WdipSemUpdateProviderTableWithEvent.c)
 *     WdipSemAddContextEventToScenario @ 0x1407AB218 (WdipSemAddContextEventToScenario.c)
 *     WdipSemAddEndEventToScenario @ 0x1407AB2D8 (WdipSemAddEndEventToScenario.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x1409328A4 (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemUpdateInflightScenarioTable @ 0x140932960 (WdipSemUpdateInflightScenarioTable.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1404052C0 (RtlpInterlockedPopEntrySList.c)
 *     WdipSemAllocatePool @ 0x1407BBC88 (WdipSemAllocatePool.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastAllocate(int a1, unsigned int a2)
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList(&stru_140C53B70 + a1);
  if ( !result )
    return (PSLIST_ENTRY)WdipSemAllocatePool(a2);
  return result;
}
