/*
 * XREFs of ?get@?$static_lazy@VPenWorkspaceBrokerLogging@@@details@wil@@QEAAPEAVPenWorkspaceBrokerLogging@@P6AXXZ@Z @ 0x18022383C
 * Callers:
 *     ??1?$ActivityData@VPenWorkspaceBrokerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18021F2F4 (--1-$ActivityData@VPenWorkspaceBrokerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ??1Completer@?$static_lazy@VPenWorkspaceBrokerTelemetry@@@details@wil@@QEAA@XZ @ 0x18021F3C4 (--1Completer@-$static_lazy@VPenWorkspaceBrokerTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?FailedToLoadDataFromDisk@PenWorkspaceBrokerTelemetry@@SAXXZ @ 0x18021FC3C (-FailedToLoadDataFromDisk@PenWorkspaceBrokerTelemetry@@SAXXZ.c)
 *     ?FailedToParseJsonString@PenWorkspaceBrokerTelemetry@@SAXXZ @ 0x18021FCA4 (-FailedToParseJsonString@PenWorkspaceBrokerTelemetry@@SAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180221670 (-NotifyFailure@-$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z @ 0x1802219AC (-OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAXXZ @ 0x180222A38 (-StartActivity@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAXXZ.c)
 *     ?Stop@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAX_N@Z @ 0x180222B50 (-Stop@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAX_N@Z.c)
 *     ?StopActivity@OfficeInstalled@PenWorkspaceBrokerTelemetry@@MEAAXXZ @ 0x180222DA0 (-StopActivity@OfficeInstalled@PenWorkspaceBrokerTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<PenWorkspaceBrokerLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`PenWorkspaceBrokerLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v5, (LPVOID *)&v6)
    && (_DWORD)v5 )
  {
    v6 = qword_1805CDED8;
    qword_1805CDED8[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CDEF0 = (struct _tlgProvider_t *)&`PenWorkspaceBrokerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CDED8, qword_1805CDEF0, v3);
    InitOnceComplete(&`PenWorkspaceBrokerLogging::Instance'::`2'::wrapper, 0, qword_1805CDED8);
  }
  return v6;
}
