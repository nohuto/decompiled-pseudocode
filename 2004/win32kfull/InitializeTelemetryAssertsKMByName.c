/*
 * XREFs of InitializeTelemetryAssertsKMByName @ 0x1C0126D38
 * Callers:
 *     InitializeWin32kFullTelemetryAsserts @ 0x1C0126D00 (InitializeWin32kFullTelemetryAsserts.c)
 * Callees:
 *     InitializeTelemetryAssertsLocks @ 0x1C0126E10 (InitializeTelemetryAssertsLocks.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C037C6C8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 InitializeTelemetryAssertsKMByName()
{
  _QWORD *PoolWithTag; // rax

  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return 0LL;
  if ( !(unsigned int)InitializeTelemetryAssertsLocks() )
  {
    qword_1C03364D8 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C037B040);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C037B008);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C037B078);
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
