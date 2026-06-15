/*
 * XREFs of AudioSessionManagerGetSessionForStreamSwitch @ 0x1800D1260
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180002420 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x1800024B0 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001A4F0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180044AE0 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z @ 0x180047A64 (-SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800BE26C (WPP_SF_q.c)
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x1800CA4A4 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CBC04 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 */

__int64 __fastcall AudioSessionManagerGetSessionForStreamSwitch(
        CAudioSessionManager ***a1,
        const unsigned __int16 *a2,
        struct CServerAudioSessionControl **a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  CAudioSessionManager **v8; // rsi
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  struct IAudioProcess *v12; // rdi
  CAudioSessionManager *v13; // rbx
  unsigned int v14; // eax
  int AudioSessionControl; // eax
  __int64 v16; // rdx
  struct CAudioSession *v17; // rbx
  CAudioSessionManager *v18; // rdi
  unsigned int v19; // eax
  bool v21; // [rsp+40h] [rbp-89h] BYREF
  struct IAudioProcess *v22; // [rsp+48h] [rbp-81h] BYREF
  unsigned int v23; // [rsp+50h] [rbp-79h] BYREF
  struct CServerAudioSessionControl *v24; // [rsp+58h] [rbp-71h] BYREF
  CAudioSession *v25; // [rsp+60h] [rbp-69h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+68h] [rbp-61h] BYREF
  _BYTE v27[80]; // [rsp+A0h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v6 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v6[1],
    v7,
    (struct _TP_TIMER *)L"AudioSessionManagerGetSessionForStreamSwitch");
  *a3 = 0LL;
  v8 = *a1;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Eu, (__int64)&WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids, *v8);
  }
  v22 = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v22);
  v9 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                                + 32LL))(
         g_PolicyManager,
         0LL,
         &v22);
  v10 = v9;
  if ( v9 >= 0 )
  {
    CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v27);
    v11 = CAudioSession::ParseStreamSwitchId(
            *((const unsigned __int16 **)*v8 + 37),
            a2,
            (struct CAudioSessionInstanceId *)v27,
            (unsigned int *)&v24,
            &v23,
            &v21);
    v10 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x913,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_19:
      CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v27);
      goto LABEL_20;
    }
    v12 = v22;
    v25 = 0LL;
    v13 = *v8;
    v14 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v22 + 40LL))(v22);
    AudioSessionControl = CAudioSessionManager::CreateAudioSession(
                            v13,
                            v12,
                            (struct CAudioSessionInstanceId *)v27,
                            (unsigned int)v24,
                            v23,
                            v14,
                            &v25);
    v10 = AudioSessionControl;
    if ( AudioSessionControl >= 0 )
    {
      v17 = v25;
      if ( (*(unsigned int (__fastcall **)(CAudioSession *))(*(_QWORD *)v25 + 56LL))(v25)
        || (AudioSessionControl = CAudioSession::SetDuckingOptOutPreference(v17, v21),
            v10 = AudioSessionControl,
            AudioSessionControl >= 0) )
      {
        v18 = *v8;
        v19 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v22 + 40LL))(v22);
        AudioSessionControl = CAudioSessionManager::GetAudioSessionControl(v18, v19, 0, v17, &v24);
        v10 = AudioSessionControl;
        if ( AudioSessionControl >= 0 )
        {
          v10 = 0;
          *a3 = v24;
          goto LABEL_18;
        }
        v16 = 2344LL;
      }
      else
      {
        v16 = 2337LL;
      }
    }
    else
    {
      v16 = 2329LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)AudioSessionControl);
LABEL_18:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x908,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_20:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v10;
}
