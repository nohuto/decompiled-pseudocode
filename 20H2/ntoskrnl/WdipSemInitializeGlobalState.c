/*
 * XREFs of WdipSemInitializeGlobalState @ 0x1407AB3A0
 * Callers:
 *     WdipSemInitialize @ 0x1407A98B4 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x140932384 (WdipSemUpdate.c)
 * Callees:
 *     InitializeSListHead @ 0x140338AF0 (InitializeSListHead.c)
 *     WdipSemClearFrequentScenarioTable @ 0x1403BBF10 (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x140411300 (memset.c)
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
  qword_140C53B48 = (__int64)&WdipSemPool;
  v0 = 6LL;
  WdipSemPool = &WdipSemPool;
  v1 = &stru_140C53B70;
  qword_140C53B60 = 0LL;
  do
  {
    InitializeSListHead(v1++);
    --v0;
  }
  while ( v0 );
  memset(WdipSemScenarioTable, 0, 0x208uLL);
  memset(WdipSemProviderTable, 0, 0x2008uLL);
  qword_140C1C208 = 0LL;
  qword_140C1A1E8 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  dword_140C1A1F0 = 0;
  qword_140C1A1F8 = 0LL;
  result = WdipSemClearFrequentScenarioTable();
  WdipSemInitialized = 1;
  return result;
}
