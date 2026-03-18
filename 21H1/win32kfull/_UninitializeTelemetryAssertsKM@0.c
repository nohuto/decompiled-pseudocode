/*
 * XREFs of _UninitializeTelemetryAssertsKM@0 @ 0xD3FD0
 * Callers:
 *     _UninitializeWin32kFullTelemetryAsserts@0 @ 0xD3FCA (_UninitializeWin32kFullTelemetryAsserts@0.c)
 * Callees:
 *     _UninitializeTelemetryAssertsLocks@0 @ 0xD40A0 (_UninitializeTelemetryAssertsLocks@0.c)
 *     _TakeTelemetryAssertsLock@4 @ 0xD40BE (_TakeTelemetryAssertsLock@4.c)
 *     _AreAssertsInitialized@0 @ 0xEAA46 (_AreAssertsInitialized@0.c)
 */

NTSTATUS __stdcall UninitializeTelemetryAssertsKM()
{
  NTSTATUS result; // eax
  int v1; // ecx
  void *v2; // eax
  REGHANDLE v3; // [esp-14h] [ebp-14h]
  REGHANDLE v4; // [esp-14h] [ebp-14h]
  REGHANDLE v5; // [esp-14h] [ebp-14h]

  result = AreAssertsInitialized();
  if ( !result )
  {
    _InterlockedDecrement(&g_AssertsOperational);
    if ( !TakeTelemetryAssertsLock() )
    {
      while ( (int *)g_MicrosoftTelemetryAssertsTriggeredList != &g_MicrosoftTelemetryAssertsTriggeredList )
      {
        if ( *(int **)(g_MicrosoftTelemetryAssertsTriggeredList + 4) != &g_MicrosoftTelemetryAssertsTriggeredList
          || (v1 = *(_DWORD *)g_MicrosoftTelemetryAssertsTriggeredList,
              *(_DWORD *)(*(_DWORD *)g_MicrosoftTelemetryAssertsTriggeredList + 4) != g_MicrosoftTelemetryAssertsTriggeredList) )
        {
          __fastfail(3u);
        }
        v2 = (void *)(g_MicrosoftTelemetryAssertsTriggeredList - 28);
        g_MicrosoftTelemetryAssertsTriggeredList = *(_DWORD *)g_MicrosoftTelemetryAssertsTriggeredList;
        *(_DWORD *)(v1 + 4) = &g_MicrosoftTelemetryAssertsTriggeredList;
        ExFreePoolWithTag(v2, 0x74727341u);
      }
      ExReleaseFastMutex(g_AssertFastMutex);
    }
    UninitializeTelemetryAssertsLocks();
    if ( g_ModuleName )
    {
      ExFreePoolWithTag(g_ModuleName, 0x74727341u);
      g_ModuleName = 0;
    }
    v3 = qword_279018;
    dword_279000 = 0;
    qword_279018 = 0LL;
    EtwUnregister(v3);
    v4 = qword_279070;
    dword_279058 = 0;
    qword_279070 = 0LL;
    EtwUnregister(v4);
    v5 = qword_279040;
    dword_279028 = 0;
    qword_279040 = 0LL;
    return EtwUnregister(v5);
  }
  return result;
}
