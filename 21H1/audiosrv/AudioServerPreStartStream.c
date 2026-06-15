/*
 * XREFs of AudioServerPreStartStream @ 0x1800E0BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180046C04 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerPreStartStream(char *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // r8
  int v5; // eax
  unsigned int v6; // ebx
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v9[16]; // [rsp+68h] [rbp-30h] BYREF
  _BYTE v10[16]; // [rsp+78h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v9, a1);
  v3 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         v2,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v3[1],
    v4,
    (struct _TP_TIMER *)L"AudioServerPreStartStream");
  v5 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a1 + 88LL))(a1);
  v6 = v5;
  if ( v5 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCAA,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v5);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, v10);
  return v6;
}
