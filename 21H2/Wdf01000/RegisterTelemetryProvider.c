/*
 * XREFs of RegisterTelemetryProvider @ 0x1C002F140
 * Callers:
 *     FxLibraryCommonCommission @ 0x1C002E7B8 (FxLibraryCommonCommission.c)
 * Callees:
 *     InitializeTelemetryAssertsKMWorkerInternal @ 0x1C0036A20 (InitializeTelemetryAssertsKMWorkerInternal.c)
 *     TraceLoggingRegisterEx_EtwRegister_2K @ 0x1C00BDAE0 (TraceLoggingRegisterEx_EtwRegister_2K.c)
 */

int __fastcall RegisterTelemetryProvider(
        const _tlgProvider_t *a1,
        void (__fastcall *a2)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *),
        void *a3)
{
  _STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  _STRING v5; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
  {
    RtlInitAnsiString(&DestinationString, "wdf01000.sys");
    v5 = DestinationString;
    InitializeTelemetryAssertsKMWorkerInternal(&v5);
  }
  return TraceLoggingRegisterEx_EtwRegister_2K(a1, a2, a3);
}
