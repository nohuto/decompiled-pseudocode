/*
 * XREFs of ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800096D0
 * Callers:
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_tlgProvider_t@@XZ @ 0x18000D3F8 (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x18000D504 (-Instance@FeatureLogging@details@wil@@KAPEAV123@XZ.c)
 *     ?Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18000DDA4 (-Provider@TaskbarLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x180022DCC (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ @ 0x180028578 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?Provider@CDMUtilsUnlockLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18007D49C (-Provider@CDMUtilsUnlockLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
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
  *((_QWORD *)a2 + 5) = 0LL;
  *((_QWORD *)a2 + 6) = 0LL;
  ProviderId = v5;
  if ( !EventRegister(&ProviderId, (PENABLECALLBACK)tlgEnableCallback, a2, (PREGHANDLE)a2 + 4) )
    EventSetInformation(*((_QWORD *)a2 + 4), 2LL, *((_QWORD *)a2 + 1), **((unsigned __int16 **)a2 + 1));
  v6 = *(_QWORD *)this;
  *((_DWORD *)this + 5) = 1;
  (*(void (__fastcall **)(wil::TraceLoggingProvider *))(v6 + 8))(this);
}
