/*
 * XREFs of WdipSemInitializeGlobalState @ 0x140786698
 * Callers:
 *     WdipSemInitialize @ 0x140784BAC (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x14092B2A4 (WdipSemUpdate.c)
 * Callees:
 *     InitializeSListHead @ 0x1402C1F70 (InitializeSListHead.c)
 *     WdipSemClearFrequentScenarioTable @ 0x1403AF32C (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x140408F80 (memset.c)
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
  qword_140C53BC8 = (__int64)&WdipSemPool;
  v0 = 6LL;
  WdipSemPool = &WdipSemPool;
  v1 = &stru_140C53BF0;
  qword_140C53BE0 = 0LL;
  do
  {
    InitializeSListHead(v1++);
    --v0;
  }
  while ( v0 );
  memset(WdipSemScenarioTable, 0, 0x208uLL);
  memset(WdipSemProviderTable, 0, 0x2008uLL);
  qword_140C1C548 = 0LL;
  qword_140C1A528 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  dword_140C1A530 = 0;
  qword_140C1A538 = 0LL;
  result = WdipSemClearFrequentScenarioTable();
  WdipSemInitialized = 1;
  return result;
}
