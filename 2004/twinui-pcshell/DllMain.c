/*
 * XREFs of DllMain @ 0x180092348
 * Callers:
 *     dllmain_dispatch @ 0x18008CE30 (dllmain_dispatch.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180085A68 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     ?SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@Z@Z @ 0x18013B938 (-SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@Z@Z.c)
 *     McGenEventRegister_EventRegister @ 0x18013DCFC (McGenEventRegister_EventRegister.c)
 *     McGenEventUnregister_EventUnregister @ 0x18013DD30 (McGenEventUnregister_EventUnregister.c)
 *     TlgRegisterAggregateProviderEx @ 0x18013ED04 (TlgRegisterAggregateProviderEx.c)
 *     TlgUnregisterAggregateProvider @ 0x18013EE14 (TlgUnregisterAggregateProvider.c)
 *     SHFusionUninitialize @ 0x18013F124 (SHFusionUninitialize.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  void (*v4)(const struct wil::FailureInfo *); // rdx
  REGHANDLE v5; // rcx

  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      McGenEventRegister_EventRegister(
        hinstDLL,
        fdwReason,
        MICROSOFT_TWINUI_PUBLISHER_Context,
        MICROSOFT_TWINUI_PUBLISHER_Context);
      TlgRegisterAggregateProviderEx();
      EventSetInformation(
        MICROSOFT_TWINUI_PUBLISHER_Context[0],
        2LL,
        &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
        (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
      TraceLoggingRegisterEx_EventRegister_EventSetInformation((ULONGLONG *)&dword_1805C4688, 0LL, 0LL);
      hModule = hinstDLL;
      dword_1805CEB48 = 123;
      DisableThreadLibraryCalls(hinstDLL);
      wil::SetResultLoggingCallback((wil *)lambda_782dd1c6212710f2b0fe5b424d5af40d_::_lambda_invoker_cdecl_, v4);
    }
  }
  else
  {
    McGenEventUnregister_EventUnregister(MICROSOFT_TWINUI_PUBLISHER_Context, fdwReason, lpvReserved);
    TlgUnregisterAggregateProvider();
    v5 = RegHandle;
    RegHandle = 0LL;
    dword_1805C4688 = 0;
    EventUnregister(v5);
    SHFusionUninitialize();
  }
  return 1;
}
