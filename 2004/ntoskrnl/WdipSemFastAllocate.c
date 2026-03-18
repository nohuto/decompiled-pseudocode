/*
 * XREFs of WdipSemFastAllocate @ 0x1407765E0
 * Callers:
 *     WdipSemBuildScenarioInstance @ 0x1407762CC (WdipSemBuildScenarioInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x1407763C4 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemLoadScenarioTable @ 0x14079AEF4 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x14079B300 (WdipSemLoadNextScenario.c)
 *     WdipSemUpdateProviderTableWithEvent @ 0x14079BB64 (WdipSemUpdateProviderTableWithEvent.c)
 *     WdipSemAddContextEventToScenario @ 0x14079BEE8 (WdipSemAddContextEventToScenario.c)
 *     WdipSemAddEndEventToScenario @ 0x14079BFA8 (WdipSemAddEndEventToScenario.c)
 *     WdipSemUpdateFrequentScenarioTable @ 0x14092CA74 (WdipSemUpdateFrequentScenarioTable.c)
 *     WdipSemUpdateInflightScenarioTable @ 0x14092CB30 (WdipSemUpdateInflightScenarioTable.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1403FEFF0 (RtlpInterlockedPopEntrySList.c)
 *     WdipSemAllocatePool @ 0x1407ADD48 (WdipSemAllocatePool.c)
 */

PSLIST_ENTRY __fastcall WdipSemFastAllocate(int a1, unsigned int a2)
{
  PSLIST_ENTRY result; // rax

  result = RtlpInterlockedPopEntrySList(&stru_140C53AF0 + a1);
  if ( !result )
    return (PSLIST_ENTRY)WdipSemAllocatePool(a2);
  return result;
}
