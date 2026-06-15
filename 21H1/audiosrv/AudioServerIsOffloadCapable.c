/*
 * XREFs of AudioServerIsOffloadCapable @ 0x1800E0880
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180048860 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??I?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVCEndpointCharacteristics@@XZ @ 0x180071FE4 (--I-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVCEndpoint.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??I?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIAudioProcess@@XZ @ 0x1800C7068 (--I-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIAudioProcess@@XZ.c)
 */

__int64 __fastcall AudioServerIsOffloadCapable(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  __int64 *v14; // rax
  int v15; // eax
  __int64 v17; // [rsp+30h] [rbp-58h] BYREF
  CEndpointCharacteristics *v18; // [rsp+38h] [rbp-50h] BYREF
  struct _TP_TIMER *pv[8]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v8 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v8[1],
    v9,
    (struct _TP_TIMER *)L"AudioServerIsOffloadCapable");
  v17 = 0LL;
  v10 = *(_QWORD *)g_PolicyManager;
  v11 = wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator&((__int64)&v17);
  v12 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64))(v10 + 32))(g_PolicyManager, a1, v11);
  v13 = v12;
  if ( v12 >= 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct IProcessSubmixManager *, __int64))(*(_QWORD *)g_ProcessSubmixManager
                                                                                    + 80LL))(
           g_ProcessSubmixManager,
           v17)
      && (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v17 + 144LL))(v17, a3, 0LL) )
    {
      v18 = 0LL;
      v14 = wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::operator&((__int64 *)&v18);
      v15 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                 + 24LL))(
              g_pEndpointCharacteristicsCache,
              a2,
              0LL,
              0LL,
              v14);
      v13 = v15;
      if ( v15 >= 0 )
      {
        *a4 = CEndpointCharacteristics::HasHardwareAudioEngine(v18);
        v13 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x116C,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v15);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
    }
    else
    {
      *a4 = 0;
      v13 = 0;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x115E,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v12);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v13;
}
