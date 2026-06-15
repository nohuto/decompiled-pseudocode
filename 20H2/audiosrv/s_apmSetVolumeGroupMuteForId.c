/*
 * XREFs of s_apmSetVolumeGroupMuteForId @ 0x1800F83F0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800085C0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000F660 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_apmSetVolumeGroupMuteForId(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _TP_TIMER **v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v13 = 0LL;
  v7 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v7[1], v8, (struct _TP_TIMER *)L"s_apmSetVolumeGroupMuteForId");
  if ( (**(int (__fastcall ***)(struct IAudioPolicyManager *, GUID *, __int64 *))g_PolicyManager)(
         g_PolicyManager,
         &GUID_c013f1c5_445a_4e19_8cd2_f88de6b9e0ee,
         &v13) < 0 )
  {
    v11 = 0;
  }
  else
  {
    LOBYTE(v9) = a4 != 0;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v13 + 56LL))(v13, a2, a3, v9);
    v11 = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x351,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\playbackmanagerrpc.cpp",
        (const char *)(unsigned int)v10);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v11;
}
