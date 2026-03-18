/*
 * XREFs of InitializeTelemetryAssertsKMByName @ 0x1C00BAC34
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C0294600 (Win32kBaseDriverEntry.c)
 * Callees:
 *     InitializeTelemetryAssertsLocks @ 0x1C00BAD0C (InitializeTelemetryAssertsLocks.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C02788F8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 InitializeTelemetryAssertsKMByName()
{
  _QWORD *PoolWithTag; // rax

  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return 0LL;
  if ( !(unsigned int)InitializeTelemetryAssertsLocks() )
  {
    qword_1C0248A48 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0277040);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0277008);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C0277078);
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0xFuLL, 0x74727341u);
    g_ModuleName = PoolWithTag;
    *PoolWithTag = 0LL;
    *((_DWORD *)PoolWithTag + 2) = 0;
    *((_WORD *)PoolWithTag + 6) = 0;
    strcpy((char *)PoolWithTag, "win32kbase.sys");
    _InterlockedExchangeAdd(&g_AssertsOperational, 1u);
    return 0LL;
  }
  return 3221225495LL;
}
