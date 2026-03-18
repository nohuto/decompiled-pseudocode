/*
 * XREFs of InitializeTelemetryAssertsKMWorkerInternal @ 0x1C0017F04
 * Callers:
 *     InitializeTelemetryAssertsKM @ 0x1C0017D40 (InitializeTelemetryAssertsKM.c)
 * Callees:
 *     memmove @ 0x1C0019A00 (memmove.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C00726B8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall InitializeTelemetryAssertsKMWorkerInternal(const void **a1)
{
  unsigned int v2; // ebx
  void *Pool2; // rax

  KeInitializeSpinLock(&g_AssertSpinLock);
  v2 = 0;
  Pool2 = (void *)ExAllocatePool2(64LL, *(unsigned __int16 *)a1 + 1LL, 1953657665LL);
  g_ModuleName = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, a1[1], *(unsigned __int16 *)a1);
    qword_1C0062888 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C006A040);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C006A008);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C006A078);
    _InterlockedExchangeAdd(&g_AssertsOperational, 1u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
