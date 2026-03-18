/*
 * XREFs of InitializeTelemetryAssertsKMByName @ 0x1C01286F8
 * Callers:
 *     InitializeWin32kFullTelemetryAsserts @ 0x1C01286C0 (InitializeWin32kFullTelemetryAsserts.c)
 * Callees:
 *     InitializeTelemetryAssertsLocks @ 0x1C01287D0 (InitializeTelemetryAssertsLocks.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C037B6C8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 InitializeTelemetryAssertsKMByName()
{
  _QWORD *PoolWithTag; // rax

  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return 0LL;
  if ( !(unsigned int)InitializeTelemetryAssertsLocks() )
  {
    qword_1C03354F8 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C037A040);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C037A008);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C037A078);
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0xFuLL, 0x74727341u);
    g_ModuleName = PoolWithTag;
    *PoolWithTag = 0LL;
    *((_DWORD *)PoolWithTag + 2) = 0;
    *((_WORD *)PoolWithTag + 6) = 0;
    strcpy((char *)PoolWithTag, "win32kfull.sys");
    _InterlockedExchangeAdd(&g_AssertsOperational, 1u);
    return 0LL;
  }
  return 3221225495LL;
}
