/*
 * XREFs of InitializeTelemetryAssertsKMByName @ 0x1C008E674
 * Callers:
 *     RegisterTelemetryProvider @ 0x1C0060590 (RegisterTelemetryProvider.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C00BC5EC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 __fastcall InitializeTelemetryAssertsKMByName(const char *ModuleName)
{
  void (__fastcall *v1)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // rdx
  void *v2; // r8
  void (__fastcall *v3)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // rdx
  void *v4; // r8
  void (__fastcall *v5)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // rdx
  void *v6; // r8
  _DWORD *PoolWithTag; // rax

  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
  {
    KeInitializeSpinLock(&g_AssertSpinLock);
    g_MicrosoftTelemetryAssertsTriggeredList.Blink = &g_MicrosoftTelemetryAssertsTriggeredList;
    g_MicrosoftTelemetryAssertsTriggeredList.Flink = &g_MicrosoftTelemetryAssertsTriggeredList;
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&Tlgmtakm_hTelemetryAssertProv, v1, v2);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&Tlgmtakm_hTelemetryAssertDiagTrackProv, v3, v4);
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&Tlgmtakm_hTelemetryAssertDiagTrack_KMProv, v5, v6);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xDuLL, 0x74727341u);
    g_ModuleName = PoolWithTag;
    *(_QWORD *)PoolWithTag = 0LL;
    PoolWithTag[2] = 0;
    strcpy((char *)PoolWithTag, "wdf01000.sys");
    _InterlockedExchangeAdd(&g_AssertsOperational, 1u);
  }
  return 0LL;
}
