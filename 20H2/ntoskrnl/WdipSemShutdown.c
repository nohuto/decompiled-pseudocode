/*
 * XREFs of WdipSemShutdown @ 0x140932640
 * Callers:
 *     WdipSemDisableScenario @ 0x140785570 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x1407857FC (WdipSemEnableScenario.c)
 *     WdipSemCleanStart @ 0x1407A9908 (WdipSemCleanStart.c)
 *     WdipSemUpdate @ 0x140932384 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x1403BBF10 (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x140411300 (memset.c)
 *     WdipSemFreePool @ 0x140932A48 (WdipSemFreePool.c)
 *     WdipSemDisableAllProviders @ 0x1409331F8 (WdipSemDisableAllProviders.c)
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
  qword_140C1C208 = 0LL;
  dword_140C1A1F0 = 0;
  qword_140C1A1F8 = 0LL;
  qword_140C1A1E8 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
