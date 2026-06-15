/*
 * XREFs of ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x1400053EC
 * Callers:
 *     ?Resume@CAudioDeviceGraph@@UEAAJXZ @ 0x1400014E0 (-Resume@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x140001A6C (--1CAudioDeviceGraph@@QEAA@XZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140002E60 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@Z @ 0x140003368 (-InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@.c)
 *     ?Pause@CAudioDeviceGraph@@UEAAJXZ @ 0x1400047C0 (-Pause@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140004CC0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x140005490 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140008230 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140008AC0 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000E170 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140014AE8 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ??0CAudioDGModule@@QEAA@XZ @ 0x140014E14 (--0CAudioDGModule@@QEAA@XZ.c)
 *     ?FallbackTelemetryCallback@AudioDgTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x14001C1D0 (-FallbackTelemetryCallback@AudioDgTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z.c)
 *     ?AudioDGUnhandledExceptionFilter@@YAJPEAU_EXCEPTION_POINTERS@@@Z @ 0x1400418C0 (-AudioDGUnhandledExceptionFilter@@YAJPEAU_EXCEPTION_POINTERS@@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14004D95C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x14001C0BC (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x14001D68C (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<AudioDgTelemetryProvider>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  v7 = 0LL;
  if ( InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&v6, (LPVOID *)&v7)
    && (_DWORD)v6 )
  {
    v4 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
    v7 = &qword_140090458;
    qword_140090458 = (__int64)&AudioDgTelemetryProvider::`vftable';
    qword_140090470 = (__int64)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v4);
  }
  return v7;
}
