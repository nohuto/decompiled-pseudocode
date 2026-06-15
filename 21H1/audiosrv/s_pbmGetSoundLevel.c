/*
 * XREFs of s_pbmGetSoundLevel @ 0x1800F9220
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmGetSoundLevel(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int SoundLevel; // ebx
  _QWORD *v10; // rax
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-40h] BYREF

  SoundLevel = 0;
  v10 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
          a1,
          _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, (struct _TP_TIMER *)v10[1], v11, (struct _TP_TIMER *)L"s_pbmGetSoundLevel");
  if ( (unsigned int)IsPbmSoundLevelSupported() )
  {
    SoundLevel = PbmGetSoundLevel(a1, a2, a3, a4, a5);
  }
  else if ( g_PolicyManager )
  {
    v16 = 0LL;
    v12 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
            g_PolicyManager,
            a1,
            &v16);
    v13 = v16;
    SoundLevel = v12;
    if ( v12 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v16 + 344LL))(
              v16,
              a2,
              a3,
              a4,
              a5);
      v13 = v16;
      SoundLevel = v14;
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return SoundLevel;
}
