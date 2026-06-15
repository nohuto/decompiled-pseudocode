/*
 * XREFs of PolicyConfigGetDeviceFormat @ 0x180052220
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800085C0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000F660 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x180045540 (MIDL_user_allocate.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memcpy_0 @ 0x18007418F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyConfigGetDeviceFormat(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  struct _TP_TIMER **v7; // rax
  __int64 v8; // r8
  int v9; // ebx
  void *v10; // rax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  void *Src; // [rsp+98h] [rbp+20h] BYREF

  Src = 0LL;
  v7 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v7[1], v8, (struct _TP_TIMER *)L"PolicyConfigGetDeviceFormat");
  *a4 = 0LL;
  v9 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, void **))(*(_QWORD *)g_PolicyConfig + 32LL))(
         g_PolicyConfig,
         a2,
         a3,
         &Src);
  if ( v9 >= 0 )
  {
    v10 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
    *a4 = v10;
    if ( v10 )
      memcpy_0(v10, Src, *((unsigned __int16 *)Src + 8) + 18LL);
    else
      v9 = -2147024882;
  }
  if ( Src )
  {
    CoTaskMemFree(Src);
    Src = 0LL;
  }
  if ( v9 < 0 )
    AudSrvTraceLoggingErrorHelper("PolicyConfigGetDeviceFormat", 0xF14u, v9);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v9;
}
