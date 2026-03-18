/*
 * XREFs of _InitializeTelemetryAssertsKMByName@4 @ 0xEA95C
 * Callers:
 *     _InitializeWin32kFullTelemetryAsserts@0 @ 0xEA956 (_InitializeWin32kFullTelemetryAsserts@0.c)
 * Callees:
 *     _InitializeTelemetryAssertsLocks@0 @ 0xEAA08 (_InitializeTelemetryAssertsLocks@0.c)
 *     _AreAssertsInitialized@0 @ 0xEAA46 (_AreAssertsInitialized@0.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _TraceLoggingRegisterEx_EtwRegister_EtwSetInformation@12 @ 0x27A6CA (_TraceLoggingRegisterEx_EtwRegister_EtwSetInformation@12.c)
 */

int InitializeTelemetryAssertsKMByName()
{
  size_t v0; // ebx
  PVOID PoolWithTag; // edi

  if ( !AreAssertsInitialized() )
    return 0;
  if ( !InitializeTelemetryAssertsLocks() )
  {
    dword_26E7CC = (int)&g_MicrosoftTelemetryAssertsTriggeredList;
    g_MicrosoftTelemetryAssertsTriggeredList = (int)&g_MicrosoftTelemetryAssertsTriggeredList;
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_279028, 0);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_279058, 0);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_279000, 0);
    v0 = strlen("win32kfull.sys");
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v0 + 1, 0x74727341u);
    g_ModuleName = PoolWithTag;
    memset(PoolWithTag, 0, v0 + 1);
    memcpy(PoolWithTag, "win32kfull.sys", v0);
    _InterlockedExchangeAdd(&g_AssertsOperational, 1u);
    return 0;
  }
  return -1073741801;
}
