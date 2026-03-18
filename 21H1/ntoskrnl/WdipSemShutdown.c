/*
 * XREFs of WdipSemShutdown @ 0x14092B560
 * Callers:
 *     WdipSemDisableScenario @ 0x140774B60 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140774DEC (WdipSemEnableScenario.c)
 *     WdipSemCleanStart @ 0x140784C00 (WdipSemCleanStart.c)
 *     WdipSemUpdate @ 0x14092B2A4 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x1403AF32C (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x140408F80 (memset.c)
 *     WdipSemFreePool @ 0x14092B968 (WdipSemFreePool.c)
 *     WdipSemDisableAllProviders @ 0x14092C118 (WdipSemDisableAllProviders.c)
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
  qword_140C1C548 = 0LL;
  dword_140C1A530 = 0;
  qword_140C1A538 = 0LL;
  qword_140C1A528 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
