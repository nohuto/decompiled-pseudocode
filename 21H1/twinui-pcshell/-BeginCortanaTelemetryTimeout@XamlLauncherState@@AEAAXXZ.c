/*
 * XREFs of ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18031203C
 * Callers:
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180314E40 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180315700 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800173F4 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto_ea_1800173F4.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18001749C (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto_ea_18001749C.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800520CC (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801847FC (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x180309808 (--0CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x180309B8C (--1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ.c)
 *     ??4CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180311EE8 (--4CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?StartActivity@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAXXZ @ 0x1803150A4 (-StartActivity@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAAXXZ.c)
 */

void __fastcall XamlLauncherState::BeginCortanaTelemetryTimeout(char *pv)
{
  struct _TP_TIMER **v1; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v4; // r9
  struct _TP_TIMER *v5; // rcx
  struct _FILETIME pftDueTime; // [rsp+28h] [rbp-E0h] BYREF
  volatile signed __int32 *v7[40]; // [rsp+38h] [rbp-D0h] BYREF
  volatile signed __int32 *v8[40]; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D0h] [rbp+1C8h]

  v1 = (struct _TP_TIMER **)(pv + 960);
  if ( !*((_QWORD *)pv + 120) )
  {
    StartWindowTelemetry::CortanaLauncherInvokeActivity::CortanaLauncherInvokeActivity((StartWindowTelemetry::CortanaLauncherInvokeActivity *)v8);
    if ( **((_DWORD **)pv + 82) != 1 )
    {
      wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v7,
        (__int64)"CortanaLauncherInvokeActivity");
      v7[0] = (volatile signed __int32 *)&StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
      StartWindowTelemetry::CortanaLauncherInvokeActivity::StartActivity((StartWindowTelemetry::CortanaLauncherInvokeActivity *)v7);
      StartWindowTelemetry::CortanaLauncherInvokeActivity::operator=((__int64)v8, (__int64)v7);
      StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity(v7);
    }
    ThreadpoolTimer = CreateThreadpoolTimer(
                        (PTP_TIMER_CALLBACK)lambda_63a258090519b332dfe8d270edc6c21b_::_lambda_invoker_cdecl_,
                        pv,
                        0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v1,
      ThreadpoolTimer);
    v5 = *v1;
    if ( *v1
      || (wil::details::in1diag3::_Log_NullAlloc(
            retaddr,
            1250LL,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            v4),
          (v5 = (struct _TP_TIMER *)*((_QWORD *)pv + 120)) != 0LL) )
    {
      pftDueTime = (struct _FILETIME)(-10000000LL * *((unsigned int *)pv + 17));
      SetThreadpoolTimer(v5, &pftDueTime, 0, 0x3E8u);
    }
    if ( *v8[6] == 1 )
    {
      wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v7,
        (__int64)v8,
        0);
      v7[0] = (volatile signed __int32 *)&StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
      StartWindowTelemetry::CortanaLauncherInvokeActivity::operator=((__int64)(pv + 608), (__int64)v7);
      StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity(v7);
    }
    StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity(v8);
  }
}
