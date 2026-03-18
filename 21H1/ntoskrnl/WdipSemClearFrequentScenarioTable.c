/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x1403AF32C
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x140786698 (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x14092B560 (WdipSemShutdown.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset(&WdipSemFrequentScenarioTable, 0, 0x408uLL);
  qword_140C1C968 = 0LL;
  return result;
}
