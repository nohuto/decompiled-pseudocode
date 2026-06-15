/*
 * XREFs of s_apmSetPersistedDefaultAudioEndpoint @ 0x1800EEF80
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D6F0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800CB120 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall s_apmSetPersistedDefaultAudioEndpoint(
        RPC_BINDING_HANDLE Binding,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  _QWORD *v9; // rax
  __int64 v10; // r8
  unsigned int v11; // eax
  int v12; // ebx
  bool v13; // dl
  char v14; // al
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r9
  int MMDeviceFromInterfaceId; // eax
  void *v20; // rcx
  HRESULT v21; // eax
  void *v22; // rcx
  unsigned __int64 i; // rbx
  int v24; // eax
  void *v25; // rcx
  LPVOID pv; // [rsp+38h] [rbp-41h] BYREF
  unsigned int Pid; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-31h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-29h] BYREF
  __int64 v31; // [rsp+58h] [rbp-21h] BYREF
  __int64 v32; // [rsp+60h] [rbp-19h] BYREF
  LPVOID *p_pv; // [rsp+68h] [rbp-11h]
  void *v34; // [rsp+70h] [rbp-9h] BYREF
  char v35; // [rsp+78h] [rbp-1h]
  struct _TP_TIMER *v36[7]; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+57h]

  v9 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)Binding,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    v36,
    (struct _TP_TIMER *)v9[1],
    v10,
    (struct _TP_TIMER *)L"s_apmSetPersistedDefaultAudioEndpoint");
  Pid = 0;
  v11 = I_RpcBindingInqLocalClientPID(Binding, &Pid);
  if ( !v11 )
  {
    v13 = Pid == GetCurrentProcessId();
    if ( !g_ADGProcess || (v14 = 1, Pid != LODWORD(g_ADGProcess[2].OwningThread)) )
      v14 = 0;
    if ( v13 || v14 )
    {
      v15 = 90LL;
      goto LABEL_42;
    }
    if ( a4 > 2 )
    {
      v15 = 95LL;
LABEL_42:
      v12 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
        (const char *)0x80070057LL);
      goto LABEL_43;
    }
    v31 = 0LL;
    v16 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager + 40LL))(
            g_PolicyManager,
            a2,
            &v31);
    v12 = v16;
    if ( v16 < 0 )
    {
      v17 = 100LL;
LABEL_16:
      v18 = (unsigned int)v16;
      goto LABEL_17;
    }
    if ( !v31 )
    {
      v12 = -2147024809;
      v17 = 101LL;
      v18 = 2147942487LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
        (const char *)v18);
LABEL_40:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
      goto LABEL_43;
    }
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v31 + 24LL))(v31, a3, a4, a5);
    v12 = v16;
    if ( v16 < 0 )
    {
      v17 = 103LL;
      goto LABEL_16;
    }
    v32 = 0LL;
    if ( a5 )
    {
      MMDeviceFromInterfaceId = mmdDevGetMMDeviceFromInterfaceId(a5, &v32);
      v12 = MMDeviceFromInterfaceId;
      if ( MMDeviceFromInterfaceId < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6E,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
          (const char *)(unsigned int)MMDeviceFromInterfaceId);
LABEL_39:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v32);
        goto LABEL_40;
      }
      p_pv = &pv;
      v29 = 0LL;
      pv = 0LL;
      v34 = 0LL;
      v35 = 1;
      v12 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, void **))(*(_QWORD *)v31 + 56LL))(v31, &v29, &v34);
      if ( v35 )
      {
        v20 = *p_pv;
        *p_pv = v34;
        if ( v20 )
          CoTaskMemFree(v20);
      }
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x74,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
          (const char *)(unsigned int)v12);
        goto LABEL_29;
      }
      if ( v29 )
      {
        ppv = 0LL;
        v21 = CoCreateInstance(
                &GUID_06cca63e_9941_441b_b004_39f999ada412,
                0LL,
                0x17u,
                &GUID_4d809b8a_96c4_4f77_9bb7_76bd429c16bb,
                &ppv);
        v12 = v21;
        if ( v21 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7A,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
            (const char *)(unsigned int)v21);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
LABEL_29:
          v22 = pv;
          pv = 0LL;
          if ( v22 )
            CoTaskMemFree(v22);
          goto LABEL_39;
        }
        for ( i = 0LL; i < v29; ++i )
        {
          v24 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD, _QWORD))(*(_QWORD *)ppv + 88LL))(
                  ppv,
                  v32,
                  a4,
                  *((unsigned int *)pv + i));
          if ( v24 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              126LL,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
              (const char *)(unsigned int)v24);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
      }
      v25 = pv;
      pv = 0LL;
      if ( v25 )
        CoTaskMemFree(v25);
    }
    v12 = 0;
    goto LABEL_39;
  }
  v12 = wil::details::in1diag3::Return_Win32(
          retaddr,
          86LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
          (const char *)v11);
LABEL_43:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v36);
  return (unsigned int)v12;
}
