/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x1403B9A90
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x14079C070 (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x14092C810 (WdipSemShutdown.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset(&WdipSemFrequentScenarioTable, 0, 0x408uLL);
  qword_140C1C7C8 = 0LL;
  return result;
}
