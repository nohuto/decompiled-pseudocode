/*
 * XREFs of UninitializeTelemetryAssertsKM @ 0x1C005172C
 * Callers:
 *     DriverCleanup @ 0x1C0077510 (DriverCleanup.c)
 * Callees:
 *     <none>
 */

NTSTATUS UninitializeTelemetryAssertsKM()
{
  NTSTATUS result; // eax
  KIRQL v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rax
  REGHANDLE v4; // rcx
  REGHANDLE v5; // rcx
  REGHANDLE v6; // rcx

  result = _InterlockedExchangeAdd(&g_AssertsOperational, 0);
  if ( result )
  {
    _InterlockedDecrement(&g_AssertsOperational);
    v1 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
    while ( 1 )
    {
      v2 = g_MicrosoftTelemetryAssertsTriggeredList;
      if ( (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList == &g_MicrosoftTelemetryAssertsTriggeredList )
        break;
      if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList
        || (v3 = *(_QWORD *)g_MicrosoftTelemetryAssertsTriggeredList,
            *(_QWORD *)(*(_QWORD *)g_MicrosoftTelemetryAssertsTriggeredList + 8LL) != g_MicrosoftTelemetryAssertsTriggeredList) )
      {
        __fastfail(3u);
      }
      g_MicrosoftTelemetryAssertsTriggeredList = *(_QWORD *)g_MicrosoftTelemetryAssertsTriggeredList;
      *(_QWORD *)(v3 + 8) = &g_MicrosoftTelemetryAssertsTriggeredList;
      ExFreePoolWithTag((PVOID)(v2 - 32), 0x74727341u);
    }
    KeReleaseSpinLock(&g_AssertSpinLock, v1);
    if ( g_ModuleName )
    {
      ExFreePoolWithTag(g_ModuleName, 0x74727341u);
      g_ModuleName = 0LL;
    }
    v4 = RegHandle;
    RegHandle = 0LL;
    dword_1C006A078 = 0;
    EtwUnregister(v4);
    v5 = qword_1C006A028;
    qword_1C006A028 = 0LL;
    dword_1C006A008 = 0;
    EtwUnregister(v5);
    v6 = qword_1C006A060;
    qword_1C006A060 = 0LL;
    dword_1C006A040 = 0;
    return EtwUnregister(v6);
  }
  return result;
}
