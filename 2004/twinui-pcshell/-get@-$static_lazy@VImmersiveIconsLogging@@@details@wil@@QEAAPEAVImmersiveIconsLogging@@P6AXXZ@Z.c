/*
 * XREFs of ?get@?$static_lazy@VImmersiveIconsLogging@@@details@wil@@QEAAPEAVImmersiveIconsLogging@@P6AXXZ@Z @ 0x1804715C4
 * Callers:
 *     ??1?$ActivityData@VImmersiveIconsLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18046D3AC (--1-$ActivityData@VImmersiveIconsLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBas.c)
 *     ?NotifyFailure@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180470300 (-NotifyFailure@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsPr.c)
 *     ?ReportStopActivity@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1804707D0 (-ReportStopActivity@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z @ 0x180470BC4 (-StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z.c)
 *     ?Stop@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180470D04 (-Stop@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?StopActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@MEAAXXZ @ 0x180470DF0 (-StopActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1801383D0 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 */

LPVOID __fastcall wil::details::static_lazy<ImmersiveIconsLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`ImmersiveIconsLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v5, &v6) && (_DWORD)v5 )
  {
    v6 = &qword_1805CE5A8;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_1805CE5A8);
    qword_1805CE5A8 = &ImmersiveIconsLogging::`vftable';
    qword_1805CE5C0 = (struct _tlgProvider_t *)&`ImmersiveIconsLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CE5A8, qword_1805CE5C0, v3);
    InitOnceComplete(&`ImmersiveIconsLogging::Instance'::`2'::wrapper, 0, &qword_1805CE5A8);
  }
  return v6;
}
