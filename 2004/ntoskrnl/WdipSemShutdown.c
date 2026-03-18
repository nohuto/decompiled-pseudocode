/*
 * XREFs of WdipSemShutdown @ 0x14092C810
 * Callers:
 *     WdipSemDisableScenario @ 0x140776F70 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x1407771FC (WdipSemEnableScenario.c)
 *     WdipSemCleanStart @ 0x14079A5D8 (WdipSemCleanStart.c)
 *     WdipSemUpdate @ 0x14092C554 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x1403B9A90 (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x14040A280 (memset.c)
 *     WdipSemFreePool @ 0x14092CC18 (WdipSemFreePool.c)
 *     WdipSemDisableAllProviders @ 0x14092D3C8 (WdipSemDisableAllProviders.c)
 */

__int64 WdipSemShutdown()
{
  WdipSemDisabledScenarioTable = 0LL;
  WdipSemEnabled = 0;
  WdipSemTimeoutEnabled = 0;
  WdipSemTimeoutValue = 600;
  WdipSemDisableAllProviders();
  WdipDiagLoggerId = 0;
  WdipContextLoggerId = 0;
  memset(WdipSemScenarioTable, 0, 0x208uLL);
  memset(WdipSemProviderTable, 0, 0x2008uLL);
  qword_140C1C388 = 0LL;
  dword_140C1C3B0 = 0;
  qword_140C1C3B8 = 0LL;
  qword_140C1C3A8 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
