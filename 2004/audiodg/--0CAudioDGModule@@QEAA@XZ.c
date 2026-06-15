/*
 * XREFs of ??0CAudioDGModule@@QEAA@XZ @ 0x140015124
 * Callers:
 *     _dynamic_initializer_for___AtlModule__ @ 0x1400010B0 (_dynamic_initializer_for___AtlModule__.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x14000538C (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x140013FF0 (--0-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ.c)
 *     memset_0 @ 0x14001DBE8 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x140031EFC (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

// Hidden C++ exception states: #wind=9
CAudioDGModule *__fastcall CAudioDGModule::CAudioDGModule(CAudioDGModule *this)
{
  int v1; // eax
  int v2; // ecx
  const struct wil::FailureInfo *v4; // rdx
  GUID *v5; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v6[152]; // [rsp+50h] [rbp-98h] BYREF

  ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>();
  _AtlModule = (__int64)&CAudioDGModule::`vftable'{for `ATL::CAtlExeModuleT<CAudioDGModule>'};
  qword_140084F38 = (__int64)&CAudioDGModule::`vftable'{for `IAudioHealthMonitor'};
  qword_140084F48 = 0LL;
  hHandle = 0LL;
  qword_140084F58 = 0LL;
  dword_140084F60 = 0;
  byte_140084F64 = 0;
  qword_140084F68 = 0LL;
  v5 = &GUID_NULL;
  g_fEventTracingEnabled = 1;
  v1 = ((__int64 (__fastcall *)(unsigned int (__fastcall *)(enum WMIDPREQUESTCODE, void *, unsigned int *, void *), _QWORD, void *, __int64, GUID **, _QWORD, _QWORD, __int64 *))EtwRegisterTraceGuidsW)(
         AeWmiCallback,
         0LL,
         &AEWMIGUID,
         1LL,
         &v5,
         0LL,
         0LL,
         &qword_140066020);
  v2 = g_fEventTracingEnabled;
  if ( v1 )
    v2 = 0;
  g_fEventTracingEnabled = v2;
  if ( wil::details::g_pfnTelemetryCallback
    && (char *)wil::details::g_pfnTelemetryCallback != (char *)AudioDgTelemetryProvider::FallbackTelemetryCallback )
  {
    memset_0(v6, 0, 0x90uLL);
    wil::details::WilFailFast((wil::details *)v6, v4);
  }
  wil::details::g_pfnTelemetryCallback = (void (*)(bool, const struct wil::FailureInfo *))AudioDgTelemetryProvider::FallbackTelemetryCallback;
  *(_QWORD *)&g_SysFxUtilTlp = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                                 (__int64)AudioDgTelemetryProvider::FallbackTelemetryCallback,
                                 _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
  SetUnhandledExceptionFilter(AudioDGUnhandledExceptionFilter);
  return (CAudioDGModule *)&_AtlModule;
}
