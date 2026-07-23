/*
 * XREFs of WdipSemInitializeGlobalState @ 0x14079C070
 * Callers:
 *     WdipSemInitialize @ 0x14079A584 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x14092C554 (WdipSemUpdate.c)
 * Callees:
 *     InitializeSListHead @ 0x1402FDA50 (InitializeSListHead.c)
 *     WdipSemClearFrequentScenarioTable @ 0x1403B9A90 (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x14040A280 (memset.c)
 */

void *WdipSemInitializeGlobalState()
{
  __int64 v0; // rdi
  _SLIST_HEADER *v1; // rbx
  void *result; // rax

  WdipSemPushLock = 0LL;
  WdipSemRegHandle = 0LL;
  WdipSemEnabled = 0;
  WdipSemTimeoutEnabled = 0;
  WdipSemTimeoutValue = 0;
  WdipSemDisabledScenarioTable = 0LL;
  WdipDiagLoggerId = 0;
  WdipContextLoggerId = 0;
  memset(&WdipSemPool, 0, 0x90uLL);
  qword_140C53AC8 = (__int64)&WdipSemPool;
  v0 = 6LL;
  WdipSemPool = &WdipSemPool;
  v1 = &stru_140C53AF0;
  qword_140C53AE0 = 0LL;
  do
  {
    InitializeSListHead(v1++);
    --v0;
  }
  while ( v0 );
  memset(WdipSemScenarioTable, 0, 0x208uLL);
  memset(WdipSemProviderTable, 0, 0x2008uLL);
  qword_140C1C388 = 0LL;
  qword_140C1C3A8 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  dword_140C1C3B0 = 0;
  qword_140C1C3B8 = 0LL;
  result = WdipSemClearFrequentScenarioTable();
  WdipSemInitialized = 1;
  return result;
}
