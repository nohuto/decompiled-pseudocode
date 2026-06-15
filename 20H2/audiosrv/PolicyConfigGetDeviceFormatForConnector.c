/*
 * XREFs of PolicyConfigGetDeviceFormatForConnector @ 0x1800D9240
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800085C0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000F660 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x180045540 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x18007418F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyConfigGetDeviceFormatForConnector(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5)
{
  struct _TP_TIMER **v8; // rax
  __int64 v9; // r8
  int v10; // ebx
  void *v11; // rcx
  __int64 v12; // rdx
  void *v13; // rax
  void *v14; // rcx
  void *Src; // [rsp+38h] [rbp-11h] BYREF
  void **p_Src; // [rsp+40h] [rbp-9h]
  int v18[2]; // [rsp+48h] [rbp-1h] BYREF
  char v19; // [rsp+50h] [rbp+7h]
  struct _TP_TIMER *pv[8]; // [rsp+58h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+57h]

  Src = 0LL;
  v8 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v8[1], v9, (struct _TP_TIMER *)L"PolicyConfigGetDeviceFormatForConnector");
  *(_QWORD *)v18 = 0LL;
  p_Src = &Src;
  v19 = 1;
  *a5 = 0LL;
  v10 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)g_PolicyConfig + 304LL))(
          g_PolicyConfig,
          a2,
          a3,
          a4,
          v18);
  if ( v19 )
  {
    v11 = *p_Src;
    *p_Src = *(void **)v18;
    if ( v11 )
      CoTaskMemFree(v11);
  }
  if ( v10 < 0 )
  {
    v12 = 3874LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_10;
  }
  v13 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
  *a5 = v13;
  if ( !v13 )
  {
    v10 = -2147024882;
    v12 = 3881LL;
    goto LABEL_8;
  }
  memcpy_0(v13, Src, *((unsigned __int16 *)Src + 8) + 18LL);
  v10 = 0;
LABEL_10:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  v14 = Src;
  Src = 0LL;
  if ( v14 )
    CoTaskMemFree(v14);
  return (unsigned int)v10;
}
