/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x1403BBF10
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x1407AB3A0 (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x140932640 (WdipSemShutdown.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset(&WdipSemFrequentScenarioTable, 0, 0x408uLL);
  qword_140C1C628 = 0LL;
  return result;
}
