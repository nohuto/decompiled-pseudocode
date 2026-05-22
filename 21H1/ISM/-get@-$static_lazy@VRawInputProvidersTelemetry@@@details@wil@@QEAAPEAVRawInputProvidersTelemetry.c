/*
 * XREFs of ?get@?$static_lazy@VRawInputProvidersTelemetry@@@details@wil@@QEAAPEAVRawInputProvidersTelemetry@@P6AXXZ@Z @ 0x180034DD8
 * Callers:
 *     ?LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x180034D24 (-LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 *     ?LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x18009CDD0 (-LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180037164 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18003BEFC (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<RawInputProvidersTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`RawInputProvidersTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v4, &v5) && (_DWORD)v4 )
  {
    v5 = &qword_18020A0C8;
    qword_18020A0C8 = &RawInputProvidersContinuousTracing::`vftable';
    qword_18020A0E0 = (struct _tlgProvider_t *)&`RawInputProvidersTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18020A0C8, qword_18020A0E0, 0LL);
    InitOnceComplete(&`RawInputProvidersTelemetry::Instance'::`2'::wrapper, 0, &qword_18020A0C8);
  }
  return v5;
}
