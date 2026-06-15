/*
 * XREFs of AudioServerSetAllVolumes @ 0x180001E80
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800085C0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000F660 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerSetAllVolumes(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  GUID v8; // xmm0
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // [rsp+20h] [rbp-A8h]
  _BYTE pv[56]; // [rsp+30h] [rbp-98h] BYREF
  GUID v15; // [rsp+68h] [rbp-60h]
  GUID v16; // [rsp+78h] [rbp-50h]
  GUID v17; // [rsp+88h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  if ( a1 )
    v8 = *(GUID *)(a1 + 280);
  else
    v8 = GUID_00000000_0000_0000_0000_000000000000;
  v15 = v8;
  v16 = v8;
  v17 = v8;
  EtwEventActivityIdControl(4LL, &v17);
  wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
    v9,
    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)a1 + 192LL))(a1, a2, a3, a4);
  v11 = v10;
  if ( v10 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDF2,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v10,
      v13);
  else
    v11 = 0;
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  EtwEventActivityIdControl(4LL, &v17);
  return v11;
}
