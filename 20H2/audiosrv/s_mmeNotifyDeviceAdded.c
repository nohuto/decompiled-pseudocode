/*
 * XREFs of s_mmeNotifyDeviceAdded @ 0x1800F7A20
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800085C0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000F660 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x1800F748C (-CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z.c)
 *     ?MmeOnDeviceAdded@@YAJPEBG@Z @ 0x1800F7754 (-MmeOnDeviceAdded@@YAJPEBG@Z.c)
 */

__int64 __fastcall s_mmeNotifyDeviceAdded(__int64 a1, const unsigned __int16 *a2)
{
  struct _TP_TIMER **v3; // rax
  __int64 v4; // r8
  void *v5; // rdx
  void *v6; // rcx
  DWORD LastError; // ebx
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+90h] [rbp+18h] BYREF

  v3 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v3[1], v4, (struct _TP_TIMER *)L"s_mmeNotifyDeviceAdded");
  LastError = 0;
  if ( (unsigned int)CheckRpcClientTokenMembershipsDisjunctive(v6, v5, &v10) )
  {
    if ( !v10 || (MmeOnDeviceAdded(a2), !v10) )
      LastError = 5;
  }
  else
  {
    LastError = GetLastError();
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return LastError;
}
