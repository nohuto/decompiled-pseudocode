/*
 * XREFs of WdipSemFastAllocate @ 0x1407741D0
 * Callers:
 *     WdipSemBuildScenarioInstance @ 0x140773EBC (WdipSemBuildScenarioInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140773FB4 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadScenarioTable @ 0x14078551C (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140785928 (WdipSemLoadNextScenario.c)
 *     WdipSemUpdateProviderTableWithEvent @ 0x14078618C (WdipSemUpdateProviderTableWithEvent.c)
 *     WdipSemAddContextEventToScenario @ 0x140786510 (WdipSemAddContextEventToScenario.c)
 *     WdipSemAddEndEventToScenario @ 0x1407865D0 (WdipSemAddEndEventToScenario.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x14092B7C4 (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemUpdateInflightScenarioTable @ 0x14092B880 (WdipSemUpdateInflightScenarioTable.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1403FDD60 (RtlpInterlockedPopEntrySList.c)
 *     WdipSemAllocatePool @ 0x1407AABE8 (WdipSemAllocatePool.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastAllocate(int a1, unsigned int a2)
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList(&stru_140C53BF0 + a1);
  if ( !result )
    return (PSLIST_ENTRY)WdipSemAllocatePool(a2);
  return result;
}
