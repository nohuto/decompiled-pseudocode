/*
 * XREFs of ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180006B78
 * Callers:
 *     ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x180009AD4 (-Instance@FeatureLogging@details@wil@@KAPEAV123@XZ.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000A1AC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18003EF80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::TraceLoggingProvider::Register(
        wil::TraceLoggingProvider *this,
        const struct _tlgProvider_t *const a2,
        void (*a3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))
{
  GUID v5; // xmm0
  __int64 v6; // rax
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = 1;
  v5 = *(GUID *)(*((_QWORD *)a2 + 1) - 16LL);
  *((_QWORD *)a2 + 6) = 0LL;
  *((_QWORD *)a2 + 5) = a3;
  ProviderId = v5;
  if ( !EventRegister(&ProviderId, (PENABLECALLBACK)tlgEnableCallback, a2, (PREGHANDLE)a2 + 4) )
    EventSetInformation(*((_QWORD *)a2 + 4), 2LL, *((_QWORD *)a2 + 1), **((unsigned __int16 **)a2 + 1));
  v6 = *(_QWORD *)this;
  *((_DWORD *)this + 5) = 1;
  (*(void (__fastcall **)(wil::TraceLoggingProvider *))(v6 + 8))(this);
}
